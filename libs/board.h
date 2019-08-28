#ifndef BOARD_H_
#define BOARD_H_
#include <vector>
#include "player.h"
#include "casilla.h"
using namespace std;
class Board {
	private:
		vector<Player> players;
        vector<int,Casilla> casillas;
	public:
		Board();
        void addPlayer();
        void removePlayer();
};
#endif