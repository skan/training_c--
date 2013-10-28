CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
SOURCES=main.cpp point.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=out

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)

