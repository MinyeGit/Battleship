#include "Map.h"
#include "Ship.h"
#include <iostream>

Map::Map(int shipNum)
{
  //based on ship implemenation, perhaps ships could be placed in this function.
}

bool Map::validPos(std::string pos)
{
  bool isValid = true;
  //check length is 2, if not then set bool to false.
  //check first coordinate, if not in range set bool to false.
  //check second coordinate, if not in range set bool to false.
  return(isValid);
}

void Map::printEnemyShotMap()
{
    //cout with grid format but if a ship icon is seen, change to empty water. For opponent.
}

void Map::printCurrentMap()
{
  //cout with grid format untouched. For player
}

void Map::incomingShot(std::string pos)
{
  //Fired from opponent to players board. position should already have been checked, so just go through steps to place shot.
}

bool gameOver()
{
  bool isOver = true;
  //checks if all ships are sunk.
  return(isOver);
}

Map::~Map()
{

}
