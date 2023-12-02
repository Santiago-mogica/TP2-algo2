/*
 * Carta.cpp
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#include "Carta.h"

Carta::Carta(TiposDeCarta carta) {
	this->carta = carta;
}

Carta::~Carta() {}

TiposDeCarta Carta::getCarta() {
	return this->carta;
}


