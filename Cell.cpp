#include "Cell.h"

#include "global.h"

Cell::Cell(int xPos, int yPos, int st) {
	x = xPos;
	y = yPos;
	status = st;
}

Cell::Cell(int xPos, int yPos) {
	x = xPos;
	y = yPos;
	status = CELL_ALIVE;
}

int Cell::getX() {
	return x;
}

int Cell::getY() {
	return y;
}

void Cell::setStatus(int st) {
	status = st;
}

int Cell::getStatus() {
	return status;
}