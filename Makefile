CXX = g++
LD = ld
CCFLAGS =  -std=c++11 -Wall -lstdc++
# ifeq ($(OS),Windows_NT)
#     CCFLAGS += -D WIN32
#     ifeq ($(PROCESSOR_ARCHITEW6432),AMD64)
#         CCFLAGS += -D AMD64
#     else
#         ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
#             CCFLAGS += -D AMD64
#         endif
#         ifeq ($(PROCESSOR_ARCHITECTURE),x86)
#             CCFLAGS += -D IA32
#         endif
#     endif
# else
#     UNAME_S := $(shell uname -s)
#     ifeq ($(UNAME_S),Linux)
#         CCFLAGS += -D LINUX
#     endif
#     ifeq ($(UNAME_S),Darwin)
#         CCFLAGS += -D OSX
#     endif
#     UNAME_P := $(shell uname -p)
#     ifeq ($(UNAME_P),x86_64)
#         CCFLAGS += -D AMD64
#     endif
#     ifneq ($(filter %86,$(UNAME_P)),)
#         CCFLAGS += -D IA32
#     endif
#     ifneq ($(filter arm%,$(UNAME_P)),)
#         CCFLAGS += -D ARM
#     endif
# endif


all:	CPU.o	TEST.o	
	cc -o CPU_TEST TEST.o CPU.o -lstdc++

TEST.o:	TEST.cpp
	cc $(CCFLAGS) -o TEST.o -c TEST.cpp

CPU.o:	CPU.cpp CPU.h
	cc $(CCFLAGS) -o CPU.o -c CPU.cpp

clean:
    ifeq ($(OS),Windows_NT)
	    del *.o
    else
	    rm -r *.o
    endif
