#ifndef __CPU_H__
#define __CPU_H__

#include "MOS6502.h"
#include <map>

namespace cpu
{
    typedef mos6502::i16 (*opHandler)(mos6502::i16);
    class CPU
    {
    private:
            /**************************REGISTER**************************/
            // SPECIAL-PURPOSE REGISTER
            mos6502::i16 PC;
            mos6502::i8  SP = 0X1FF;    // 0X100 - 0X1FF , GROES DOWNWORDS.
            mos6502::i8  P;               // PROCESSOR FLAG,BELOW ARE DETAILS:
                mos6502::i8  CarryFlag              = 0x1; // (0x1<<0 & P)>>0;     // SET IF THE LAST INSTRACTION RESULTED IN AN OVER OR UNDERFLOW. 
                                                                                                // USED FOR ARITHMETIC ON NUMBERS LARGER THAN ONE BYTE, 
                                                                                                // WHERE THE NEXT INSTRACTION IS CRRAY-FLAG AWARE.
                mos6502::i8  ZeroFlag               = 0x2; // (0x1<<1 & P)>>1;     // SET IF THE LAST INATRACTION RESULTED IN A VALUE OF 0.
                mos6502::i8  InterruptDisable    = 0x3; // (0x1<<2 & P)>>2;     // SET TO DISABLE RESPOMDING TO MASKABLE INTERRUPT.
                mos6502::i8  DecimalMode           = 0x4; // (0x1<<3 & P)>>3;     // SET TO ENABLE BCD MODE, THIS DOESEN'T AFFECT THE 2A03,
                                                                                                // SO FLIPPING THIS VALUE DOESEN'T DO ANYTHING.
                mos6502::i8  BreakCommand          = 0x5; // (0x1<<4 & P)>>4;     // SET TO INDICATE A 'BRK' INSTRACTION WAS EXECUTED.
                mos6502::i8  UnusedBit              = 0x6; // (0x1<<5 & P)>>5;     // UNUSEDBIT.
                mos6502::i8  OverflowFlag          = 0x7; // (0x1<<6 & P)>>6;     // SET WHEN AN INVALID TWO'S COMPLEMENT NUMBER IS THE RESULT OF AN OPERATION. 
                                                                                                // AN EXAMPLE IS ADDING 2 POSTIVE NUMBER WHICK RESULT IN THE SIGN BIT BEGIN SET, 
                                                                                                // MAKING THE RESULT A NEGATIVE
                mos6502::i8  NegativeFlag          = 0x0; // (0x1<<7 & P)>>7;

                mos6502::i8  isCarryFlag              = 0;
                mos6502::i8  isZeroFlag               = 0;
                mos6502::i8  isInterruptDisable    = 0x1;
                mos6502::i8  isDecimalMode           = 0;                                    
                mos6502::i8  isBreakCommand          = 0;
                mos6502::i8  isUnusedBit              = 0;
                mos6502::i8  isOverflowFlag          = 0;
                mos6502::i8  isNegativeFlag          = 0;
            // GRNERAL-PURPOSE REGISTER
            mos6502::i8 A;       // ACCUULATOR, RELATED TO ALL ARITHMETIC RELATED INSTRACTIONS
            mos6502::i8 X;       
            mos6502::i8 Y;

            /**************************MEMORY **************************/
            // THE NES HAS A 16 BIT ADDRESS BUS, CAN ADDRESS UP TO 16 KB OF MEMORY, FROM 0X0000 TO 0XFFFF. 
            mos6502::i16 *memory;
            // ADDRESS
            mos6502::i16 zeroPage              = 0x0;
            mos6502::i16 stack                  = 0x1FF;   // 0X100 TO 0X1FF, THE SP WILLA WRAP IF IT EXCEEDS ITS CAPACITY.
            mos6502::i16 ram                     = 0x200;   // 0X200 TO 0X800, GENERAL PURPOSE RAM THAN CAN WRITTEN AND ACCESSED VIA LOADED PROGRAMS.
            mos6502::i16 mirrorOf0x0_0x7ff  = 0x801;   // 0X801 TO 0X2000, MIRROR 0X0 TO 0X7FF
            mos6502::i16 PPUReg                 = 0x2000; // 0X2000 TO 0X2007.
            mos6502::i16 mirrorPPUdata        = 0x2008; // 0X2008 TO 0X4000
            mos6502::i16 mappedData            = 0x4000; // 0X4000 TO 0X4020, HAS OTHER MAPPED DATA, SUCH AS DIRECT MEMORY ADDRESS FOR COPY SPRITES         
            mos6502::i16 rom                     = 0x4020; // 0X4020 TO 0X6000,
            mos6502::i16 sram                    = 0x6000; // 0X6000 TO 0X8000,
            mos6502::i16 paks                    = 0x8000; // 0X8000, IF THE PROGRAM ONLY CONTAINS ONE BANK, IT WILL BE MIRRORED AT 0XC000.
            mos6502::i16 mirrorOf0x8000       = 0xC000; // 0XC000, MIRROR OF PAKS

