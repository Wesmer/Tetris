#include "SDL_RenderMaster.hpp"

SDL_RenderMaster::SDL_RenderMaster(Window* window)
: window(window)
, sdl_renderer(this->window->createRenderer())
, blockRenderer(this->sdl_renderer)
{
    SDL_SetRenderDrawColor(this->sdl_renderer, 25, 25, 25, 0);
}

SDL_RenderMaster::~SDL_RenderMaster()
{
}

void SDL_RenderMaster::render() const
{
    SDL_RenderClear(this->sdl_renderer);

    this->blockRenderer.render();

    SDL_RenderPresent(this->sdl_renderer);
}