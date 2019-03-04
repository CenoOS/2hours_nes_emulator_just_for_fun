#include "CPU.h"
#include <iostream>
#include <fstream>
#include <climits>
#include <vector>


void cpu_test();
void ppu_test();
void apu_test();

int main(int argc, char *argv[]){

    if(argc<2){
        std::cout<<"Usage: "<<argv[0]<<" <filename>"<<std::endl;
        return -1;
    }

    std::fstream nesFile;
    nesFile.open(argv[1],std::ios::binary | std::ios::in);
    if(!nesFile){
        std::cout<<"file '"<<argv[1]<<"' open filed"<<std::endl;
        return -1;
    }



    std::vector<mos6502::i16> prog;
    int clm = 0;
    int line = 0;
    while(nesFile){
        char c;
        nesFile.get(c);
        if(nesFile){
            if(clm==0){
                 std::cout<<line<<": ";
            }
            if(((0x000000ff)&int(c))<0x10){
                std::cout<<"0X0"<<std::hex<<((0x000000ff)&int(c))<<" ";
            }else{
                std::cout<<"0X"<<std::hex<<((0x000000ff)&int(c))<<" ";
            }
            clm++;
            if(clm==0x10){
                clm = 0;
                std::cout<<std::endl;
                line++;
            }

            prog.push_back((0xffff)&(int)c);
        }
    }

    std::cout<<"SIZE："<<prog.size()<<std::endl;

    cpu_test();


    return 0;
}


void cpu_test(){
    cpu::CPU cpu;
    cpu.reset();
}

void ppu_test(){

}

void apu_test(){

}

