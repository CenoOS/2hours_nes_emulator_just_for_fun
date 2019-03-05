#include "../include/CPU.h"
#include "../include/ROM.h"
#include <iostream>
#include <fstream>
#include <climits>
#include <vector>

void rom_test(char *nesFile);
void cpu_test();
void ppu_test();
void apu_test();

int main(int argc, char *argv[]){

    if(argc<2){
        std::cout<<"Usage: "<<argv[0]<<" <filename>"<<std::endl;
        return -1;
    }
    
    rom::ROM rom;
    rom.loadNesFile(argv[1]);
    

    std::cout<<"ROM:"<<rom.getPRGROM().size()<<std::endl;
    for(int i = 0; i<rom.getPRGROM()[0].size();i++){
        std::cout<<"ROM1"<<rom.getPRGROM()[0][i]<<std::endl;
    }

    cpu::CPU cpu;
    cpu.reset();
    cpu.setPRG1(rom.getPRGROM()[0]);
    cpu.setPRG2(rom.getPRGROM()[rom.getPRGROM().size()-1]);
    cpu.run();

    return 0;
}


void ppu_test(){

}

void apu_test(){

}

