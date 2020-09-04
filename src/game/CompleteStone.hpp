#ifndef D179FD8E_84C6_4CB1_8DB8_E9E49AFE024E
#define D179FD8E_84C6_4CB1_8DB8_E9E49AFE024E

#include <vector>
#include "Square.hpp"
#include "../Rendering/SDL_Renderable.hpp"
#include "updateDataStruct.hpp"
#include "StoneDefinitions.hpp"

class CompleteStone : public SDL_Renderable
{
private:
    const unsigned int id;

    Component component;
    std::vector<Square> underlyingSquares;

    Rotation rotation;

public:
    CompleteStone(unsigned int id, Component component);
    ~CompleteStone() = default;

    void rotate90();

    virtual void render(SDL_Renderer* renderer) const override;

    void update(UpdateData& data);

    Component getComponent() const;
    unsigned int getID();

};

#endif /* D179FD8E_84C6_4CB1_8DB8_E9E49AFE024E */
