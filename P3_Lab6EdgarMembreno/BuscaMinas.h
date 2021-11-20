#ifndef BUSCAMINAS_H
#define BUSCAMINAS_H
#include "Tablero.h"
class BuscaMinas {
	public:
		BuscaMinas();
		~BuscaMinas();
		void jugar();
	private:
		Tablero*tablero;
};

#endif