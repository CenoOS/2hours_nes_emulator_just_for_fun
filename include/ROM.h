#ifndef __ROM_H__
#define __ROM_H__


#include "MOS6502.h"
#include <vector>

namespace rom{



    class ROM{

        private:

            mos6502::i8 header[16];

            mos6502::i8 constant[4];
            mos6502::i8 sizeOfPRGROM;
            mos6502::i8 sizeOfCHRROM;
            mos6502::i8 f6;
            mos6502::i8 f7;
            mos6502::i8 f8;
            mos6502::i8 f9;
            mos6502::i8 fa;
            mos6502::i8 fb;
            mos6502::i8 fc;
            mos6502::i8 fd;
            mos6502::i8 fe;
            mos6502::i8 ff;
    
            std::vector<std::vector<mos6502::i8>> PRGROM;  // PRG ROM DATA(16384*SIZE)
            std::vector<std::vector<mos6502::i8>> CHRROM;  // CHR ROM DATA(8192*SIZE)
            


        public:
            ROM();


            mos6502::i8 loadNesFile(char* file);


            ~ROM();


    };




};

#endif

