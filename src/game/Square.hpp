#ifndef C15F3EC3_DF18_44D7_84A6_FB85DBBB7E4B
#define C15F3EC3_DF18_44D7_84A6_FB85DBBB7E4B

#include "../Rendering/SDL_Renderable.hpp"

class Square : public SDL_Renderable
{
private:
    int x;
    int y;

    int relativePosition;

public:
    Square(int x, int y, int relativePosition);
    ~Square() = default;
    
    virtual void render(SDL_Renderer* renderer) const  override;

    void rotate90();

    void lower();
    void moveLeft();
    void moveRight();

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

};

#endif /* C15F3EC3_DF18_44D7_84A6_FB85DBBB7E4B */
