#ifndef DF7A6BD9_EA09_46C3_8DCE_E0CE1774E235
#define DF7A6BD9_EA09_46C3_8DCE_E0CE1774E235

#include <SDL2/SDL.h>

class Window
{
private:

    //Window dimensions
    int width;
    int height;

    SDL_Window* window = nullptr;   
    SDL_Surface* surface = nullptr;

    //Window focus
    bool mMouseFocus;
    bool mKeyboardFocus;
    bool mFullScreen;
    bool mMinimized;

public:
    Window(int width, int height);
    ~Window();

    void handleEvent(SDL_Event& e);
    SDL_Renderer* createRenderer();
    void updateSurface() const;

    int getWidth() const noexcept;
    int getHeight() const noexcept;
    bool hasMouseFocus() const noexcept;
    bool hasKeyboardFocus() const noexcept;
    bool isMinimized() const noexcept;

};


#endif /* DF7A6BD9_EA09_46C3_8DCE_E0CE1774E235 */
