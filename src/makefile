CC = g++ -std=c++11

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2

GAME = main.cpp

AUX = graphics.cpp input.cpp game.cpp

GAME_NAME = mygame

all: $(GAME) $(AUX)
	$(CC) $(GAME) $(AUX) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(GAME_NAME)

clean:
	rm -f *.o 