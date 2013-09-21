CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=fichiers.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=fichiers

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


