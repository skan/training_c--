# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall

34: 34.o
	$(CC) 34.o -o 34.bin

34.o: 34.cpp
	$(CC) $(CFLAGS) 34.cpp

clean:
	rm -rf *o *.bin

