#include "Ship.h"
#include "Cell.h"

#include<vector>

using namespace std;

Ship::Ship() {
	size = 0;
}

Ship::Ship(int ort, int sz) {
	orient = ort;
	size = sz;
}

void Ship::setOrient(int ort) {
	orient = ort;
}

int Ship::getOrient() {
	return orient;
}

void Ship::setSize(int sz) {
	size = sz;
}
int Ship::getSize() {
	return size;
}

bool Ship::isAlive() {
	for (int i = 0; i < size; i++) {
		Cell* tmp;
		tmp = &(cells.at(i));
		if (tmp->getStatus() == -1) {
			return false;
		}
	}
	return true;
}
