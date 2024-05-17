#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include "Soldado.h"


using namespace std;

void Crear_Soldados(Soldado* soldado1, Soldado* soldado2) {
	soldado1 -> generarSoldadoAleatorio();
	soldado2 -> generarSoldadoAleatorio();
	cout << endl<<"Soldados Generados Correctamente"<<endl;
}
void Listar_Soldados(Soldado* soldado1, Soldado* soldado2) {
	cout << endl<< "Soldado 1: "<< endl;
	soldado1 -> Listar();
	cout << endl << "Soldado 2: " << endl;
	soldado2 ->Listar();
	cout << endl;
}
void Batalla_de_Soldados() {

}
void menu() {
	setlocale(LC_ALL, "spanish");
	int opcion = 0;
	Soldado* soldado1 = new Soldado();
	Soldado* soldado2 = new Soldado();
	do {
		cout << "--- Menú ---" << endl << "1.-Crear Soldados" << endl << "2.-Listar Soldados" <<endl<< "3.-Batalla de Soldados" << endl << "3.-Salir" << endl;
		cout << "ingrese la acción que desea realizar: ";
		cin >> opcion;
		switch (opcion) {
			case 1: {
				cout << endl << "--- Crear Soldados ---"<< endl;
				Crear_Soldados(soldado1, soldado2);
			}break;
			case 2: {
				cout << endl << "--- Listar Soldados ---"<< endl;
				Listar_Soldados(soldado1, soldado2);
			}break;
			case 3: {
				cout << endl << "--- Batalla de Soldados ---" << endl;
				Batalla_de_Soldados();
			}break;
			case 4:break;
		}
	}while (opcion !=3);
}

int main() {
	menu();
	return 0;
}