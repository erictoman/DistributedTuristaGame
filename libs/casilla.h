#ifndef CASILLA_H_
#define CASILLA_H_
#include <string>
#include "wallet.h"
class Casilla {
	private:
		std::string name;
        int precio;
        int precioCasa;
        int precioHotel;
        int numCasas;
        int numHoteles;
        std::string dueño;
	public:
		Casilla();
};
#endif