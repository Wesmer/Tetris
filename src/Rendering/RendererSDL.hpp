#ifndef AD0E74B2_A719_4679_B293_AD538081A676
#define AD0E74B2_A719_4679_B293_AD538081A676

#include <SDL2/SDL.h>
#include <vector>

#include "SDL_Renderable.hpp"
    
class RendererSDL
{
private:
    SDL_Renderer* renderer;
    std::vector<SDL_Renderable*> renderalbles;

public:
    RendererSDL(SDL_Renderer* renderer);
    ~RendererSDL();

    void render() const;
    void addData(SDL_Renderable* renderable);
    void removeData();
};


#endif /* AD0E74B2_A719_4679_B293_AD538081A676 */
