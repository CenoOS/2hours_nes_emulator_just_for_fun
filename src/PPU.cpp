#include "../include/PPU.h"


namespace ppu{

    PPU::PPU(){

    }

    void PPU::step(){
        
    }

    
    // inseresting tile  matrix add in NES PPU
    // first is low bit ,second is hihg bit
    mos6502::i8 *PPU::addTileInt8(mos6502::i8 first,mos6502::i8 second, mos6502::i8 *result){
        for(int i = 7; i>=0; i--){
            mos6502::i8 low_bit  = (first >> i) & 0x1;
            mos6502::i8 high_bit = (second >> (i)) & 0x1; 
            result[7-i] = low_bit | (high_bit << 0x1);
        }
        return result;
    }

    PPU::~PPU(){

    }

};
