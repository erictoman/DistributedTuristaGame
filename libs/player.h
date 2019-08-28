#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include "wallet.h"
class Player {
	private:
		std::string name;
        Wallet wallet;
	public:
		Player();
        int rollDice();
};
#endif