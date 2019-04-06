#include "../include/CPU.h"
#include "../include/ROM.h"
#include <iostream>
#include <fstream>
#include <climits>
#include <vector>

#include <bitset>
#include "../include/MOS6502.h"
void rom_test(char *nesFile);
void cpu_test();
void ppu_test();
void apu_test();

mos6502::i8 *addTileInt8(mos6502::i8 first,mos6502::i8 second,mos6502::i8 *result);

int main(int argc, char *argv[]){
    /*
    if(argc<2){
        std::cout<<"Usage: "<<argv[0]<<" <filename>"<<std::endl;
        return -1;                    
    }
        
    rom::ROM rom;
    rom.loadNesFile(argv[1]);
                

    cpu::CPU cpu;
    cpu.reset();
           
    cpu.setPRG1(rom.getPRGROM()[0]);                            // 0x8000 
    cpu.setPRG2(rom.getPRGROM()[rom.getPRGROM().size()-1]);     // 0xC000

    // 35 D7 D0 D6 44 D7
    //     
    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-4])<<std::endl;
    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-3])<<std::endl;
    
    cpu.run();
    */

    mos6502::i8 first = 32;   // 0010 0000
    mos6502::i8 second = 220; // 1101 1100

    mos6502::i8 result[8];
    mos6502::i8 *result_arr = addTileInt8(first,second,result);

    for(int i =0;i<7;i++){
        std::cout<<std::bitset<8>(result_arr[i])<<std::endl;
    }

    return 0;
   
}

mos6502::i8 *addTileInt8(mos6502::i8 first,mos6502::i8 second, mos6502::i8 *result){
    std::cout<<std::bitset<8>(first)<<":"<<std::bitset<8>(second)<<std::endl;
    for(int i = 7; i>=0; i--){
        mos6502::i8 low_bit  = (first >> i) & 0x1;
        mos6502::i8 high_bit = (second >> (i)) & 0x1; 
        std::cout<<std::bitset<8>(low_bit)<<":"<<std::bitset<8>(high_bit)<<":"<<std::bitset<8>(low_bit | (high_bit << 0x1)) <<std::endl;
        result[7-i] = low_bit | (high_bit << 0x1);
    }
    return result;
}


void ppu_test(){


}

void apu_test(){


}


