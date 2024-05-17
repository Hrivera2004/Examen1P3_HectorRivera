#include "Soldado.h"
#include <random>
#include <iostream>
#include <stdlib.h>
#pragma once
using namespace std;

Soldado::Soldado() {
	setlocale(LC_ALL, "spanish");
}

int Soldado::atacar() {
	switch (tipo_soldado) {
	case 1: {
		return (10+getVelocidad()+getdanio())+ (5 + getVelocidad() + getdanio()) * getfuerza();
	}break;
	case 2: {
		return (8 + getVelocidad() + getdanio()) + (12 + getVelocidad() + getdanio()) * getfuerza();
	}break;
	case 3: {
		return (7 + getVelocidad() + getdanio()) + (15 + getVelocidad() + getdanio()) * getfuerza();
	}break;
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
		ataque2 = "Tsunamí";
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
		cout << "Daño: " << getdanio() << endl;
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