CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=fonctions.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=fonctions

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


