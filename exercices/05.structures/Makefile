# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -g

50: 50.o
	$(CC) 50.o -o 50.bin
50.o: 50.cpp
	$(CC) $(CFLAGS) 50.cpp

49: 49.o
	$(CC) 49.o -o 49.bin
49.o: 49.cpp
	$(CC) $(CFLAGS) 49.cpp

48: 48.o
	$(CC) 48.o -o 48.bin
48.o: 48.cpp
	$(CC) $(CFLAGS) 48.cpp

47: 47.o
	$(CC) 47.o -o 47.bin
47.o: 47.cpp
	$(CC) $(CFLAGS) 47.cpp

clean:
	rm -rf *o *.bin

