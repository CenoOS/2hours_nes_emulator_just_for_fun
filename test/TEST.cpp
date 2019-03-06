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
    

    cpu::CPU cpu;
    cpu.reset();
    
    cpu.setPRG1(rom.getPRGROM()[0]);                            // 0x8000 
    cpu.setPRG2(rom.getPRGROM()[rom.getPRGROM().size()-1]);     // 0xC000

    // 35 D7 D0 D6 44 D7
    
    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-5])<<std::endl;

    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-4])<<std::endl;

    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-3])<<std::endl;

    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-2])<<std::endl;

    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-1])<<std::endl;

    std::cout<<"RESET:"<<(0xFF & rom.getPRGROM()[rom.getPRGROM().size()-1][rom.getPRGROM()[rom.getPRGROM().size()-1].size()-0])<<std::endl;

    
    cpu.run();

    return 0;
}


void ppu_test(){

}

void apu_test(){

}

