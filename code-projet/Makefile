# Projet intégrateur "Base de films"
# XMS2IE731 --- Algorithmique et Programmation niveau 2
# F. Goualard
# Université de Nantes, 2024/2025

# Appels possibles:
# make          : compile tout le projet
# make all      : compile tout le projet
# make example  : compile seulement l'exemple 'loaddb_example'

.PHONY: all clean

CXX = g++

EXE = main
EXAMPLE = loaddb_example
OBJECTS = movie.o actor.o moviedb.o tui.o

CXXFLAGS = -Wall -std=c++11 -I.

all: $(EXE)

example: $(EXAMPLE)

$(EXE): $(OBJECTS)

$(OBJECTS): %.o: %.cpp %.hpp

clean:
	-rm $(EXE) $(EXAMPLE) *.o
