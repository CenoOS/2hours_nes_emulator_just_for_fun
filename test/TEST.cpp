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
    
    rom_test(argv[1]);
    cpu_test();

    return 0;
}

void rom_test(char *nesFile){
    rom::ROM rom;
    rom.loadNesFile(nesFile);
}

void cpu_test(){
    cpu::CPU cpu;
    cpu.reset();
    cpu.run();
}


void ppu_test(){

}

void apu_test(){

}

