/*
 * Jugador.cpp
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#include "Jugador.h"

Jugador::Jugador(unsigned int jugadorID, unsigned int tesorosRestantes) {
	this->jugadorID = jugadorID;
	this->tesorosRestantes = tesorosRestantes;
}

Jugador::~Jugador() {

}

void Jugador::agregarCarta(TiposDeCarta carta) {

}

void Jugador::restarTesoros(unsigned int tesorosParaRestar) {
	if (tesorosParaRestar>this->tesorosRestantes) {
		throw "No se pueden restar mas tesoros de los que hay";
	}
	this->tesorosRestantes = this->tesorosRestantes - tesorosParaRestar;
}

unsigned int Jugador::getJugadorID() {
	return this->jugadorID;
}

unsigned int Jugador::getTesorosRestantes() {
	return this->tesorosRestantes;
}

Carta* Jugador::getCarta(unsigned int posicionDeCarta) {

}
