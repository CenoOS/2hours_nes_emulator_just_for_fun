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
    void CPU::initOpTable(){
        // init ophandler map
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x69,{(mos6502::i8)0x69,"ADC",2,2,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x64,{(mos6502::i8)0x65,"ADC",2,3,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x75,{(mos6502::i8)0x75,"ADC",2,4,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6D,{(mos6502::i8)0x6D,"ADC",3,4,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x7D,{(mos6502::i8)0x7D,"ADC",3,4,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x79,{(mos6502::i8)0x79,"ADC",3,4,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x61,{(mos6502::i8)0x61,"ADC",2,6,&CPU::ADC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x71,{(mos6502::i8)0x71,"ADC",2,5,&CPU::ADC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE9,{(mos6502::i8)0xE9,"SBC",2,2,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE5,{(mos6502::i8)0xE5,"SBC",2,3,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF5,{(mos6502::i8)0xF5,"SBC",2,4,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xED,{(mos6502::i8)0xED,"SBC",3,4,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFD,{(mos6502::i8)0xFD,"SBC",3,4,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF9,{(mos6502::i8)0xF9,"SBC",3,4,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE1,{(mos6502::i8)0xE1,"SBC",2,6,&CPU::SBC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF1,{(mos6502::i8)0xF1,"SBC",2,5,&CPU::SBC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x29,{(mos6502::i8)0x29,"AND",2,2,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x25,{(mos6502::i8)0x25,"AND",2,3,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x35,{(mos6502::i8)0x35,"AND",2,4,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2D,{(mos6502::i8)0x2D,"AND",3,4,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x3D,{(mos6502::i8)0x3D,"AND",3,4,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x39,{(mos6502::i8)0x39,"AND",3,4,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x21,{(mos6502::i8)0x21,"AND",2,6,&CPU::AND}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x31,{(mos6502::i8)0x31,"AND",2,5,&CPU::AND}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x49,{(mos6502::i8)0x49,"EOR",2,2,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x45,{(mos6502::i8)0x45,"EOR",2,3,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x55,{(mos6502::i8)0x55,"EOR",2,4,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4D,{(mos6502::i8)0x4D,"EOR",3,4,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x5D,{(mos6502::i8)0x5D,"EOR",3,4,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x59,{(mos6502::i8)0x59,"EOR",3,4,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x41,{(mos6502::i8)0x41,"EOR",2,6,&CPU::EOR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x51,{(mos6502::i8)0x51,"EOR",2,5,&CPU::EOR}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x09,{(mos6502::i8)0x09,"ORA",2,2,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x05,{(mos6502::i8)0x05,"ORA",2,3,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x15,{(mos6502::i8)0x15,"ORA",2,4,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0D,{(mos6502::i8)0x0D,"ORA",3,4,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1D,{(mos6502::i8)0x1D,"ORA",3,4,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x19,{(mos6502::i8)0x19,"ORA",3,4,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x01,{(mos6502::i8)0x01,"ORA",2,6,&CPU::ORA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x11,{(mos6502::i8)0x11,"ORA",2,5,&CPU::ORA}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0A,{(mos6502::i8)0x0A,"ASL",1,2,&CPU::ASL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x06,{(mos6502::i8)0x06,"ASL",2,5,&CPU::ASL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x16,{(mos6502::i8)0x16,"ASL",2,6,&CPU::ASL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x0E,{(mos6502::i8)0x0E,"ASL",3,6,&CPU::ASL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x1E,{(mos6502::i8)0x1E,"ASL",3,7,&CPU::ASL}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4A,{(mos6502::i8)0x4A,"LSR",1,2,&CPU::LSR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x46,{(mos6502::i8)0x46,"LSR",2,5,&CPU::LSR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x56,{(mos6502::i8)0x56,"LSR",2,6,&CPU::LSR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4E,{(mos6502::i8)0x4E,"LSR",3,7,&CPU::LSR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x5E,{(mos6502::i8)0x5E,"LSR",3,7,&CPU::LSR}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2A,{(mos6502::i8)0x2A,"ROL",1,2,&CPU::ROL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x26,{(mos6502::i8)0x26,"ROL",2,5,&CPU::ROL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x36,{(mos6502::i8)0x36,"ROL",2,6,&CPU::ROL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2E,{(mos6502::i8)0x2E,"ROL",3,6,&CPU::ROL}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x3E,{(mos6502::i8)0x3E,"ROL",3,7,&CPU::ROL}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6A,{(mos6502::i8)0x6A,"ROR",1,2,&CPU::ROR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x66,{(mos6502::i8)0x66,"ROR",2,5,&CPU::ROR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x76,{(mos6502::i8)0x76,"ROR",2,6,&CPU::ROR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6E,{(mos6502::i8)0x6E,"ROR",3,6,&CPU::ROR}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x7E,{(mos6502::i8)0x7E,"ROR",3,7,&CPU::ROR}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x90,{(mos6502::i8)0x90,"BCC",2,2,&CPU::BCC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB0,{(mos6502::i8)0xB0,"BCS",2,2,&CPU::BCS}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF0,{(mos6502::i8)0xF0,"BEQ",2,2,&CPU::BEQ}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD0,{(mos6502::i8)0xD0,"BNE",2,2,&CPU::BNE}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x24,{(mos6502::i8)0x24,"BIT",2,3,&CPU::BIT}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x2C,{(mos6502::i8)0x2C,"BIT",3,4,&CPU::BIT}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x30,{(mos6502::i8)0x30,"BMI",2,2,&CPU::BMI}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x10,{(mos6502::i8)0x10,"BPL",2,2,&CPU::BPL}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x00,{(mos6502::i8)0x00,"BRK",1,7,&CPU::BRK}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x50,{(mos6502::i8)0x50,"BVC",2,2,&CPU::BVC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x70,{(mos6502::i8)0x70,"BVS",2,2,&CPU::BVS}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x18,{(mos6502::i8)0x18,"CLC",1,2,&CPU::CLC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x38,{(mos6502::i8)0x38,"SEC",1,2,&CPU::SEC}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD8,{(mos6502::i8)0xD8,"CLD",1,2,&CPU::CLD}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF8,{(mos6502::i8)0xF8,"SED",1,2,&CPU::SED}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x58,{(mos6502::i8)0x58,"CLR",1,2,&CPU::CLR}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x78,{(mos6502::i8)0x78,"SEI",1,2,&CPU::SEI}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB8,{(mos6502::i8)0xB8,"CLV",1,2,&CPU::CLV}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC9,{(mos6502::i8)0xC9,"CMP",2,2,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC5,{(mos6502::i8)0xC5,"CMP",2,3,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD5,{(mos6502::i8)0xD5,"CMP",2,4,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCD,{(mos6502::i8)0xCD,"CMP",3,4,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xDD,{(mos6502::i8)0xDD,"CMP",3,4,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD9,{(mos6502::i8)0xD9,"CMP",3,4,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC1,{(mos6502::i8)0xC1,"CMP",2,6,&CPU::CMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD1,{(mos6502::i8)0xD1,"CMP",2,5,&CPU::CMP}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE0,{(mos6502::i8)0xE0,"CPX",2,2,&CPU::CPX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE4,{(mos6502::i8)0xE4,"CPX",2,3,&CPU::CPX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEC,{(mos6502::i8)0xEC,"CPX",3,4,&CPU::CPX}));

        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC0,{(mos6502::i8)0xC0,"CPY",2,2,&CPU::CPY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC4,{(mos6502::i8)0xC4,"CPY",2,3,&CPU::CPY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCC,{(mos6502::i8)0xCC,"CPY",3,4,&CPU::CPY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC6,{(mos6502::i8)0xC6,"DEC",2,5,&CPU::DEC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xD6,{(mos6502::i8)0xD6,"DEC",2,6,&CPU::DEC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCE,{(mos6502::i8)0xCE,"DEC",3,6,&CPU::DEC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xDE,{(mos6502::i8)0xDE,"DEC",3,7,&CPU::DEC}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xCA,{(mos6502::i8)0xCA,"DEX",1,2,&CPU::DEX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x88,{(mos6502::i8)0x88,"DEY",1,2,&CPU::DEY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE6,{(mos6502::i8)0xE6,"INC",2,5,&CPU::INC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xF6,{(mos6502::i8)0xF6,"INC",2,6,&CPU::INC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEE,{(mos6502::i8)0xEE,"INC",3,6,&CPU::INC}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xFE,{(mos6502::i8)0xFE,"INC",3,7,&CPU::INC}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xE8,{(mos6502::i8)0xE8,"INX",1,2,&CPU::INX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xC8,{(mos6502::i8)0xC8,"INY",1,2,&CPU::INY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x4C,{(mos6502::i8)0x4C,"JMP",3,3,&CPU::JMP}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x6C,{(mos6502::i8)0x6C,"JMP",3,5,&CPU::JMP}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x20,{(mos6502::i8)0x20,"JSR",3,6,&CPU::JSR}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x60,{(mos6502::i8)0x60,"RTS",1,6,&CPU::RTS}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA9,{(mos6502::i8)0xA9,"LDA",2,2,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA5,{(mos6502::i8)0xA5,"LDA",2,3,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB5,{(mos6502::i8)0xB5,"LDA",2,4,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAD,{(mos6502::i8)0xAD,"LDA",3,4,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBD,{(mos6502::i8)0xBD,"LDA",3,4,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB9,{(mos6502::i8)0xB9,"LDA",3,4,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA1,{(mos6502::i8)0xA1,"LDA",2,6,&CPU::LDA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB1,{(mos6502::i8)0xB1,"LDA",2,5,&CPU::LDA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA2,{(mos6502::i8)0xA2,"LDX",2,2,&CPU::LDX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA6,{(mos6502::i8)0xA6,"LDX",2,3,&CPU::LDX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB6,{(mos6502::i8)0xB6,"LDX",2,4,&CPU::LDX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAE,{(mos6502::i8)0xAE,"LDX",3,4,&CPU::LDX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBE,{(mos6502::i8)0xBE,"LDX",3,4,&CPU::LDX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA0,{(mos6502::i8)0xA0,"LDY",2,2,&CPU::LDY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA4,{(mos6502::i8)0xA4,"LDY",2,3,&CPU::LDY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xB4,{(mos6502::i8)0xB4,"LDY",2,4,&CPU::LDY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAC,{(mos6502::i8)0xAC,"LDY",3,4,&CPU::LDY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBC,{(mos6502::i8)0xBC,"LDY",3,4,&CPU::LDY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xEA,{(mos6502::i8)0xEA,"NOP",1,2,&CPU::NOP}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x48,{(mos6502::i8)0x48,"PHA",1,3,&CPU::PHA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x68,{(mos6502::i8)0x68,"PLA",1,4,&CPU::PLA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x08,{(mos6502::i8)0x08,"PHP",1,3,&CPU::PHP}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x28,{(mos6502::i8)0x28,"PLP",1,4,&CPU::PLP}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x40,{(mos6502::i8)0x40,"RTI",1,6,&CPU::RTI}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x85,{(mos6502::i8)0x85,"STA",2,3,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x95,{(mos6502::i8)0x95,"STA",2,4,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8D,{(mos6502::i8)0x8D,"STA",3,4,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x9D,{(mos6502::i8)0x9D,"STA",3,5,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x99,{(mos6502::i8)0x99,"STA",3,5,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x81,{(mos6502::i8)0x81,"STA",2,6,&CPU::STA}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x91,{(mos6502::i8)0x91,"STA",2,6,&CPU::STA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x86,{(mos6502::i8)0x86,"STX",2,3,&CPU::STX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x96,{(mos6502::i8)0x96,"STX",2,4,&CPU::STX}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8E,{(mos6502::i8)0x8E,"STX",3,4,&CPU::STX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x84,{(mos6502::i8)0x84,"STY",2,3,&CPU::STY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x94,{(mos6502::i8)0x94,"STY",2,4,&CPU::STY}));
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8C,{(mos6502::i8)0x8C,"STY",3,4,&CPU::STY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xAA,{(mos6502::i8)0xAA,"TAX",1,2,&CPU::TAX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x8A,{(mos6502::i8)0x8A,"TXA",1,2,&CPU::TXA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x98,{(mos6502::i8)0x98,"TYA",1,2,&CPU::TYA}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xA8,{(mos6502::i8)0xA8,"TAY",1,2,&CPU::TAY}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0xBA,{(mos6502::i8)0xBA,"TSX",1,2,&CPU::TSX}));
        
        this->opHandlerTable.insert(std::pair<mos6502::i16,OpINS>(0x9A,{(mos6502::i8)0x9A,"TXS",1,2,&CPU::TXS}));
 
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
        return opINS.op; 
    }

    mos6502::i16 CPU::execute(){
        mos6502::i16 (CPU::*opHdr)(mos6502::i16) = opINS.opHandler;
        
        std::cout<<"EXEC PC:"<<std::hex<<this->PC;
        std::cout<<":(0x"<<std::hex<<(0xFF & this->opINS.op);
        std::cout<<")"<<this->opINS.opName;
        std::cout<<" bytes:"<<std::hex<<(0xFF & this->opINS.bytes)<<std::endl;
        
        return (this->*opHdr)(this->opINS.op);
    }

    mos6502::i16 CPU::run(){
        mos6502::i8 high = this->memory[this->resetVector];
        mos6502::i8 low  = this->memory[this->resetVector + 1];
        mos6502::i16 pc = 0xFFFF;
        // this->PC = ((pc & high) << 8) | low;
        this->PC = this->paks;
        
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
