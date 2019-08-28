#ifndef DICE_H_
#define DICE_H_
#include <string>
#include "wallet.h"
class Dice {
	private:
		int number;
	public:
        void rollDice();
        int getRoll();
};
#endif