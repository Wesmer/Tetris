#include "RendererSDL.hpp"

    
RendererSDL::RendererSDL(SDL_Renderer* renderer)
:renderer(renderer)
{
}

RendererSDL::~RendererSDL()
{
    SDL_DestroyRenderer( this->renderer );
}


void RendererSDL::render() const
{
    for (size_t i = 0; i < this->renderalbles.size(); i++)
    {
        this->renderalbles[i]->render(this->renderer);
    }
    
}
void RendererSDL::addData(SDL_Renderable* r)
{
    this->renderalbles.push_back(r);
}
void RendererSDL::removeData()
{

}
