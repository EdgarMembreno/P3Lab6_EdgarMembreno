#include "Tablero.h"
#include <iostream>
using namespace std;

Tablero::Tablero(int dificultad) {
	this -> size = 0;
	switch(dificultad) {
		case 1: {
			this ->size = 8;
			this -> tablero = new CasillasBuscaMinas**[this ->size];
			for (int i = 0; i < this ->size; ++i) {
				this-> tablero[i] = new CasillasBuscaMinas*[this ->size];

			}
			for(int i = 0; i < this ->size; i++) {
				for(int j = 0; j<this ->size; j++) {
					this -> tablero[i][j] = new CasillasBuscaMinas(false);
				}
			}
			int cantBombas = 0;
			while(cantBombas <= 12) {
				int fila = rand() % this ->size;
				int colum = rand() %this ->size;
				if(!this -> tablero[fila][colum] -> getEsBomba()) {
					this -> tablero[fila][colum] -> setBomba(true);
					cantBombas++;

				}
			}
			break;
		}
		case 2: {
			this ->size = 10;
			this -> tablero = new CasillasBuscaMinas**[this ->size];
			for (int i = 0; i < this ->size; ++i) {
				this-> tablero[i] = new CasillasBuscaMinas*[this ->size];

			}
			for(int i = 0; i < this ->size; i++) {
				for(int j = 0; j<this ->size; j++) {
					this -> tablero[i][j] = new CasillasBuscaMinas(false);
				}
			}
			int cantBombas = 0;
			while(cantBombas <= 25) {
				int fila = rand() % this ->size;
				int colum = rand() %this ->size;
				if(!this -> tablero[fila][colum] -> getEsBomba()) {
					this -> tablero[fila][colum] -> setBomba(true);
					cantBombas++;

				} else {

				}
			}

			break;
		}
		case 3: {
			this ->size = 12;
			this -> tablero = new CasillasBuscaMinas**[this ->size];
			for (int i = 0; i < size; ++i) {
				this-> tablero[i] = new CasillasBuscaMinas*[this ->size];

			}
			for(int i = 0; i < this ->size; i++) {
				for(int j = 0; j<this ->size; j++) {
					this -> tablero[i][j] = new CasillasBuscaMinas(false);
				}
			}
			int cantBombas = 0;
			while(cantBombas <= 43) {
				int fila = rand() % this ->size;
				int colum = rand() %this ->size;
				if(!this -> tablero[fila][colum] -> getEsBomba()) {
					this -> tablero[fila][colum] -> setBomba(true);
					cantBombas++;

				} else {

				}
			}

			break;
		}

	}
}
void Tablero:: marcarCasillas(int fila,int columna) {
	bool flag = false;
	cout << "Ingrese la fila: ";
	cin >> fila;
	cout<< endl;
	cout << "Ingrese la Columna: ";
	cin >> columna;
	cout<< endl;
	for(int i = 0; i < this ->size; i++) {
		for(int j = 0; j<this ->size; j++) {
			this -> tablero[fila][columna] = 0;
		}


	}
}
bool Tablero:: destaparCasillas(int fila,int columna) {
	bool flag = false;
	cout << "Ingrese la fila ";
	cin >> fila;
	cout<< endl;
	cout << "Ingrese la Columna: ";
	cin >> columna;
	cout<< endl;
	for(int i = 0; i < this ->size; i++) {
		for(int j = 0; j<this ->size; j++) {
			if(	this -> tablero[fila+1][columna]) { //bomba{
				return tablero[fila+1][columna] = 0;
			} else if(this -> tablero[fila][columna+1]) {
				return tablero[fila][columna] = 0;
			} else if(this -> tablero[fila-1][columna]) {
				return tablero[fila+1][columna] = 0;
			} else if(this -> tablero[fila][columna-1]) {
				return tablero[fila+1][columna] = 0;
			} else {
				flag = true;
			}
		}
	}
	return flag;
}

void Tablero::imprimirBombas() {
	for(int i=0; i < this ->size; i++) {
		for(int j = 0; j <this ->size; j++) {
			cout<<tablero[i][j]<<" ";
		}
		cout<<endl;
	}
}

Tablero::~Tablero() {
}