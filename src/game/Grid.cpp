#include "Grid.hpp"
#include <iostream>

Grid::Grid(int x,const int y)
: sizeX(x), sizeY(y)
{
    this->underlyingGrid = new int*[x];

    for (int i = 0; i < x; ++i)
    {
        this->underlyingGrid[i] = new int[y];
    }
}

Grid::~Grid()
{
    for (size_t i = 0; i < this->sizeX; i++)
    {
        delete[] this->underlyingGrid[i];
    }
    delete[] this->underlyingGrid;
}

void Grid::clear()
{
    for (size_t  i = 0; i < this->sizeX; i++) {
        for (size_t  j = 0; j < this->sizeY; j++) {
            this->underlyingGrid[i][j] = -1;
        }
    }
}

void Grid::add(int x, int y, int id)
{
    this->underlyingGrid[x][y] = id;
}
void Grid::remove(int x, int y)
{
    this->underlyingGrid[x][y] = -1;
}

int Grid::getID(int x, int y) const
{
    return this->underlyingGrid[x][y];
}