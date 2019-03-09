#include "../include/CPU.h"
#include <stdlib.h>
#include <iostream>
#include <climits>

namespace cpu
{

    typedef mos6502::i16 (CPU::*opHandler)(mos6502::i16);
    typedef struct CPU::OpINS OpINS;
    
    CPU::CPU()
    {
        this->initOpTable();
    }

    /**
     * ADD MEMORY TO ACCUMULATOR WITH CARRY
     */
    mos6502::i16 CPU::ADC(mos6502::i16 op){
        switch(this->opINS){
            case IMMEDIATE:
                break;
            case ZEROPAGE:
                break;
            case ZEROPAGEX:
                break;
            case ABSOLUTE:
                break;
            case ABSOLUTEX:
                break;
            case ABSOLUTEY:
                break;
            case INDEXED_INDIRECT:
                break;
            case INDIRECT_INDEXED:
                break;
        }
        return 0;
    }

    mos6502::i16 CPU::SBC(mos6502::i16 op){
        

        return 0;

    }

    mos6502::i16 CPU::AND(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::EOR(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ORA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ASL(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LSR(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ROL(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ROR(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BCC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BCS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BEQ(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BNE(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BIT(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BMI(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BPL(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BRK(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BVC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::BVS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CLC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SEC(mos6502::i16 op){
        // SET CARRY FLAG
        this->P |= (0x1 << this->CarryFlag);
        this->isCarryFlag = 0x1;
        
        return this->isCarryFlag;
    }

    mos6502::i16 CPU::CLD(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SED(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CLI(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SEI(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CLV(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CMP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CPX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::CPY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::DEC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::DEX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::DEY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::INC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::INX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::INY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::JMP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::JSR(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::RTS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LDA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LDX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LDY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::NOP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::PHA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::PLA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::PHP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::PLP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::RTI(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::STA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::STX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::STY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TAX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TXA(mos6502::i16 op){ 
        return 0;
    }

    mos6502::i16 CPU::TYA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TAY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TSX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TXS(mos6502::i16 op){
        return 0;
    }


            
    // UNOFFICIAL OP CODE
    mos6502::i16 CPU::KIL(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SLO(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::RLA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SRE(mos6502::i16 op){
        return 0;
    }
    
    mos6502::i16 CPU::RRA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SAX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LAX(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::DCP(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ISC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ANC(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::ALR(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::XAA(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::TAS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::LAS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::AXS(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::SHY(mos6502::i16 op){
        return 0;
    }

    mos6502::i16 CPU::AHX(mos6502::i16 op){
        return 0;
    }
             

   /*** 
    * ADC : ADD EITH CARRY
    * SBC : SUBTRACT WITH CARRY
    * AND : LOGICAL AND
    * EOR : EXCLUSIVE OR
    * ORA : LOGICAL INCLUSIVE OR
    * ASL : ARITHMETIC SHIFT LEFT
    * LSR : LOGICAL SHIFT RIGHT
    * ROL : ROTATE LEFT
    * ROR : ROTATE RIGHT
    * BCC : BRANCH IF CARRY CLEAR
    * BCS : BRANCH IF CARRY SET
    * BEQ : BRANCH IF EQUAL
    * BNE : BRANCH IF NOT EQUAL
    * BIT : BIT TEST
    * BMI : BRANCH IF MINUS
    * BPL : BRANCH IF POSITIVE
    * BRK : FORCE INTERRUPT
    * BVC : BRANCH IF OVERFLOW CLEAR
    * BVS : BRANCH IF OVERFLOW SET
    * CLC : CLEAR CARRY FLAG
    * SEC : SET CARRY FLAG
    * CLD : CLEAR DECIMAL MODE
    * SED : SET DECIMAL MODE
    * CLR : CLEAR INTERRUPT DISABLE
    * SEI : SET INTERRUPT DISABLE
    * CLV : CLEAR OVERFLOW FLAG
    * CMP : COMPARE
    * CPX : COMPARE X REGISTER
    * CPY : COMPARE Y REGISTER
    * DEC : DECREMENT MEMORY
    * DEX : DECREMENT X REGISTER
    * DEY : DECREMENT Y REGISTER
    * INC : INCREMENT MEMORY
    * INX : INCREMENT X REGISTER
    * INY : INCREMENT Y REGISTER
    * JMP : JUMP
    * JSR : JUMP TO SUBROUTINE
    * RTS : RETURN FROM SUBROUTINE
    * LDA : LOAD ACCUMULATOR
    * LDX : LOAD X REGISTER
    * LDY : LOAD Y REGISTER
    * NOP : NO OPERATION
    * PHA : PUSH ACCUMULATOR
    * PLA : PULL ACCUMLATOR
    * PHP : PUSH PROCESSOT STATUS
    * PLP : PULL PROCESSOR STATUS
    * RTI : RETURN FROM INTERRUPT
    * STA : STORE ACCUMULATOR
    * STX : STORE X REGISTER
    * STY : STORE Y REGISTER
    * TAX : TRANSFER ACCUMULATOR TO X
    * TXA : TRANSFER X TO ACCUMULATOR
    * TYA : TRANSFER Y TO ACCUMULATOR
    * TAY : TRANSFER ACCUMULATOR TO Y
    * TSX : TRANSFER STACK POINTER TO X
    * TXS : TRANSFER  X TO STACK POINTER
    **/ 
    void CPU::initOpTable(){
        // init ophandler map
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x69,{(mos6502::i8)0x69,IMMEDIATE,"ADC",2,2,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x65,{(mos6502::i8)0x65,ZEROPAGE ,"ADC",2,3,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x75,{(mos6502::i8)0x75,ZEROPAGEX,"ADC",2,4,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6D,{(mos6502::i8)0x6D,ABSOLUTE, "ADC",3,4,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x7D,{(mos6502::i8)0x7D,ABSOLUTEX,"ADC",3,4,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x79,{(mos6502::i8)0x79,ABSOLUTEY,"ADC",3,4,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x61,{(mos6502::i8)0x61,INDEXED_INDIRECT,"ADC",2,6,&CPU::ADC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x71,{(mos6502::i8)0x71,INDIRECT_INDEXED,"ADC",2,5,&CPU::ADC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE9,{(mos6502::i8)0xE9,IMMEDIATE,"SBC",2,2,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE5,{(mos6502::i8)0xE5,ZEROPAGE, "SBC",2,3,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF5,{(mos6502::i8)0xF5,ZEROPAGEX,"SBC",2,4,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xED,{(mos6502::i8)0xED,ABSOLUTE, "SBC",3,4,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFD,{(mos6502::i8)0xFD,ABSOLUTEX,"SBC",3,4,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF9,{(mos6502::i8)0xF9,ABSOLUTEY,"SBC",3,4,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE1,{(mos6502::i8)0xE1,INDEXED_INDIRECT,"SBC",2,6,&CPU::SBC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF1,{(mos6502::i8)0xF1,INDIRECT_INDEXED,"SBC",2,5,&CPU::SBC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x29,{(mos6502::i8)0x29,IMMEDIATE,"AND",2,2,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x25,{(mos6502::i8)0x25,ZEROPAGE, "AND",2,3,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x35,{(mos6502::i8)0x35,ZEROPAGEX,"AND",2,4,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2D,{(mos6502::i8)0x2D,ABSOLUTE, "AND",3,4,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x3D,{(mos6502::i8)0x3D,ABSOLUTEX,"AND",3,4,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x39,{(mos6502::i8)0x39,ABSOLUTEY,"AND",3,4,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x21,{(mos6502::i8)0x21,INDEXED_INDIRECT,"AND",2,6,&CPU::AND,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x31,{(mos6502::i8)0x31,INDIRECT_INDEXED,"AND",2,5,&CPU::AND,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x49,{(mos6502::i8)0x49,IMMEDIATE,"EOR",2,2,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x45,{(mos6502::i8)0x45,ZEROPAGE, "EOR",2,3,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x55,{(mos6502::i8)0x55,ZEROPAGEX,"EOR",2,4,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4D,{(mos6502::i8)0x4D,ABSOLUTE, "EOR",3,4,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x5D,{(mos6502::i8)0x5D,ABSOLUTEX,"EOR",3,4,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x59,{(mos6502::i8)0x59,ABSOLUTEY,"EOR",3,4,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x41,{(mos6502::i8)0x41,INDEXED_INDIRECT,"EOR",2,6,&CPU::EOR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x51,{(mos6502::i8)0x51,INDIRECT_INDEXED,"EOR",2,5,&CPU::EOR,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x09,{(mos6502::i8)0x09,IMMEDIATE,"ORA",2,2,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x05,{(mos6502::i8)0x05,ZEROPAGE, "ORA",2,3,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x15,{(mos6502::i8)0x15,ZEROPAGEX,"ORA",2,4,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0D,{(mos6502::i8)0x0D,ABSOLUTE, "ORA",3,4,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1D,{(mos6502::i8)0x1D,ABSOLUTEX,"ORA",3,4,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x19,{(mos6502::i8)0x19,ABSOLUTEY,"ORA",3,4,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x01,{(mos6502::i8)0x01,INDEXED_INDIRECT,"ORA",2,6,&CPU::ORA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x11,{(mos6502::i8)0x11,INDIRECT_INDEXED,"ORA",2,5,&CPU::ORA,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0A,{(mos6502::i8)0x0A,ACCEUMULATOR,"ASL",1,2,&CPU::ASL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x06,{(mos6502::i8)0x06,ZEROPAGE,    "ASL",2,5,&CPU::ASL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x16,{(mos6502::i8)0x16,ZEROPAGEX,   "ASL",2,6,&CPU::ASL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0E,{(mos6502::i8)0x0E,ABSOLUTE,    "ASL",3,6,&CPU::ASL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1E,{(mos6502::i8)0x1E,ABSOLUTEX,   "ASL",3,7,&CPU::ASL,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4A,{(mos6502::i8)0x4A,ACCEUMULATOR,"LSR",1,2,&CPU::LSR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x46,{(mos6502::i8)0x46,ZEROPAGE,    "LSR",2,5,&CPU::LSR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x56,{(mos6502::i8)0x56,ZEROPAGEX,   "LSR",2,6,&CPU::LSR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4E,{(mos6502::i8)0x4E,ABSOLUTE,    "LSR",3,7,&CPU::LSR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x5E,{(mos6502::i8)0x5E,ABSOLUTEX,   "LSR",3,7,&CPU::LSR,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2A,{(mos6502::i8)0x2A,ACCEUMULATOR,"ROL",1,2,&CPU::ROL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x26,{(mos6502::i8)0x26,ZEROPAGE,    "ROL",2,5,&CPU::ROL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x36,{(mos6502::i8)0x36,ZEROPAGEX,   "ROL",2,6,&CPU::ROL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2E,{(mos6502::i8)0x2E,ABSOLUTE,    "ROL",3,6,&CPU::ROL,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x3E,{(mos6502::i8)0x3E,ABSOLUTEX,   "ROL",3,7,&CPU::ROL,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6A,{(mos6502::i8)0x6A,ACCEUMULATOR,"ROR",1,2,&CPU::ROR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x66,{(mos6502::i8)0x66,ZEROPAGE,    "ROR",2,5,&CPU::ROR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x76,{(mos6502::i8)0x76,ZEROPAGEX,   "ROR",2,6,&CPU::ROR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6E,{(mos6502::i8)0x6E,ABSOLUTE,    "ROR",3,6,&CPU::ROR,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x7E,{(mos6502::i8)0x7E,ABSOLUTEX,   "ROR",3,7,&CPU::ROR,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x90,{(mos6502::i8)0x90,RELATIVE,"BCC",2,2,&CPU::BCC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB0,{(mos6502::i8)0xB0,RELATIVE,"BCS",2,2,&CPU::BCS,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF0,{(mos6502::i8)0xF0,RELATIVE,"BEQ",2,2,&CPU::BEQ,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD0,{(mos6502::i8)0xD0,RELATIVE,"BNE",2,2,&CPU::BNE,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x24,{(mos6502::i8)0x24,ZEROPAGE,"BIT",2,3,&CPU::BIT,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2C,{(mos6502::i8)0x2C,ABSOLUTE,"BIT",3,4,&CPU::BIT,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x30,{(mos6502::i8)0x30,RELATIVE,"BMI",2,2,&CPU::BMI,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x10,{(mos6502::i8)0x10,RELATIVE,"BPL",2,2,&CPU::BPL,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x00,{(mos6502::i8)0x00,IMPLICIT,"BRK",1,7,&CPU::BRK,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x50,{(mos6502::i8)0x50,RELATIVE,"BVC",2,2,&CPU::BVC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x70,{(mos6502::i8)0x70,RELATIVE,"BVS",2,2,&CPU::BVS,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x18,{(mos6502::i8)0x18,IMPLICIT,"CLC",1,2,&CPU::CLC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x38,{(mos6502::i8)0x38,IMPLICIT,"SEC",1,2,&CPU::SEC,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD8,{(mos6502::i8)0xD8,IMPLICIT,"CLD",1,2,&CPU::CLD,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF8,{(mos6502::i8)0xF8,IMPLICIT,"SED",1,2,&CPU::SED,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x58,{(mos6502::i8)0x58,IMPLICIT,"CLI",1,2,&CPU::CLI,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x78,{(mos6502::i8)0x78,IMPLICIT,"SEI",1,2,&CPU::SEI,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB8,{(mos6502::i8)0xB8,IMPLICIT,"CLV",1,2,&CPU::CLV,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC9,{(mos6502::i8)0xC9,IMMEDIATE,"CMP",2,2,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC5,{(mos6502::i8)0xC5,ZEROPAGE, "CMP",2,3,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD5,{(mos6502::i8)0xD5,ZEROPAGEX,"CMP",2,4,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCD,{(mos6502::i8)0xCD,ABSOLUTE, "CMP",3,4,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xDD,{(mos6502::i8)0xDD,ABSOLUTEX,"CMP",3,4,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD9,{(mos6502::i8)0xD9,ABSOLUTEY,"CMP",3,4,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC1,{(mos6502::i8)0xC1,INDEXED_INDIRECT,"CMP",2,6,&CPU::CMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD1,{(mos6502::i8)0xD1,INDIRECT_INDEXED,"CMP",2,5,&CPU::CMP,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE0,{(mos6502::i8)0xE0,IMMEDIATE,"CPX",2,2,&CPU::CPX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE4,{(mos6502::i8)0xE4,ZEROPAGE, "CPX",2,3,&CPU::CPX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEC,{(mos6502::i8)0xEC,ABSOLUTE, "CPX",3,4,&CPU::CPX,(mos6502::i8 *)0}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC0,{(mos6502::i8)0xC0,IMMEDIATE,"CPY",2,2,&CPU::CPY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC4,{(mos6502::i8)0xC4,ZEROPAGE, "CPY",2,3,&CPU::CPY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCC,{(mos6502::i8)0xCC,ABSOLUTE, "CPY",3,4,&CPU::CPY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC6,{(mos6502::i8)0xC6,ZEROPAGE, "DEC",2,5,&CPU::DEC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD6,{(mos6502::i8)0xD6,ZEROPAGEX,"DEC",2,6,&CPU::DEC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCE,{(mos6502::i8)0xCE,ABSOLUTE, "DEC",3,6,&CPU::DEC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xDE,{(mos6502::i8)0xDE,ABSOLUTEX, "DEC",3,7,&CPU::DEC,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCA,{(mos6502::i8)0xCA,IMPLICIT,"DEX",1,2,&CPU::DEX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x88,{(mos6502::i8)0x88,IMPLICIT,"DEY",1,2,&CPU::DEY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE6,{(mos6502::i8)0xE6,ZEROPAGE, "INC",2,5,&CPU::INC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF6,{(mos6502::i8)0xF6,ZEROPAGEX,"INC",2,6,&CPU::INC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEE,{(mos6502::i8)0xEE,ABSOLUTE, "INC",3,6,&CPU::INC,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFE,{(mos6502::i8)0xFE,ABSOLUTEX,"INC",3,7,&CPU::INC,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE8,{(mos6502::i8)0xE8,IMPLICIT,"INX",1,2,&CPU::INX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC8,{(mos6502::i8)0xC8,IMPLICIT,"INY",1,2,&CPU::INY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4C,{(mos6502::i8)0x4C,ABSOLUTE,"JMP",3,3,&CPU::JMP,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6C,{(mos6502::i8)0x6C,INDIRECT,"JMP",3,5,&CPU::JMP,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x20,{(mos6502::i8)0x20,ABSOLUTE,"JSR",3,6,&CPU::JSR,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x60,{(mos6502::i8)0x60,IMPLICIT,"RTS",1,6,&CPU::RTS,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA9,{(mos6502::i8)0xA9,IMMEDIATE,"LDA",2,2,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA5,{(mos6502::i8)0xA5,ZEROPAGE, "LDA",2,3,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB5,{(mos6502::i8)0xB5,ZEROPAGEX,"LDA",2,4,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAD,{(mos6502::i8)0xAD,ABSOLUTE, "LDA",3,4,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBD,{(mos6502::i8)0xBD,ABSOLUTEX,"LDA",3,4,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB9,{(mos6502::i8)0xB9,ABSOLUTEY,"LDA",3,4,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA1,{(mos6502::i8)0xA1,INDEXED_INDIRECT,"LDA",2,6,&CPU::LDA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB1,{(mos6502::i8)0xB1,INDIRECT_INDEXED,"LDA",2,5,&CPU::LDA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA2,{(mos6502::i8)0xA2,IMMEDIATE,"LDX",2,2,&CPU::LDX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA6,{(mos6502::i8)0xA6,ZEROPAGE, "LDX",2,3,&CPU::LDX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB6,{(mos6502::i8)0xB6,ZEROPAGEY,"LDX",2,4,&CPU::LDX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAE,{(mos6502::i8)0xAE,ABSOLUTE, "LDX",3,4,&CPU::LDX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBE,{(mos6502::i8)0xBE,ABSOLUTEY,"LDX",3,4,&CPU::LDX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA0,{(mos6502::i8)0xA0,IMMEDIATE,"LDY",2,2,&CPU::LDY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA4,{(mos6502::i8)0xA4,ZEROPAGE, "LDY",2,3,&CPU::LDY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB4,{(mos6502::i8)0xB4,ZEROPAGEX,"LDY",2,4,&CPU::LDY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAC,{(mos6502::i8)0xAC,ABSOLUTE, "LDY",3,4,&CPU::LDY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBC,{(mos6502::i8)0xBC,ABSOLUTEX,"LDY",3,4,&CPU::LDY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEA,{(mos6502::i8)0xEA,IMPLICIT,"NOP",1,2,&CPU::NOP,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x48,{(mos6502::i8)0x48,IMPLICIT,"PHA",1,3,&CPU::PHA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x68,{(mos6502::i8)0x68,IMPLICIT,"PLA",1,4,&CPU::PLA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x08,{(mos6502::i8)0x08,IMPLICIT,"PHP",1,3,&CPU::PHP,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x28,{(mos6502::i8)0x28,IMPLICIT,"PLP",1,4,&CPU::PLP,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x40,{(mos6502::i8)0x40,IMPLICIT,"RTI",1,6,&CPU::RTI,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x85,{(mos6502::i8)0x85,ZEROPAGE, "STA",2,3,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x95,{(mos6502::i8)0x95,ZEROPAGEX,"STA",2,4,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8D,{(mos6502::i8)0x8D,ABSOLUTE, "STA",3,4,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x9D,{(mos6502::i8)0x9D,ABSOLUTEX,"STA",3,5,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x99,{(mos6502::i8)0x99,ABSOLUTEY,"STA",3,5,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x81,{(mos6502::i8)0x81,INDEXED_INDIRECT,"STA",2,6,&CPU::STA,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x91,{(mos6502::i8)0x91,INDIRECT_INDEXED,"STA",2,6,&CPU::STA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x86,{(mos6502::i8)0x86,ZEROPAGE, "STX",2,3,&CPU::STX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x96,{(mos6502::i8)0x96,ZEROPAGEY,"STX",2,4,&CPU::STX,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8E,{(mos6502::i8)0x8E,ABSOLUTE, "STX",3,4,&CPU::STX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x84,{(mos6502::i8)0x84,ZEROPAGE, "STY",2,3,&CPU::STY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x94,{(mos6502::i8)0x94,ABSOLUTEX,"STY",2,4,&CPU::STY,(mos6502::i8 *)0}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8C,{(mos6502::i8)0x8C,ABSOLUTE, "STY",3,4,&CPU::STY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAA,{(mos6502::i8)0xAA,IMPLICIT,"TAX",1,2,&CPU::TAX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8A,{(mos6502::i8)0x8A,IMPLICIT,"TXA",1,2,&CPU::TXA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x98,{(mos6502::i8)0x98,IMPLICIT,"TYA",1,2,&CPU::TYA,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA8,{(mos6502::i8)0xA8,IMPLICIT,"TAY",1,2,&CPU::TAY,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBA,{(mos6502::i8)0xBA,IMPLICIT,"TSX",1,2,&CPU::TSX,(mos6502::i8 *)0}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x9A,{(mos6502::i8)0x9A,IMPLICIT,"TXS",1,2,&CPU::TXS,(mos6502::i8 *)0}));
        
        //  UNOFFICIAL OP CODE
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x7C,{(mos6502::i8)0x7C,"NOP",3,4,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x44,{(mos6502::i8)0x44,"NOP",2,3,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xDC,{(mos6502::i8)0xDC,"NOP",3,4,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x82,{(mos6502::i8)0x82,"NOP",2,2,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x80,{(mos6502::i8)0x80,"NOP",2,2,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC2,{(mos6502::i8)0xC2,"NOP",2,2,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x5A,{(mos6502::i8)0x5A,"NOP",1,2,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFA,{(mos6502::i8)0xFA,"NOP",1,2,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x34,{(mos6502::i8)0x34,"NOP",2,4,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x04,{(mos6502::i8)0x04,"NOP",2,3,&CPU::NOP}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0C,{(mos6502::i8)0x0C,"NOP",2,4,&CPU::NOP}));

        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x92,{(mos6502::i8)0x92,"KIL",1,0,&CPU::KIL}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x02,{(mos6502::i8)0x02,"KIL",1,0,&CPU::KIL}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x42,{(mos6502::i8)0x42,"KIL",1,0,&CPU::KIL}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x22,{(mos6502::i8)0x22,"KIL",1,0,&CPU::KIL}));
        
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x83,{(mos6502::i8)0x83,"SAX",2,6,&CPU::SAX}));
        
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCF,{(mos6502::i8)0xCF,"DCP",3,6,&CPU::DCP}));
         
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x07,{(mos6502::i8)0x07,"SLO",2,5,&CPU::SLO}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x03,{(mos6502::i8)0x03,"SLO",2,8,&CPU::SLO}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1B,{(mos6502::i8)0x1B,"SLO",3,7,&CPU::SLO}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0F,{(mos6502::i8)0x0F,"SLO",2,6,&CPU::SLO}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1F,{(mos6502::i8)0x1F,"SLO",3,7,&CPU::SLO}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x17,{(mos6502::i8)0x17,"SLO",2,6,&CPU::SLO}));

        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x9B,{(mos6502::i8)0x9B,"TAS",3,5,&CPU::TAS}));
         

        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFF,{(mos6502::i8)0xFF,"ISC",3,7,&CPU::ISC}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFB,{(mos6502::i8)0xFB,"ISC",3,7,&CPU::ISC}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF7,{(mos6502::i8)0xF7,"ISC",2,6,&CPU::ISC}));

    
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8B,{(mos6502::i8)0x8B,"XAA",2,2,&CPU::XAA}));
    
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBF,{(mos6502::i8)0xBF,"LAX",3,4,&CPU::LAX}));


        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x87,{(mos6502::i8)0x87,"SAX",2,3,&CPU::SAX}));
         
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x27,{(mos6502::i8)0x27,"RLA",2,5,&CPU::RLA}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x23,{(mos6502::i8)0x23,"RLA",2,8,&CPU::RLA}));


        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0B,{(mos6502::i8)0x0B,"ANC",2,2,&CPU::ANC}));
        // this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2B,{(mos6502::i8)0x2B,"ANC",2,2,&CPU::ANC}));
    }
    
    mos6502::i8 CPU::setFlag(mos6502::i8 flag){
        this->P &= ~(0x1 << flag);
        return this->P;
    }

    mos6502::i8 CPU::getFlag(mos6502::i8 flag){
        return ((0x1 << flag) & this->P) >> flag;
    }


    void CPU::setPRG1(std::vector<mos6502::i8> prg){
        for(int i = 0; i < prg.size(); i++){
            this->memory[this->paks + i] = prg[i];
            // std::cout<<"MEM:0x"<<std::hex<<(0xFFFF & (this->paks+i));
            // std::cout<<" VALUE:0x"<<std::hex<<(0xFF & this->memory[this->paks+i])<<std::endl;
        }
    }

    void CPU::setPRG2(std::vector<mos6502::i8> chr){
        for(int  i=0; i < chr.size(); i++){
            this->memory[this->mirrorOf0x8000 + i] = chr[i];
        }
    }

    mos6502::i8 CPU::reset(){
 
        this->memory = (mos6502::i8 *)malloc(0x10000 * sizeof(mos6502::i8));

        this->P = 0b0010000;
        
        // STACK INIT
        for(int i = 0x100; i<0x1FF; i++){
            this->memory[i] = 0;
        }

        // RAM
        for(int i = 0x200; i<0x800; i++){
            this->memory[i] = 0xFF;
        }
        
        // MIRROR 0X0 TO 0X7FF
        for(int i = 0x801; i<0x2000; i++){
            this->memory[i] = 0;
        }

        // PPU REG
        for(int i = 0x2000; i<0x2007; i++){
            this->memory[i] = 0;
        }

        // MIRROR PPU DATA
        for(int i = 0x2008; i<0x4000; i++){
            this->memory[i] = 0;
        }

        // MAPPED DATA
        for(int i = 0x4000; i<0x4020; i++){
            this->memory[i] = 0;
        }

        // ROM
        for(int i = 0x4020; i<0x6000; i++){
            this->memory[i] = 0;
        }

        // SRAM
        for(int i = 0x6000; i<0x8000; i++){
            this->memory[i] = 0;
        }


        this->PC = 0xFFFF;

        this->A = 0;
        this->X = 0;
        this->Y = 0;

        this->P = this->getProcessorFlags();
       
        return 1;
    }

    mos6502::i8 CPU::getProcessorFlags(){
        return this->P;
    }

    mos6502::i8  CPU::write(mos6502::i16 addr, mos6502::i8 data){
        this->memory[addr] = data;
        return data;
    }

    mos6502::i8 CPU::read(mos6502::i16 addr){
        return this->memory[addr];
    }


    mos6502::i16 CPU::fetch(){
        this->PC+= this->opINS.bytes; //    INSTRACTION SIZE
        return this->PC;
    }

    OpINS CPU::getOpHandler(mos6502::i16 op){
        return opHandlerTable[op];
    }

    mos6502::i16 CPU::decode(){
        mos6502::i16 op = this->memory[this->PC];
        
        this->opINS = this->opHandlerTable[op];

        // GET OP VALUE
        // E.G. 0xA932 : LDA 0x32  OP IS LDA,VALUE IS 32
        // E.G. 0XAC32 : LDY 0x3232 OP IS LDY, BUT IT'S VALUE IS TWO BYTE. SO
        //               FIRST BYTE IS LOW, LAST IS HIGHT
        mos6502::i8 *opVal;
        opVal += (this->opINS.bytes-1);
        for(int i = i; i<this->opINS.bytes; i++){
            *opVal = this->memory[this->PC+i];
            opVal--;
        }
        this->opINS.value = opVal;
        return opINS.op;
    }

    mos6502::i16 CPU::execute(){
        mos6502::i16 (CPU::*opHdr)(mos6502::i16) = opINS.opHandler;
        
        std::cout<<"EXEC PC->"<<std::hex<<this->PC;
        if(this->memory[this->PC] <= 0xF){
            std::cout<<":MEM(0x0"<<(0xFF & this->memory[this->PC]);
            std::cout<<") OP(0x0"<<std::hex<<(0xFF & this->opINS.op);
        }else{
            std::cout<<":MEM(0x"<<(0xFF & this->memory[this->PC]);
            std::cout<<") OP(0x"<<std::hex<<(0xFF & this->opINS.op);
        }
        std::cout<<") "<<this->opINS.opName;
        if(this->opINS.bytes>=2){
            std::cout<<" 0x"<<std::hex<<(0xFF & this->opINS.value);
        }
        std::cout<<" bytes:"<<std::hex<<(0xFF & this->opINS.bytes)<<std::endl;
        
        return (this->*opHdr)(this->opINS.op);
    }

    mos6502::i16 CPU::run(){
        mos6502::i8 high = this->memory[this->resetVector];
        mos6502::i8 low  = this->memory[this->resetVector + 1];
        mos6502::i16 pc = 0xFFFF;
        
        this->PC = ((pc & high) << 8) | low;
        // this->PC = this->paks;
        
        std::cout<<"PC:0x"<<std::hex<<this->PC;
        std::cout<<" HIGH:0x"<<std::hex<<(0xFF & high);
        std::cout<<" LOW:0x" <<std::hex<<(0xFF & low);
        std::cout<<std::endl;


        this->running = 0x1;
        while(this->running == 0x1){
            this->decode();
            this->execute();
            this->fetch();
        }

    }


    CPU::~CPU()
    {
    
    }
    
    
}; // cpu
