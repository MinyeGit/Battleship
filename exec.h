#ifndef EXEC_H
#define EXEC_H
#include "Map.h"
#include <iostream>

class exec
{
  private:
    Map* playerOneMap;
    Map* playerTwoMap;
  public:
    void run();
};

#endif
