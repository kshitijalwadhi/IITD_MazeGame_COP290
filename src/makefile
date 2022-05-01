CC = g++ -std=c++11

COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net

GAME = main.cpp

AUX = graphics.cpp input.cpp game.cpp sprite.cpp

GAME_NAME = mygame

all: $(GAME) $(AUX)
	$(CC) $(GAME) $(AUX) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(GAME_NAME)

clean:
	rm -f *.o 