#include "BuscaMinas.h"
#include "Tablero.h"



BuscaMinas::BuscaMinas() {
	int opcion = 1;
	this -> tablero = new Tablero(opcion);
	this -> tablero -> imprimirBombas();
	
	





}

BuscaMinas::~BuscaMinas() {
}