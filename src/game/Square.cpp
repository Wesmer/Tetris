#include "Square.hpp"

Square::Square(int x, int y, int pos)
: x(x)
, y(y)
, relativePosition(pos)
{

}

void Square::lower()
{
    this->y--;
}

void Square::moveLeft()
{
    this->x--;
}
void Square::moveRight()
{
    this->x++;
}

int Square::getX() const
{
    return this->x;
}
int Square::getY() const
{
    return this->y;
}

void Square::setX(int x)
{
    this->x = x;
}
void Square::setY(int y)
{
    this->y = y;
}

void Square::rotate90()
{
    int oldX = x;
    int oldY = y;

    x = 1 - (oldY - (this->relativePosition - 2));
    y = oldX;
}

void Square::render(SDL_Renderer* renderer) const
{
    
}