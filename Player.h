#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Board.h"
#include "Ship.h"
#include "Cell.h"

using namespace std;

class Player
{
    private:
        int shipNumber;
            
    public:
        Player();
        Player(int n);
        Board myBoard;
        Player* opponet;
        vector<Ship> ships;
        vector<Cell> shotCells;

        void setShipNumber(int n);
        int getShipNumber();

        bool isAlive();
        void shot(int x, int y);// attack the other player
        int isHit(int x, int y); // if got hit from the other player return 1 else return -1

        void setBoard(); //set Board after loading ships;

        void FullDisplay(); // display the current player's board
        void HitBoardDisplay(); // display the other player's board
};

#endif