#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();


int main() {
	menu();


	//BuscaMinas* buscaMinas = new BuscaMinas();

	return 0;
}
int menu() {
	int opcion = 0;
	cout << "Escoja la dificultad" << endl;
	cout << "1) facil " << endl;
	cout << "2) normal " << endl;
	cout << "3) dificil" << endl;
	cout << "4) Salir del programa" << endl;
	cout << "Ingrese su opcion: ";
	cin >> opcion;
	return opcion;
}
