#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <random>
#include "Soldado.h"
using namespace std;

int rand();

void Crear_Soldados(Soldado* soldado1, Soldado* soldado2) {
	soldado1 -> generarSoldadoAleatorio();
	soldado2 -> generarSoldadoAleatorio();
	cout << endl<<"Soldados Generados Correctamente"<<endl<<endl;
}

void Listar_Soldados(Soldado* soldado1, Soldado* soldado2) {
	cout << endl<< "Soldado 1: "<< endl;
	soldado1 -> Listar();
	cout << endl << "Soldado 2: " << endl;
	soldado2 ->Listar();
	cout << endl;
}
void Batalla_de_Soldados(Soldado* soldado1, Soldado* soldado2) {
	int turno = 0;
	if (soldado1 ->getsalud() != 0 || soldado2->getsalud() != 0){
		while (true) {
			soldado1->atacar(soldado2);
			soldado2->atacar(soldado1);
			if (soldado1->getsalud() == 0 || soldado2->getsalud() == 0) {
				break;
			}
		}
	}else{
		cout << endl << "vuelva a generar esta pelea ya se realizo" << endl;
	}
	

}
void menu() {
	setlocale(LC_ALL, "spanish");
	int opcion = 0;
	Soldado* soldado1 = new Soldado();
	soldado1->setTurno(1);
	Soldado* soldado2 = new Soldado();
	soldado2->setTurno(2);
	do {
		cout << "--- Men� ---" << endl << "1.-Crear Soldados" << endl << "2.-Listar Soldados" <<endl<< "3.-Batalla de Soldados" << endl << "4.-Salir" << endl;
		cout << "ingrese la acci�n que desea realizar: ";
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
				Batalla_de_Soldados(soldado1, soldado2);
			}break;
			case 4:break;
			default:
				cout << "Ingrese un valor valido"<<endl;
		}
	}while (opcion !=4);
}

int main() {
	srand(1);
	menu();
	return 0;
}