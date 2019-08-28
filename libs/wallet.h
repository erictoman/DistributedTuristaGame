#ifndef WALLET_H_
#define WALLET_H_

class Wallet {
	private:
		int saldo;

	public:
		Wallet();
		int obtenerSaldo();
        void agregarSaldo(int cantidad);
        void quitarSaldo(int cantidad);
        bool suficiente(int cantidad);
};
#endif