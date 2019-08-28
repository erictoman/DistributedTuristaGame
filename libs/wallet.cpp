using namespace std;
#include "wallet.h"
Wallet::Wallet() {}

void Wallet::agregarSaldo(int cantidad){
    saldo=+cantidad;
}
void Wallet::quitarSaldo(int cantidad){
    saldo=-cantidad;
}
int Wallet::obtenerSaldo(){
    return saldo;
}

bool Wallet::suficiente(int cantidad){
    if(saldo>=cantidad){
        return true;
    }
    return false;
}