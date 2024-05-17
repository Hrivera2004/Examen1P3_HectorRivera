#include "Soldado.h"
#include <random>
#pragma once
using namespace std;

Soldado::Soldado() {
	
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
	tipo_soldado = rand() % 4;
	switch (tipo_soldado) {
	case 1: {
		Nombre_soldado = "Marine";
		danio = rand() % 4 + 11;
		velocidad = rand() % 3 + 7;
		fuerza = rand() % 21 + 44;
		ataque1 = "Bola de Fuego";
		ataque2 = "Volcán";
	}break;
	case 2: {
		Nombre_soldado = "Naval";
		danio = rand() % 6 + 9;
		velocidad = rand() % 6 + 4;
		fuerza = rand() % 21 + 39;
		ataque1 = "Avalancha";
		ataque2 = "Tsunami";
	}break;
	case 3: {
		Nombre_soldado = "Army";
		danio = rand() % 8 + 7;
		velocidad = rand() % 8 + 3;
		fuerza = rand() % 21 + 29;
		ataque1 = "Contaminación";
		ataque2 = "Derrumbe";
	}break;
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