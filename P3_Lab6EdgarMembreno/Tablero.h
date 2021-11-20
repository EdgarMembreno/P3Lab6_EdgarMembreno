#ifndef TABLERO_H
#define TABLERO_H
#include "CasillasBuscaMinas.h"
#include <stdlib.h>
#include <time.h>

using namespace std;


class Tablero {
	public:
		Tablero(int);
		~Tablero();
		bool destaparCasillas(int,int);
		int calcularBombas(int,int);
		void marcarCasillas(int,int);
		void imprimirBombas();
		void llenarMatriz(int, int);
		


	private:
		CasillasBuscaMinas*** tablero;
		int size;

};

#endif