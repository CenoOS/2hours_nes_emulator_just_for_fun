#ifndef __PPU_H__
#define __PPU_H__

#include "MOS6502.h"
#include <vector>
#include <string>


namespace ppu{
    
    typedef struct Tile{
        mos6502::i8 data[8][8];
    } Tile;
    
    class PPU{
        
        private:

            // register


            // ppu memory
            


            // buffers
            

        public:

            PPU();
            
            void step();

            mos6502::i8 *addTileInt8(mos6502::i8 first,mos6502::i8 second); 


            ~PPU();


        
    };
};

#endif // !__PPU_H__
