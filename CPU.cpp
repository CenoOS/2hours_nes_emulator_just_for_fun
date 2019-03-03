#include "CPU.h"


namespace cpu
{

    CPU::CPU()
    {
        this->opHandlerTable[0x00] = (opHandler)ADC;
    }

    mos6502::i16 CPU::ADC(mos6502::i16 op){

    }

    mos6502::i16 CPU::SBC(mos6502::i16 op){

    }

    mos6502::i16 CPU::AND(mos6502::i16 op){

    }

    mos6502::i16 CPU::EOR(mos6502::i16 op){

    }

    mos6502::i16 CPU::ORA(mos6502::i16 op){

    }

    mos6502::i16 CPU::ASL(mos6502::i16 op){

    }

    mos6502::i16 CPU::LSR(mos6502::i16 op){

    }

    mos6502::i16 CPU::ROL(mos6502::i16 op){

    }

    mos6502::i16 CPU::ROR(mos6502::i16 op){

    }

    mos6502::i16 CPU::BCC(mos6502::i16 op){

    }

    mos6502::i16 CPU::BCS(mos6502::i16 op){

    }

    mos6502::i16 CPU::BEQ(mos6502::i16 op){

    }

    mos6502::i16 CPU::BNE(mos6502::i16 op){

    }

    mos6502::i16 CPU::BIT(mos6502::i16 op){

    }

    mos6502::i16 CPU::BMI(mos6502::i16 op){

    }

    mos6502::i16 CPU::BPL(mos6502::i16 op){

    }

    mos6502::i16 CPU::BRK(mos6502::i16 op){

    }

    mos6502::i16 CPU::BVC(mos6502::i16 op){

    }

    mos6502::i16 CPU::BVS(mos6502::i16 op){

    }

    mos6502::i16 CPU::CLC(mos6502::i16 op){

    }

    mos6502::i16 CPU::SEC(mos6502::i16 op){

    }

    mos6502::i16 CPU::CLD(mos6502::i16 op){

    }

    mos6502::i16 CPU::SED(mos6502::i16 op){

    }

    mos6502::i16 CPU::CLR(mos6502::i16 op){

    }

    mos6502::i16 CPU::SEI(mos6502::i16 op){

    }

    mos6502::i16 CPU::CLV(mos6502::i16 op){

    }

    mos6502::i16 CPU::CMP(mos6502::i16 op){

    }

    mos6502::i16 CPU::CPX(mos6502::i16 op){

    }

    mos6502::i16 CPU::CPY(mos6502::i16 op){

    }

    mos6502::i16 CPU::DEC(mos6502::i16 op){

    }

    mos6502::i16 CPU::DEX(mos6502::i16 op){

    }

    mos6502::i16 CPU::DEY(mos6502::i16 op){

    }

    mos6502::i16 CPU::INC(mos6502::i16 op){

    }

    mos6502::i16 CPU::INX(mos6502::i16 op){

    }

    mos6502::i16 CPU::INY(mos6502::i16 op){

    }

    mos6502::i16 CPU::JMP(mos6502::i16 op){

    }

    mos6502::i16 CPU::JSR(mos6502::i16 op){

    }

    mos6502::i16 CPU::RTS(mos6502::i16 op){

    }

    mos6502::i16 CPU::LDA(mos6502::i16 op){

    }

    mos6502::i16 CPU::LDX(mos6502::i16 op){

    }

    mos6502::i16 CPU::LDY(mos6502::i16 op){

    }

    mos6502::i16 CPU::NOP(mos6502::i16 op){

    }

    mos6502::i16 CPU::PHA(mos6502::i16 op){

    }

    mos6502::i16 CPU::PLA(mos6502::i16 op){

    }

    mos6502::i16 CPU::PHP(mos6502::i16 op){

    }

    mos6502::i16 CPU::PLP(mos6502::i16 op){

    }

    mos6502::i16 CPU::RTI(mos6502::i16 op){

    }

    mos6502::i16 CPU::STA(mos6502::i16 op){

    }

    mos6502::i16 CPU::STX(mos6502::i16 op){

    }

    mos6502::i16 CPU::STY(mos6502::i16 op){

    }

    mos6502::i16 CPU::TAX(mos6502::i16 op){

    }

    mos6502::i16 CPU::TXA(mos6502::i16 op){

    }

    mos6502::i16 CPU::TYA(mos6502::i16 op){

    }

    mos6502::i16 CPU::TAY(mos6502::i16 op){

    }

    mos6502::i16 CPU::TSX(mos6502::i16 op){

    }

    mos6502::i16 CPU::TXS(mos6502::i16 op){

    }

    
    mos6502::i8 CPU::setFlag(mos6502::i8 flag){
        this->P &= ~(0x1 << flag);
        return this->P;
    }

    mos6502::i8 CPU::getFlag(mos6502::i8 flag){
        return ((0x1 << flag) & this->P) >> flag;
    }

    mos6502::i8 CPU::reset(){
        this->memory = (mos6502::i16 *)malloc(0x10000 * sizeof(mos6502::i16));
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

    }

    mos6502::i8 CPU::getProcessorFlags(){
        return this->P;
    }

    mos6502::i8  CPU::write(mos6502::i16 addr, mos6502::i16 data){
        this->memory[addr] = data;
        return data;
    }

    mos6502::i16 CPU::read(mos6502::i16 addr){
        return this->memory[addr];
    }


    mos6502::i16 CPU::fetch(){
        this->PC++;
    }

    opHandler CPU::getOpHandler(mos6502::i16 op){
        return opHandlerTable[op];
    }

