CXX = g++
LD = ld
CFLAGS = -Iinclude  -std=c++11 -Wall -lstdc++

ifeq ($(OS),Windows_NT)
    CCFLAGS += -D WIN32
    ifeq ($(PROCESSOR_ARCHITEW6432),AMD64)
        CCFLAGS += -D AMD64
    else
        ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
            CCFLAGS += -D AMD64
        endif
        ifeq ($(PROCESSOR_ARCHITECTURE),x86)
            CCFLAGS += -D IA32
        endif
    endif
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
        CCFLAGS += -D LINUX
    endif
    ifeq ($(UNAME_S),Darwin)
        CCFLAGS += -D OSX
    endif
    UNAME_P := $(shell uname -p)
    ifeq ($(UNAME_P),x86_64)
        CCFLAGS += -D AMD64
    endif
    ifneq ($(filter %86,$(UNAME_P)),)
        CCFLAGS += -D IA32
    endif
    ifneq ($(filter arm%,$(UNAME_P)),)
        CCFLAGS += -D ARM
    endif
endif


all:	ROM.o CPU.o TEST.o	
	cc -o CPU_TEST obj/TEST.o obj/CPU.o obj/ROM.o -lstdc++

TEST.o:
	cc $(CCFLAGS) -o obj/TEST.o -c test/TEST.cpp

CPU.o:
	cc $(CCFLAGS) -o obj/CPU.o -c src/CPU.cpp

ROM.o:
	cc $(CCFLAGS) -o obj/ROM.o -c src/ROM.cpp

clean:
    ifeq ($(OS),Windows_NT)
	    del obj/*.o
    else
	    rm -r obj
    endif
