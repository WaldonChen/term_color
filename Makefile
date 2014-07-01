CC = gcc
CXX = g++
CFLAGS += -O2 -I.

all: termcolor termcolor_cpp

termcolor: termcolor.c termcolor.h
	$(CC) $(CFLAGS) $^ -o $@

termcolor_cpp: termcolor.cpp termcolor.h
	$(CXX) $(CFLAGS) $^ -o $@

clean:
	-rm termcolor termcolor_cpp
