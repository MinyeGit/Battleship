Battleship: BattleShip.o Cell.o Ship.o Board.o Player.o
	g++ -std=c++11 -g -Wall BattleShip.o Cell.o Ship.o Board.o Player.o -o BattleShip

BattleShip.o: BattleShip.cpp Ship.h Player.h Cell.h Board.h
	g++ -std=c++11 -g -Wall -c BattleShip.cpp

Ship.o: Cell.h Cell.cpp
	g++ -std=c++11 -g -Wall -c Ship.cpp

Player.o: Board.h Board.cpp Ship.h Ship.cpp Cell.h Cell.cpp
	g++ -std=c++11 -g -Wall -c Player.cpp

Board.o: global.h
	g++ -std=c++11 -g -Wall -c Board.cpp

Cell.o: global.h
	g++ -std=c++11 -g -Wall -c Cell.cpp

clean:
	rm *.o BattleShip