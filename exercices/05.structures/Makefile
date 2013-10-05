# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -g

47: 47.o
	$(CC) 47.o -o 47.bin
47.o: 47.cpp
	$(CC) $(CFLAGS) 47.cpp

clean:
	rm -rf *o *.bin

