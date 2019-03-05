#include "../include/ROM.h"
#include <iostream>
#include <fstream>
namespace rom{

    ROM::ROM(){
        for (int i = 0; i < 92; i++) {
                this->mapperNames[i] = "Unknown Mapper";
                  
        }
        this->mapperNames[0] = "Direct Access";
        this->mapperNames[1] = "Nintendo MMC1";
        this->mapperNames[2] = "UNROM";
        this->mapperNames[3] = "CNROM";
        this->mapperNames[4] = "Nintendo MMC3";
        this->mapperNames[5] = "Nintendo MMC5";
        this->mapperNames[6] = "FFE F4xxx";
        this->mapperNames[7] = "AOROM";
        this->mapperNames[8] = "FFE F3xxx";
        this->mapperNames[9] = "Nintendo MMC2";
        this->mapperNames[10] = "Nintendo MMC4";
        this->mapperNames[11] = "Color Dreams Chip";
        this->mapperNames[12] = "FFE F6xxx";
        this->mapperNames[15] = "100-in-1 switch";
        this->mapperNames[16] = "Bandai chip";
        this->mapperNames[17] = "FFE F8xxx";
        this->mapperNames[18] = "Jaleco SS8806 chip";
        this->mapperNames[19] = "Namcot 106 chip";
        this->mapperNames[20] = "Famicom Disk System";
        this->mapperNames[21] = "Konami VRC4a";
        this->mapperNames[22] = "Konami VRC2a";
        this->mapperNames[23] = "Konami VRC2a";
        this->mapperNames[24] = "Konami VRC6";
        this->mapperNames[25] = "Konami VRC4b";
        this->mapperNames[32] = "Irem G-101 chip";
        this->mapperNames[33] = "Taito TC0190/TC0350";
        this->mapperNames[34] = "32kB ROM switch";
        this->mapperNames[64] = "Tengen RAMBO-1 chip";
        this->mapperNames[65] = "Irem H-3001 chip";
        this->mapperNames[66] = "GNROM switch";
        this->mapperNames[67] = "SunSoft3 chip";
        this->mapperNames[68] = "SunSoft4 chip";
        this->mapperNames[69] = "SunSoft5 FME-7 chip";
        this->mapperNames[71] = "Camerica chip";
        this->mapperNames[78] = "Irem 74HC161/32-based";
        this->mapperNames[91] = "Pirate HK-SF3 chip";
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
            this->mirroring  = (this->f6 & 0x1);                 // & 0b00000001 >> 0
            this->batteryRam = (this->f6 & (0x1 << 0x1)) >> 0x1; // & 0b00000010 >> 1
            this->trainer    = (this->f6 & (0x1 << 0x2)) >> 0x2; // & 0b00000100 >> 2
            this->fourScreen = (this->f6 & (0x1 << 0x3)) >> 0x3; // & 0b00001000 >> 3
            this->mapperType = (this->f6 & (0xf << 0x4)) >> 0x4; // & 0b11110000 >> 4
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
