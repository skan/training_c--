# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -g

44: 44.o
	$(CC) 44.o -o 44.bin
44.o: 44.cpp
	$(CC) $(CFLAGS) 44.cpp

34: 34.o
	$(CC) 34.o -o 34.bin
34.o: 34.cpp
	$(CC) $(CFLAGS) 34.cpp

35: 35.o
	$(CC) 35.o -o 35.bin
35.o: 35.cpp
	$(CC) $(CFLAGS) 35.cpp

38: 38.o
	$(CC) 38.o -o 38.bin
38.o: 38.cpp
	$(CC) $(CFLAGS) 38.cpp

42: 42.o
	$(CC) 42.o -o 42.bin
42.o: 42.cpp
	$(CC) $(CFLAGS) 42.cpp


clean:
	rm -rf *o *.bin