            mos6502::i16 resetVector           = 0xfffc;

            /**************************INTERRUPT**************************/
            mos6502::i16 IRQ;
            mos6502::i16 NMI;
            mos6502::i16 Reset;

            /**************************ADDRESS MODE **************************/
            enum AddressingMode{
                IMPLICIT,
                ACCEUMULATOR,
                IMMEDIATE,
                ZEROPAGE,
                ZEROPAGEX,
                ZEROPAGEY,
                RELATIVE,
                ABSOLUTE,
                ABSOLUTEX,
                ABSOLUTEY,
                INDIRECT,
                INDEXED_INDIRECT,
                INDIRECT_INDEXED,
            };


            /**************************OP **************************/
            std::map<mos6502::i16,opHandler> opHandlerTable;

            mos6502::i16 ADC(mos6502::i16 op);
            mos6502::i16 SBC(mos6502::i16 op);
            mos6502::i16 AND(mos6502::i16 op);
            mos6502::i16 EOR(mos6502::i16 op);
            mos6502::i16 ORA(mos6502::i16 op);
            mos6502::i16 ASL(mos6502::i16 op);
            mos6502::i16 LSR(mos6502::i16 op);
            mos6502::i16 ROL(mos6502::i16 op);
            mos6502::i16 ROR(mos6502::i16 op);
            mos6502::i16 BCC(mos6502::i16 op);
            mos6502::i16 BCS(mos6502::i16 op);
            mos6502::i16 BEQ(mos6502::i16 op);
            mos6502::i16 BNE(mos6502::i16 op);
            mos6502::i16 BIT(mos6502::i16 op);
            mos6502::i16 BMI(mos6502::i16 op);
            mos6502::i16 BPL(mos6502::i16 op);
            mos6502::i16 BRK(mos6502::i16 op);
            mos6502::i16 BVC(mos6502::i16 op);
            mos6502::i16 BVS(mos6502::i16 op);
            mos6502::i16 CLC(mos6502::i16 op);
            mos6502::i16 SEC(mos6502::i16 op);
            mos6502::i16 CLD(mos6502::i16 op);
            mos6502::i16 SED(mos6502::i16 op);
            mos6502::i16 CLR(mos6502::i16 op);
            mos6502::i16 SEI(mos6502::i16 op);
            mos6502::i16 CLV(mos6502::i16 op);
            mos6502::i16 CMP(mos6502::i16 op);
            mos6502::i16 CPX(mos6502::i16 op);
            mos6502::i16 CPY(mos6502::i16 op);
            mos6502::i16 DEC(mos6502::i16 op);
            mos6502::i16 DEX(mos6502::i16 op);
            mos6502::i16 DEY(mos6502::i16 op);
            mos6502::i16 INC(mos6502::i16 op);
            mos6502::i16 INX(mos6502::i16 op);
            mos6502::i16 INY(mos6502::i16 op);
            mos6502::i16 JMP(mos6502::i16 op);
            mos6502::i16 JSR(mos6502::i16 op);
            mos6502::i16 RTS(mos6502::i16 op);
            mos6502::i16 LDA(mos6502::i16 op);
            mos6502::i16 LDX(mos6502::i16 op);
            mos6502::i16 LDY(mos6502::i16 op);
            mos6502::i16 NOP(mos6502::i16 op);
            mos6502::i16 PHA(mos6502::i16 op);
            mos6502::i16 PLA(mos6502::i16 op);
            mos6502::i16 PHP(mos6502::i16 op);
            mos6502::i16 PLP(mos6502::i16 op);
            mos6502::i16 RTI(mos6502::i16 op);
            mos6502::i16 STA(mos6502::i16 op);
            mos6502::i16 STX(mos6502::i16 op);
            mos6502::i16 STY(mos6502::i16 op);
            mos6502::i16 TAX(mos6502::i16 op);
            mos6502::i16 TXA(mos6502::i16 op);
            mos6502::i16 TYA(mos6502::i16 op);
            mos6502::i16 TAY(mos6502::i16 op);
            mos6502::i16 TSX(mos6502::i16 op);
            mos6502::i16 TXS(mos6502::i16 op);
    public:
        CPU();

        mos6502::i8 setFlag(mos6502::i8 flag);
        mos6502::i8 getFlag(mos6502::i8 flag);
        mos6502::i8 reset();
        mos6502::i8 getProcessorFlags();

        opHandler getOpHandler(mos6502::i16 op);

        mos6502::i8  write(mos6502::i16 addr, mos6502::i16 data);
        mos6502::i16 read(mos6502::i16 addr);

        mos6502::i16 fetch();
        mos6502::i16 decode();
        mos6502::i16 execute();

        ~CPU();
    };    
} // cpu


#endif // !__CPU_H__