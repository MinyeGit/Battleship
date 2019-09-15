#ifndef SHIP_H
#define SHIP_H

#include "Cell.h"
#include <vector>

using namespace std;
class Ship
{
  private:
    int orient; //0: xAxis, 1:yAxis
    int size;

  public:
    vector<Cell> cells;
    Ship();
    Ship(int orientation, int size);
    void setOrient(int orientation);
    int getOrient();
    void setSize(int size);
    int getSize();
    bool isAlive();
};

#endif
