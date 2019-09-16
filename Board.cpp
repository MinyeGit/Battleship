#include "Board.h"
#include "global.h"

Board::Board() {
	size = 8;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			grid[i][j] = CELL_NONE;
		}
	}
}

void Board::setStatus(int x, int y, int st) {
	grid[x][y] = st;
}

int Board::getStatus(int x, int y) {
	return grid[x][y];
}

int Board::changeCellByHit(int x, int y) {
	if (grid[x][y] == 1) {
		grid[x][y] = -1;
		return 1;//if is hit 
	}
	return -1;// if is not hit
}

bool Board::isRemainCell() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (grid[i][j] == CELL_ALIVE) return true;
		}
	}

	return false;
}