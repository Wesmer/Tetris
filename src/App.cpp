#include "App.hpp"
#include <stdexcept>



App::App(int width, int height)
: window(width, height)
, renderMaster(&this->window)
{
    this->initSDL();
}

App::~App()
{
    this->quitSDL();
}

void App::run()
{
    bool running = true;

    //Event handler
    SDL_Event e;
    while (running)
    {
        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 )
        {
            switch (e.type)
            {
            case SDL_QUIT:
                running = false;
                break;
            case SDL_WINDOWEVENT:
                this->window.handleEvent(e);
                break;
            default:
                break;
            }
        }
        
        this->inputHandler.handleInput();
        this->renderMaster.render();
    }
}

void App::initSDL()
{
    if( SDL_Init(0) < 0 )
    {
        throw std::runtime_error("SDL could not initialize!");
    }
}

void App::quitSDL()
{
    SDL_Quit();
}