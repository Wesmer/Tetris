#include "Window.hpp"
#include <stdexcept>
#include <sstream>

Window::Window(int width, int height)
: width(width)
, height(height)
, window(nullptr)
, surface(nullptr)
, mMouseFocus(false)
, mKeyboardFocus(false)
, mFullScreen(false)
, mMinimized(false)
{
    if(SDL_InitSubSystem(SDL_INIT_VIDEO) == 0)
    {
        //Create window
        this->window = SDL_CreateWindow( 
            "Tetris", 
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
            width, height, 
            SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE 
            );
        
        if( this->window != nullptr )
        {
            //Get window surface
            this->surface = SDL_GetWindowSurface( this->window );

            if (this->surface != nullptr)
            {
                return;
            }          
        }
    }

    throw std::runtime_error("Window could not be created!"); 
}

Window::~Window()
{
    if (this->surface != nullptr)
    {
        SDL_FreeSurface(this->surface);
    }

    if (this->window != nullptr)
    {
        SDL_DestroyWindow( this->window);
    } 

    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

void Window::handleEvent(SDL_Event& e)
{
    //Caption update flag
    bool updateCaption = false;

    switch( e.window.event )
    {
        //Get new dimensions and repaint on window size change
        case SDL_WINDOWEVENT_SIZE_CHANGED:
        width = e.window.data1;
        height = e.window.data2;
        break;

        //Repaint on exposure
        case SDL_WINDOWEVENT_EXPOSED:

        break;
        //Mouse entered window
        case SDL_WINDOWEVENT_ENTER:
        mMouseFocus = true;
        updateCaption = true;
        break;
            
        //Mouse left window
        case SDL_WINDOWEVENT_LEAVE:
        mMouseFocus = false;
        updateCaption = true;
        break;

        //Window has keyboard focus
        case SDL_WINDOWEVENT_FOCUS_GAINED:
        mKeyboardFocus = true;
        updateCaption = true;
        break;

        //Window lost keyboard focus
        case SDL_WINDOWEVENT_FOCUS_LOST:
        mKeyboardFocus = false;
        updateCaption = true;
        break;
        //Window minimized
        case SDL_WINDOWEVENT_MINIMIZED:
        mMinimized = true;
        break;

        //Window maxized
        case SDL_WINDOWEVENT_MAXIMIZED:
        mMinimized = false;
        break;
            
        //Window restored
        case SDL_WINDOWEVENT_RESTORED:
         mMinimized = false;
        break;
    }

    if( updateCaption )
    {
        std::stringstream caption;
        caption << "SDL Tutorial - MouseFocus:" << ( ( mMouseFocus ) ? "On" : "Off" ) << " KeyboardFocus:" << ( ( mKeyboardFocus ) ? "On" : "Off" );
        SDL_SetWindowTitle( window, caption.str().c_str() );
    }
}

SDL_Renderer* Window::createRenderer()
{
    return SDL_CreateRenderer( this->window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
}

void Window::updateSurface() const
{
    SDL_UpdateWindowSurface( this->window );
}

int Window::getWidth() const noexcept
{
    return width;
}

int Window::getHeight()const noexcept
{
    return height;
}

bool Window::hasMouseFocus() const noexcept
{
    return mMouseFocus;
}

bool Window::hasKeyboardFocus() const noexcept
{
    return mKeyboardFocus;
}

bool Window::isMinimized() const noexcept
{
    return mMinimized;
}
