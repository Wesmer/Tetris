#include "CompleteStone.hpp"

CompleteStone::CompleteStone(unsigned int id, Component com)
:id(id), component(com)
{

}

void CompleteStone::render(SDL_Renderer* renderer) const
{
    for (size_t i = 0; i < this->underlyingSquares.size(); i++)
    {
        this->underlyingSquares[i].render(renderer);
    }
    
}

void CompleteStone::update(UpdateData& data)
{
    
}

void CompleteStone::rotate90()
{
    for (size_t i = 0; i < this->underlyingSquares.size(); i++)
    {
        this->underlyingSquares[i].rotate90();
    }
    
}

Component CompleteStone::getComponent() const
{
    return this->component;
}
unsigned int CompleteStone::getID()
{
    return this->id;
}