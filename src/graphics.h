#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>
#include <map>

struct SDL_Window;
struct SDL_Renderer;

class Graphics {

    public:
        Graphics();
        ~Graphics();

        /*
            * Loads an image from a file and returns a pointer to it.
            * The image is loaded only once.
            * @param filePath The path to the image file.
        */
        SDL_Surface* loadImage(const std::string &filePath);
        
        
        //Draws a texture to the screen.
        void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);

        // Renders everything to the screen
        void flip();

        // Clears the screen
        void clear();

        // Returns the renderer
        SDL_Renderer* getRenderer() const;
        
    private:
        SDL_Window* _window;
        SDL_Renderer* _renderer;

        std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif