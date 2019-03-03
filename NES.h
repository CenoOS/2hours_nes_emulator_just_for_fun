#ifndef __NES_H__
#define __NES_H__

#include "CPU.h"

namespace nes
{
       class NES
       {
       private:
              cpu::CPU *cpu;
       public:
              NES();

              mos6502::i8 loadProgram();
              mos6502::i8 run();
              mos6502::i8 reset();

              ~NES();
       };
       
       NES::NES()
       {
       }
       
       NES::~NES()
       {
       }
       
}; // nes

#endif //!__NES_H__