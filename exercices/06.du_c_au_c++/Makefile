# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -g

56: 56.o
	$(CC) 56.o -o 56.bin
56.o: 56.cpp
	$(CC) $(CFLAGS) 56.cpp

clean:
	rm -rf *o *.bin

