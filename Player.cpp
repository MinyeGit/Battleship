#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
Player::Player() {
	shipNumber = 1;
}

Player::Player(int n) {
	shipNumber = n;
}

void Player::setShipNumber(int n) {
	shipNumber = n;
}

int Player::getShipNumber() {
	return shipNumber;
}

bool Player::isAlive() {
	return myBoard.isRemainCell();
}
void Player::shot(int x, int y) {
	int hit = opponet->isHit(x, y);
	Cell tmp(x, y);
	shotCells.push_back(tmp);
}

int Player::isHit(int x, int y) {
	return myBoard.changeCellByHit(x, y);
}

void Player::setBoard() {
	for (int i = 0; i < shipNumber; i++) {
		Ship* tmp;
		tmp = &(ships.at(i));
		for (int j = 0; j < tmp->getSize(); j++) {
			myBoard.setStatus(tmp->cells.at(j).getX(), tmp->cells.at(j).getY(), 1); // ship is in the cell
		}
	}
}

void Player::FullDisplay() {
	for (int i = 0; i < shipNumber; i++) {
		Ship* tmp;
		tmp = &(ships.at(i));
		for (int j = 0; j < tmp->getSize(); j++) {
			int stat = myBoard.getStatus(tmp->cells.at(j).getX(), tmp->cells.at(j).getY());
			cout << char(tmp->cells.at(j).getX() + 65) << tmp->cells.at(j).getY();
			if (stat == 1) cout << "(O)";
			else if (stat == -1) cout << "(X)";
		}
		cout << endl;
	}
}

void Player::HitBoardDisplay() {
	int len = shotCells.size();
	for (int i = 0; i < len; i++) {
		int x = shotCells.at(i).getX();
		int y = shotCells.at(i).getY();
		int stat = opponet->myBoard.getStatus(x, y);
		cout << char(x + 65) << y;
		if (stat == -1) cout << "(O)" << endl;
		else cout << "(X)" << endl;
	}
}