    mos6502::i16 CPU::decode(){
        mos6502::i16 op = this->memory[this->PC];

        switch (op)
        {
            // ADC : ADD EITH CARRY
            case 0x69: case 0x64: case 0x75: case 0x6D: case 0x7D: case 0x79: case 0x61: case 0x71:
            // SBC : SUBTRACT WITH CARRY
            case 0xE9: case 0xE5: case 0xF5: case 0xED: case 0xFD: case 0xF9: case 0xE1: case 0xF1: 
            // AND : LOGICAL AND
            case 0x29: case 0x25: case 0x35: case 0x2D: case 0x3D: case 0x39: case 0x21: case 0x31: 
            // EOR : EXCLUSIVE OR
            case 0x49: case 0x45: case 0x55: case 0x4D: case 0x5D: case 0x59: case 0x41: case 0x51:
            // ORA : LOGICAL INCLUSIVE OR
            case 0x09: case 0x05: case 0x15: case 0x0D: case 0x1D: case 0x19: case 0x01: case 0x11:
            // ASL : ARITHMETIC SHIFT LEFT
            case 0x0A: case 0x06: case 0x16: case 0x0E: case 0x1E:
            // LSR : LOGICAL SHIFT RIGHT
            case 0x4A: case 0x46: case 0x56: case 0x4E: case 0x5E:
            // ROL : ROTATE LEFT
            case 0x2A: case 0x26: case 0x36: case 0x2E: case 0x3E:
            // ROR : ROTATE RIGHT
            case 0x6A: case 0x66: case 0x76: case 0x6E: case 0x7E:
            // BCC : BRANCH IF CARRY CLEAR
            case 0x90:
            // BCS : BRANCH IF CARRY SET
            case 0xB0:
            // BEQ : BRANCH IF EQUAL
            case 0xF0:
            // BNE : BRANCH IF NOT EQUAL
            case 0xD0:
            // BIT : BIT TEST
            case 0x24:
            case 0x2C:
            // BMI : BRANCH IF MINUS
            case 0x30:
            // BPL : BRANCH IF POSITIVE
            case 0x10:
            // BRK : FORCE INTERRUPT
            case 0x00:
            // BVC : BRANCH IF OVERFLOW CLEAR
            case 0x50:
            // BVS : BRANCH IF OVERFLOW SET
            case 0x70:
            // CLC : CLEAR CARRY FLAG
            case 0x18:
            // SEC : SET CARRY FLAG
            case 0x38:
            // CLD : CLEAR DECIMAL MODE
            case 0xD8:
            // SED : SET DECIMAL MODE
            case 0xF8:
            // CLR : CLEAR INTERRUPT DISABLE
            case 0x58:
            // SEI : SET INTERRUPT DISABLE
            case 0x78:
            // CLV : CLEAR OVERFLOW FLAG
            case 0xB8:
            // CMP : COMPARE
            case 0xC9: case 0xC5: case 0xD5: case 0xCD: case 0xDD: case 0xD9: case 0xC1: case 0xD1:
            // CPX : COMPARE X REGISTER
            case 0xE0: case 0xE4: case 0xEC:
            // CPY : COMPARE Y REGISTER
            case 0xC0: case 0xC4: case 0xCC:
            // DEC : DECREMENT MEMORY
            case 0xC6: case 0xD6: case 0xCE: case 0xDE:
            // DEX : DECREMENT X REGISTER
            case 0xCA:
            // DEY : DECREMENT Y REGISTER
            case 0x88:
            // INC : INCREMENT MEMORY
            case 0xE6: case 0xF6: case 0xEE: case 0xFE:
            // INX : INCREMENT X REGISTER
            case 0xE8:
            // INY : INCREMENT Y REGISTER
            case 0xC8:
            // JMP : JUMP
            case 0x4C: case 0x6C:
            // JSR : JUMP TO SUBROUTINE
            case 0x20:
            // RTS : RETURN FROM SUBROUTINE
            case 0x60:
            // LDA : LOAD ACCUMULATOR
            case 0xA9: case 0xA5: case 0xB5: case 0xAD: case 0xBD: case 0xB9: case 0xA1: case 0xB1:
            // LDX : LOAD X REGISTER
            case 0xA2: case 0xA6: case 0xB6: case 0xAE: case 0xBE:
            // LDY : LOAD Y REGISTER
            case 0xA0: case 0xA4: case 0xB4: case 0xAC: case 0xBC:
            // NOP : NO OPERATION
            case 0xEA:
            // PHA : PUSH ACCUMULATOR
            case 0x48:
            // PLA : PULL ACCUMLATOR
            case 0x68:
            // PHP : PUSH PROCESSOT STATUS
            case 0x08:
            // PLP : PULL PROCESSOR STATUS
            case 0x28:
            // RTI : RETURN FROM INTERRUPT
            case 0x40:
            // STA : STORE ACCUMULATOR
            case 0x85: case 0x95: case 0x8D: case 0x9D: case 0x99: case 0x81: case 0x91:
            // STX : STORE X REGISTER
            case 0x86: case 0x96: case 0x8E:
            // STY : STORE Y REGISTER
            case 0x84: case 0x94: case 0x8C:
            // TAX : TRANSFER ACCUMULATOR TO X
            case 0xAA:
            // TXA : TRANSFER X TO ACCUMULATOR
            case 0x8A:
            // TYA : TRANSFER Y TO ACCUMULATOR
            case 0x98:
            // TAY : TRANSFER ACCUMULATOR TO Y
            case 0xA8:
            // TSX : TRANSFER STACK POINTER TO X
            case 0xBA:
            // TXS : TRANSFER  X TO STACK POINTER
            case 0x9A:

            default:
                break;
        }
    }

    mos6502::i16 CPU::execute(){

    }


    CPU::~CPU()
    {
        free(this->memory);
    }
    
    
}; // cpu
