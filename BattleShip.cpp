#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

#include "global.h"

#include "Cell.h"
#include "Ship.h"
#include "Board.h"
#include "Player.h"

using namespace std;

int main()
{
	int shipNumber;
	cout << "Please Input the Number of Ships(1-5):";
	cin >> shipNumber;

	Player player1(shipNumber);
	Player player2(shipNumber);

	player1.opponet = &(player2);
	player2.opponet = &(player1);

	int shipOrientation;
	char xAxisChar;
	int  yPos;

	cout << "Input the ships of Player1!" << endl;

	for (int i = 0; i < shipNumber; i++) {
		cout << "Input " << 1 << "x" << i + 1 << " Ship:" << endl;
		cout << "Input the Orientation of the Ship(0,1):";
		cin >> shipOrientation;
		Ship newShip(shipOrientation, i + 1);

		cout << "Input the position of ship!(Ex:A1A2A3 B0C0):";
		for (int j = 0; j < shipNumber; j++) {
			cin >> xAxisChar >> yPos;
			Cell tmpCell(int(xAxisChar) - 65, yPos);
			newShip.cells.push_back(tmpCell);
		}
		player1.ships.push_back(newShip);
	}

	player1.setBoard();

	cout << "Input the ships of Player2!" << endl;

	for (int i = 0; i < shipNumber; i++) {
		cout << "Input " << 1 << "x" << i + 1 << " Ship:" << endl;
		cout << "Input the Orientation of the Ship(0,1):";
		cin >> shipOrientation;
		Ship newShip(shipOrientation, i + 1);

		cout << "Input the position of ship!(Ex:A1A2A3 B0C0):";
		for (int j = 0; j < shipNumber; j++) {
			cin >> xAxisChar >> yPos;
			Cell tmpCell(int(xAxisChar) - 65, yPos);
			newShip.cells.push_back(tmpCell);
		}
		player2.ships.push_back(newShip);
	}

	player2.setBoard();

	cout << "#############" << endl;
	cout << "Game Start" << endl;
	cout << "############" << endl;

	while (1) {
		cout << "Player1 Turn: Input your target(Ex:A1)" << endl;
		cin >> xAxisChar >> yPos;
		player1.shot(int(xAxisChar) - 65, yPos);
		cout << "Player1 Current Status:" << endl;
		player1.FullDisplay();
		cout << "Player1 Shot history:" << endl;
		player1.HitBoardDisplay();

		if (!player2.isAlive()) {
			cout << "********************" << endl;
			cout << "Player1 won!" << endl;
			cout << "********************" << endl;
			break;
		}

		cout << "----------------------" << endl;

		cout << "Player2 Turn: Input your target(Ex:A1)" << endl;
		cin >> xAxisChar >> yPos;
		player2.shot(int(xAxisChar) - 65, yPos);
		cout << "Player2 Current Status:" << endl;
		player1.FullDisplay();
		cout << "Player2 Shot history:" << endl;
		player2.HitBoardDisplay();

		if (!player1.isAlive()) {
			cout << "********************" << endl;
			cout << "Player2 won!" << endl;
			cout << "********************" << endl;
			break;
		}

		cout << "----------------------" << endl;
	}

	cout << "Game Over" << endl;
	system("pause");
}