#ifndef C766C25B_979B_4FFF_A86B_26069717345E
#define C766C25B_979B_4FFF_A86B_26069717345E

#include "../Rendering/RendererSDL.hpp"
#include "../Window.hpp"

class SDL_RenderMaster
{
private:
    Window* window;
    SDL_Renderer* sdl_renderer;
    RendererSDL blockRenderer;

public:
    SDL_RenderMaster(Window* window);
    ~SDL_RenderMaster();

    void render() const;
};

#endif /* C766C25B_979B_4FFF_A86B_26069717345E */
