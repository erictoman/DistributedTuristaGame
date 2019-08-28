#include "dice.h"
using namespace std;
void Dice::rollDice(){
    number=roll();
}

int Dice::getRoll(){
    return number;
}

int roll(){
    int randomNumber = rand()>>4;
    randomNumber = randomNumber % 12 + 2;
    return randomNumber;
}