#ifndef BOARD_H
#define BOARD_H

class Board
{
    private:
        int size; // The default size is set to 8
        int grid[8][8]; // -1 means sunken, 1 means alive, 0 means not set yet
    public:
        Board();

        void setStatus(int x, int y, int st);
        int getStatus(int x, int y);
        int changeCellByHit(int x, int y);
        bool isRemainCell();
};

#endif