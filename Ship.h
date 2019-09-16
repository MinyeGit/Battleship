#ifndef SHIP_H
#define SHIP_H

#include "Cell.h"
#include <vector>

using namespace std;
class Ship
{
private:
	int orient;//0: xAxis, 1:yAxis
	int size;

public:
	vector<Cell> cells;
	Ship();
	Ship(int ort, int sz);
	void setOrient(int ort);
	int getOrient();
	void setSize(int sz);
	int getSize();
	bool isAlive();
};

#endif
