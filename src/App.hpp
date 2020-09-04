#ifndef D6597E9C_073A_4217_8F01_775B4F02468D
#define D6597E9C_073A_4217_8F01_775B4F02468D

#include <SDL2/SDL.h>

#include "Window.hpp"
#include "./Handler/SDL_RenderMaster.hpp"
#include "./Handler/InputHandler.hpp"

class App final
{
private:
    Window window;
    InputHandler inputHandler;
    SDL_RenderMaster renderMaster;

public:
    App(int witdht, int height);
    ~App();

    void run();
private:
    void initSDL();
    void quitSDL();    
};


#endif /* D6597E9C_073A_4217_8F01_775B4F02468D */
