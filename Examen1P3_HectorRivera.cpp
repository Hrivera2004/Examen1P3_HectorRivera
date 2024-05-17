#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include "Soldado.h"


using namespace std;

void ejercicio1() {

}
void ejercicio2() {
	 
}
void ejercicio3() {

}
void menu() {
	
	setlocale(LC_ALL, "spanish");
	int opcion = 0;
	do {
		cout << "--- Menú ---" << endl << "1.-Crear Soldados" << endl << "2.-Listar Soldados" << "Batalla de Soldados" << endl << "3.-Salir" << endl;
		cout << "ingrese la acción que desea realizar: ";
		cin >> opcion;
		switch (opcion) {
			case 1: {
				cout << endl << "--- Menu ---"<< endl;
				ejercicio1();
			}break;
			case 2: {
				cout << endl << "--- Menu ---"<< endl;
				ejercicio2();
			}break;
			case 3: {
				cout << endl << "--- Menu ---" << endl;
				ejercicio3();
			}break;
			case 4:break;
		}
	}while (opcion !=3);
}

int main() {
	menu();
	return 0;
}