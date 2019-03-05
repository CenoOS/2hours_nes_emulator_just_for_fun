#include "../include/ROM.h"
#include <iostream>
#include <fstream>
namespace rom{

    ROM::ROM(){
    
    }

    mos6502::i8 ROM::loadNesFile(char* file){
        std::fstream nesFile;
        nesFile.open(file,std::ios::binary | std::ios::in);
        if(!nesFile){
            std::cout<<"file '"<<file<<"' open filed"<<std::endl;
            return -1;
        }



        std::vector<mos6502::i8> prog;
        // int clm = 0;
        // int line = 0;
        while(nesFile){
            char c;
            nesFile.get(c);
            if(nesFile){
                // if(clm==0){
                //     std::cout<<line<<": ";
                // }
                // if(((0x000000ff)&int(c))<0x10){
                //     std::cout<<"0X0"<<std::hex<<((0x000000ff)&int(c))<<" ";
                // }else{
                //     std::cout<<"0X"<<std::hex<<((0x000000ff)&int(c))<<" ";
                // }
                // clm++;
                // if(clm==0x10){
                //     clm = 0;
                //     std::cout<<std::endl;
                //     line++;
                // }

                prog.push_back((0xffff)&(int)c);
            }
        }


        for(int i = 0; i <16; i++){
            this->header[i] = prog.at(i);
        }

        this->constant[0] = this->header[0];
        this->constant[1] = this->header[1];
        this->constant[2] = this->header[2];
        this->constant[3] = this->header[3];

        this->sizeOfPRGROM = this->header[4];
        this->sizeOfCHRROM = this->header[5];
        this->f6 = this->header[6];
        this->f7 = this->header[7];
        this->f8 = this->header[8];
        this->f9 = this->header[9];
        this->fa = this->header[0xA];
        this->fb = this->header[0xB];
        this->fc = this->header[0xC];
        this->fd = this->header[0xD];
        this->fe = this->header[0xE];
        this->ff = this->header[0xF];



        std::cout<<"SIZE:"<<prog.size();
        std::cout<<std::endl;
        std::cout<<"CONSTANT:"<<(char*)this->constant;
        std::cout<<" PRGROMSIZE:"<<((0xff) & this->sizeOfPRGROM);
        std::cout<<" CHRROMSIZE:"<<((0xff) & this->sizeOfCHRROM);
        std::cout<<std::endl;
        std::cout<<"FLAG6:"<<((0xff) & this->f6);
        std::cout<<" FLAG7:"<<((0xff) & this->f7);
        std::cout<<" FLAG8:"<<((0xff) & this->f8);
        std::cout<<" FLAG9:"<<((0xff) & this->f9);
        std::cout<<" FLAG10:"<<((0xff) & this->fa);
        std::cout<<std::endl;
        std::cout<<"FLAG11:"<<((0xff) & this->fb);
        std::cout<<" FLAG12:"<<((0xff) & this->fc);
        std::cout<<" FLAG13:"<<((0xff) & this->fd);
        std::cout<<" FLAG14:"<<((0xff) & this->fe);
        std::cout<<" FLAG15:"<<((0xff) & this->ff);
        std::cout<<std::endl;

        mos6502::i16 PRGROM_BANK_SIZE = 16384;
        for(int i = 0; i < this->sizeOfPRGROM; i++){
            std::vector<mos6502::i8> PRGROM_BANK;
            PRGROM_BANK.reserve(PRGROM_BANK_SIZE);
            for(int j = 0; j <PRGROM_BANK_SIZE; j++){
                PRGROM_BANK[j] = prog[16 + i*PRGROM_BANK_SIZE];
            }
            this->PRGROM.push_back(PRGROM_BANK);
        }


        mos6502::i16 CHRROM_BANK_SIZE = 8192;
        for(int i = 0; i < this->sizeOfCHRROM; i++){
            std::vector<mos6502::i8> CHRROM_BANK;
            CHRROM_BANK.reserve(CHRROM_BANK_SIZE);
            for(int j = 0; j <CHRROM_BANK_SIZE; j++){
                CHRROM_BANK[j] = prog[16 + this->sizeOfPRGROM*PRGROM_BANK_SIZE + i*CHRROM_BANK_SIZE];
            }
            this->CHRROM.push_back(CHRROM_BANK);
        }



    }

    ROM::~ROM(){
    
    }
};
