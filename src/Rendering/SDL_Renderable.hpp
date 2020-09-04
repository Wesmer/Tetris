#ifndef E811DF2F_56BD_49B2_B842_4C85B182E3C4
#define E811DF2F_56BD_49B2_B842_4C85B182E3C4

#include <SDL2/SDL.h>

class SDL_Renderable 
{
private:
    /* data */
public:
    SDL_Renderable() = default;
    ~SDL_Renderable() = default;

    virtual void render(SDL_Renderer* renderer) const  = 0;
};
    


#endif /* E811DF2F_56BD_49B2_B842_4C85B182E3C4 */
