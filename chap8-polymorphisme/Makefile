CC=g++
CFLAGS=-c -g -Wall
LDFLAGS=
SOURCES=main.cpp Vehicule.cpp Voiture.cpp Moto.cpp Camion.cpp Garage.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=out

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)

