#include "Soldado.h"
#include <random>
#include <iostream>
#include <stdlib.h>
#pragma once
using namespace std;

Soldado::Soldado() {
	setlocale(LC_ALL, "spanish");
}
Soldado::~Soldado() {
}

void Soldado::atacar(Soldado* soldado_recibiente,int* ganador) {
	double ataque1 = 0;
	double ataque2 = 0;
	double ataque_total = 0;
	if (getsalud() > 0) {
		switch (tipo_soldado) {
		case 1: {
			ataque1 = 10 + getVelocidad() + getdanio();
			ataque2 = 5 + getVelocidad() + getdanio();
		}break;
		case 2: {
			ataque1 = 8 + getVelocidad() + getdanio();
			ataque2 = 12 + getVelocidad() + getdanio();
		}break;
		case 3: {
			ataque1 = 7 + getVelocidad() + getdanio();
			ataque2 = 15 + getVelocidad() + getdanio();
		}break;
		}
		ataque_total = (ataque1 + ataque2) * (getfuerza() / 100);
		cout << endl << "Ataque 1 de soldado " << gettipo() << " = " << ataque1;
		cout << endl << "Ataque 2 de soldado " << gettipo() << " = " << ataque2;
		cout << endl << "Ataque Total de soldado " << gettipo() << " = " << ataque_total << endl;
		cout << endl << "Vida soldado " << gettipo() << "despu�s de recibir el ataque = "<< soldado_recibiente->recibirAtaque(ataque_total);
	}else{
		salud = 0;
		*ganador = 1;
		cout << endl << "�Soldado" << endl;
	}
	
	

}
void Soldado::generarSoldadoAleatorio() {
	generado = true;
	tipo_soldado = rand() % 4;
	switch (tipo_soldado) {
		case 1: {
			Nombre_soldado = "Marine";
			danio = rand() % 4 + 11;
			velocidad = rand() % 3 + 7;
			fuerza = rand() % 21 + 44;
			ataque1 = "Bola de Fuego";
			ataque2 = "Volcan";
		}break;
		case 2: {
			Nombre_soldado = "Naval";
			danio = rand() % 6 + 9;
			velocidad = rand() % 6 + 4;
			fuerza = rand() % 21 + 39;
			ataque1 = "Avalancha";
			ataque2 = "Tsunam�";
		}break;
		case 3: {
			Nombre_soldado = "Army";
			danio = rand() % 8 + 7;
			velocidad = rand() % 8 + 3;
			fuerza = rand() % 21 + 29;
			ataque1 = "Contaminacion";
			ataque2 = "Derrumbe";
		}break;
	}
}
void Soldado::Listar() {
	if (generado){
		cout << "Tipo: " << gettipo() << endl;
		cout << "Da�o: " << getdanio() << endl;
		cout << "Velocidad: " << getVelocidad() << endl;
		cout << "Fuerza: " << getfuerza() << "%" << endl;
		cout << "Salud: " << getsalud() << endl;
		cout << "Ataque1: " << getataque1() << endl;
		cout << "Ataque2: " << getataque2() << endl;
	}
	else {
		cout << endl << "Error genere los soldados primero" << endl;
	}
	
}
int Soldado::getVelocidad() {
	return velocidad;
}
int Soldado::getdanio() {
	return danio;
}
double Soldado::getfuerza() {
	return fuerza;
}
string Soldado::gettipo() {
	return Nombre_soldado;
}

double Soldado::getsalud() {
	return salud;
}
string Soldado::getataque1() {
	return ataque1;
}
string Soldado::getataque2() {
	return ataque2;
}
double Soldado::recibirAtaque(double ataque) {
	salud = salud - ataque;
	return salud;
}