#ifndef CELL_H
#define CELL_H

class Cell
{
    private:
        int x;
        int y;
        int status; //-1 indicates sunken, i indicates still alive, 0 indicates not set yet
    public:
        Cell(int xPos, int yPos, int stat);
        Cell(int xPos, int yPos);
        Cell();
        int getX();
        int getY();
        void setStatus(int st);
        int getStatus();
};

#endif