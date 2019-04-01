#ifndef __ROM_H__
#define __ROM_H__


#include "MOS6502.h"
#include <vector>
#include <string>

namespace rom{



    class ROM{

        private:
            
            // Header (16 bytes)
            mos6502::i8 header[16];
                // Constant 0x4E 0x45 0x53 0x1A ("NES" followed by MS-DOS end-of-file)
                // Size of PRG ROM in 16 KB units
                // Size of CHR ROM in 8 KB units (Value 0 means the board uses CHR RAM)
                // Flags 6 - Mapper, mirroring, battery, trainer
                // Flags 7 - Mapper, VS/Playchoice, NES 2.0
                // Flags 8 - PRG-RAM size (rarely used extension)
                // Flags 9 - TV system (rarely used extension)
                // Flags 10 - TV system, PRG-RAM presence (unofficial, rarely used extension)
                // Unused padding (should be filled with zero, but some rippers put their name across bytes 7-15))
                mos6502::i8 constant[4];
                mos6502::i8 sizeOfPRGROM;
                mos6502::i8 sizeOfCHRROM;

                // 76543210
                // ||||||||
                // |||||||+- Mirroring: 0: horizontal (vertical arrangement) (CIRAM A10 = PPU A11)
                // |||||||              1: vertical (horizontal arrangement) (CIRAM A10 = PPU A10)
                // ||||||+-- 1: Cartridge contains battery-backed PRG RAM ($6000-7FFF) or other persistent memory
                // |||||+--- 1: 512-byte trainer at $7000-$71FF (stored before PRG data)
                // ||||+---- 1: Ignore mirroring control or above mirroring bit; instead provide four-screen VRAM
                // ++++----- Lower nybble of mapper number
                mos6502::i8 f6;
                    mos6502::i8 mirroring;
                    mos6502::i8 batteryRam;
                    mos6502::i8 trainer;
                    mos6502::i8 fourScreen;
                    mos6502::i8 mapperType;

                // 76543210
                // ||||||||
                // |||||||+- VS Unisystem
                // ||||||+-- PlayChoice-10 (8KB of Hint Screen data stored after CHR data)
                // ||||++--- If equal to 2, flags 8-15 are in NES 2.0 format
                // ++++----- Upper nybble of mapper number
                mos6502::i8 f7;

                // 76543210
                // ||||||||
                // ++++++++- PRG RAM size
                mos6502::i8 f8;
                
                // 76543210
                // ||||||||
                // |||||||+- TV system (0: NTSC; 1: PAL)
                // +++++++-- Reserved, set to zero
                mos6502::i8 f9;

                // 76543210
                // ||  ||
                // ||  ++- TV system (0: NTSC; 2: PAL; 1/3: dual compatible)
                // |+----- PRG RAM ($6000-$7FFF) (0: present; 1: not present)
                // +------ 0: Board has no bus conflicts; 1: Board has bus conflicts
                mos6502::i8 fa;
                mos6502::i8 fb;
                mos6502::i8 fc;
                mos6502::i8 fd;
                mos6502::i8 fe;
                mos6502::i8 ff;
    

            // Trainer, if present (0 or 512 bytes)

            
            // PRG ROM data (16384 * x bytes)
            std::vector<std::vector<mos6502::i8>> PRGROM;  // PRG ROM DATA(16384*SIZE)

            // CHR ROM data, if present (8192 * y bytes)
            std::vector<std::vector<mos6502::i8>> CHRROM;  // CHR ROM DATA(8192*SIZE)

            // PlayChoice INST-ROM, if present (0 or 8192 bytes)
            // PlayChoice PROM, if present (16 bytes Data, 16 bytes CounterOut) (this is often missing, see PC10 ROM-Images for details)


            std::vector<std::string> mapperNames;

        public:
            ROM();

            std::vector<std::vector<mos6502::i8>> getPRGROM(){return this->PRGROM;}
            std::vector<std::vector<mos6502::i8>> getCHRROM(){return this->CHRROM;}
            mos6502::i8 loadNesFile(const char* file);


            ~ROM();


    };




};

#endif

