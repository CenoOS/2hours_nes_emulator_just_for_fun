#include "CPU.h"
#include <stdlib.h>

namespace cpu
{

    typedef mos6502::i16 (CPU::*opHandler)(mos6502::i16);

    CPU::CPU()
    {
        this->initOpHandlerTable();
    }

    /**
     * ADD MEMORY TO ACCUMULATOR WITH CARRY
     */
    mos6502::i16 CPU::ADC(mos6502::i16 op){


        

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
return 0;
    }

    mos6502::i16 CPU::CLD(mos6502::i16 op){
return 0;
    }

    mos6502::i16 CPU::SED(mos6502::i16 op){
return 0;
    }

    mos6502::i16 CPU::CLR(mos6502::i16 op){
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
    void CPU::initOpHandlerTable(){
        // init ophandler map
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x69,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x64,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x75,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x6D,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x7D,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x79,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x61,&CPU::ADC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x71,&CPU::ADC));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE9,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE5,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF5,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xED,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xFD,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF9,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE1,&CPU::SBC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF1,&CPU::SBC));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x29,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x25,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x35,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x2D,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x3D,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x39,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x21,&CPU::AND));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x31,&CPU::AND));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x49,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x45,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x55,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x4D,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x5D,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x59,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x41,&CPU::EOR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x51,&CPU::EOR));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x09,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x05,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x15,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x0D,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x1D,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x19,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x01,&CPU::ORA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x11,&CPU::ORA));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x0A,&CPU::ASL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x06,&CPU::ASL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x16,&CPU::ASL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x0E,&CPU::ASL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x1E,&CPU::ASL));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x4A,&CPU::LSR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x46,&CPU::LSR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x56,&CPU::LSR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x4E,&CPU::LSR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x5E,&CPU::LSR));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x2A,&CPU::ROL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x26,&CPU::ROL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x36,&CPU::ROL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x2E,&CPU::ROL));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x3E,&CPU::ROL));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x6A,&CPU::ROR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x66,&CPU::ROR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x76,&CPU::ROR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x6E,&CPU::ROR));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x7E,&CPU::ROR));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x90,&CPU::BCC));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB0,&CPU::BCS));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF0,&CPU::BEQ));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD0,&CPU::BNE));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x24,&CPU::BIT));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x2C,&CPU::BIT));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x30,&CPU::BMI));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x10,&CPU::BPL));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x00,&CPU::BRK));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x50,&CPU::BVC));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x70,&CPU::BVS));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x18,&CPU::CLC));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x38,&CPU::SEC));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD8,&CPU::CLD));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF8,&CPU::SED));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x58,&CPU::CLR));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x78,&CPU::SEI));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB8,&CPU::CLV));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC9,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC5,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD5,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xCD,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xDD,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD9,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC1,&CPU::CMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD1,&CPU::CMP));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE0,&CPU::CPX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE4,&CPU::CPX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xEC,&CPU::CPX));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC0,&CPU::CPY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC4,&CPU::CPY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xCC,&CPU::CPY));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC6,&CPU::DEC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xD6,&CPU::DEC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xCE,&CPU::DEC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xDE,&CPU::DEC));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xCA,&CPU::DEX));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x88,&CPU::DEY));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE6,&CPU::INC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xF6,&CPU::INC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xEE,&CPU::INC));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xFE,&CPU::INC));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xE8,&CPU::INX));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xC8,&CPU::INY));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x4C,&CPU::JMP));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x6C,&CPU::JMP));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x20,&CPU::JSR));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x60,&CPU::RTS));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA9,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA5,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB5,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xAD,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xBD,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB9,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA1,&CPU::LDA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB1,&CPU::LDA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA2,&CPU::LDX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA6,&CPU::LDX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB6,&CPU::LDX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xAE,&CPU::LDX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xBE,&CPU::LDX));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA0,&CPU::LDY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA4,&CPU::LDY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xB4,&CPU::LDY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xAC,&CPU::LDY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xBC,&CPU::LDY));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xEA,&CPU::NOP));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x48,&CPU::PHA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x68,&CPU::PLA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x08,&CPU::PHP));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x28,&CPU::PLP));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x40,&CPU::RTI));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x85,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x95,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x8D,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x9D,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x99,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x81,&CPU::STA));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x91,&CPU::STA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x86,&CPU::STX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x96,&CPU::STX));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x8E,&CPU::STX));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x84,&CPU::STY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x94,&CPU::STY));
        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x8C,&CPU::STY));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xAA,&CPU::TAX));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x8A,&CPU::TXA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x98,&CPU::TYA));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xA8,&CPU::TAY));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0xBA,&CPU::TSX));

        this->opHandlerTable.insert(std::pair<mos6502::i16,opHandler>(0x9A,&CPU::TXS));

 
    }

    void CPU::initOpCylesTable(){

    }

    void CPU::initOpBytesTable(){

    }
    
    mos6502::i8 CPU::setFlag(mos6502::i8 flag){
        this->P &= ~(0x1 << flag);
        return this->P;
    }

    mos6502::i8 CPU::getFlag(mos6502::i8 flag){
        return ((0x1 << flag) & this->P) >> flag;
    }

    mos6502::i8 CPU::reset(){
        this->memory = (mos6502::i8 *)malloc(0x10000 * sizeof(mos6502::i8));
        if(!this->memory){ // MEMORY ALLOC FAILED. 
            return -1;
        }

        this->P = 0b0010000;

        for(int i = 0; i<0x2000; i++){
            this->memory[i] = 0xFF;
        }
        
        for(int i = 0x2000; i<0x8000; i++){
            this->memory[i] = 0;
        }

        this->PC = this->resetVector;

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
        this->PC++;
        return this->PC;
    }

    opHandler CPU::getOpHandler(mos6502::i16 op){
        return opHandlerTable[op];
    }

    mos6502::i16 CPU::decode(){
        mos6502::i16 op = this->memory[this->PC];
        
        mos6502::i16 (CPU::*opHdr)(mos6502::i16) = this->opHandlerTable[op];
        
        return (this->*opHdr)(op);
    }

    mos6502::i16 CPU::execute(){
        return 0;
    }


    CPU::~CPU()
    {
        free(this->memory);
    }
    
    
}; // cpu
