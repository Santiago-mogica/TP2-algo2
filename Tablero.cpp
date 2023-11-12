/*
 * Tablero.cpp
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#include "Tablero.h"

Tablero::Tablero(unsigned int longitudX, unsigned int longitudY, unsigned int longitudZ) {
	this->casilleros = new Lista<Lista<Lista<Casillero*>*>*>();
	this->longitudX = longitudX;
	this->longitudY = longitudY;
	this->longitudZ = longitudZ;
	for (unsigned int x=0;x<=longitudX;x++) {
		Lista<Lista<Casillero*>*>* fila = new Lista<Lista<Casillero*>*>();

		for (unsigned int y=0;y<=longitudY;y++) {
			Lista<Casillero*>* columna = new Lista<Casillero*>();

			for (unsigned int z=0;z<=longitudX;z++) {
				filaY->agregar(new Casillero(x, y, z));
			}

			fila->agregar(columna);
		}

		this->casilleros->agregar(fila);
	}
}

Tablero::~Tablero() {
	this->casilleros->iniciarCursor();
	while (this->casilleros->avanzarCursor()) {
		Lista<Lista<Casillero*>*>* fila = this->casilleros->obtenerCursor();
		fila->iniciarCursor();
		while(fila->avanzarCursor()) {
			Lista<Casillero*>* columna = fila->obtenerCursor();
			columna->iniciarCursor();
			while(columna->avanzarCursor()) {
				delete columna->obtenerCursor();
			}
			delete columna;
		}
		delete fila;
	}
	delete this->casilleros;
}

Casillero* Tablero::getCasillero(unsigned int x, unsigned int y, unsigned int z) {
	if ((longitudX<x)||(longitudY<y)||(longitudZ<z)) {
		throw "La posiciòn esta fuera de rango";
	}
	return this->casilleros->obtener(x)->obtener(y)->obtener(z);
}

const unsigned int Tablero::getLongitudX() {
	return this->longitudX;
}

const unsigned int Tablero::getLongitudY() {
	return this->longitudY;
}

const unsigned int Tablero::getLongitudZ() {
	return this->longitudZ;
}
