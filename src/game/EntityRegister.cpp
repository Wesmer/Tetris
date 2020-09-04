#include "EntityRegister.hpp"
#include "../util/vector.hpp"
#include "Events.hpp"


EntityRegister::~EntityRegister()
{
    for (size_t i = 0; i < this->allStones.size(); i++)
    {
        delete this->allStones[i];
    }  
}

int EntityRegister::createStone(Component com)
{
    static unsigned int id = 0;

    CompleteStone* stone = new CompleteStone(id, com );

    this->allStones.push_back(stone);
    this->pushEvent(stone);
}
CompleteStone* EntityRegister::getStone(int id)
{
    
}
void EntityRegister::removeStone(int id)
{
    
}

void EntityRegister::pushEvent(CompleteStone* stone )
{
    SDL_Event event;

    event.type = SDL_USEREVENT;
    event.user.code = (int32_t) Events::CREATE_STONE;
    event.user.data1 = stone;
    event.user.data2 = 0;
    SDL_PushEvent(&event);
}