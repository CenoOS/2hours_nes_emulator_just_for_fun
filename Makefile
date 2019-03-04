CXX = g++
LD = ld
CCFLAGS =  -std=c++11 -Wall -fexceptions -I 
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
all:
	make ld

ld:	TEST.o	CPU.o
	$(LD) -o TEST.o CPU.o -lcrt -lgcc

TEST.o:	TEST.cpp
	$(CXX) $(CCFLAGS) -o -c TEST.cpp

CPU.o:	CPU.cpp CPU.h
	$(CXX) $(CCFLAGS) -o -c CPU.cpp

clean:
    ifeq ($(OS),Windows_NT)
	    del *.o
    else
	    rm -r *.o
    endif