# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall

all: first_tp

first_tp: first_tp.o
	$(CC) first_tp.cpp -o first_tp

first_tp.o: first_tp.cpp
	$(CC) $(CFLAGS) first_tp.cpp

clean:
	rm -rf *o first_tp

