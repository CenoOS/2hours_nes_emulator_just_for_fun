#include "../include/PPU.h"


namespace ppu{

    PPU::PPU(){

    }

    void PPU::step(){
        
    }


    mos6502::i8 *PPU::addTileInt8(mos6502::i8 first,mos6502::i8 second){
        mos6502::i8 result[8];
        for(int i = 7; i>0; i--){
            result[7-i] = (((first >> i) == 0x0) && ((second >> i) == 0x0)) ? 0x0 :
                (((first >> i) == 0x1) && ((second >> i) == 0x1)) ? 0x3 :
                (((first >> i) == 0x1) && ((second >> i) != 0x1)) ? 0x1 : 0x2;
        }

        return result;
    } 



    PPU::~PPU(){

    }

};
