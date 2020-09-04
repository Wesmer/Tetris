#ifndef A2ECB64C_D563_4ADD_B977_274FD5E1F646
#define A2ECB64C_D563_4ADD_B977_274FD5E1F646

class Grid
{
private:
    int sizeX;
    int sizeY;

    int** underlyingGrid;

public:
    Grid(int sizeX, int sizeY);
    ~Grid();

    void clear();
    void add(int x, int y, int id);
    void remove(int x, int y);
    int getID(int x, int y) const;
};

#endif /* A2ECB64C_D563_4ADD_B977_274FD5E1F646 */
