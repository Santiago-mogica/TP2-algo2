/*
 * Tesoro.cpp
 *
 *  Created on: Oct 7, 2023
 *      Author: algo2
 */

#include "Tesoro.h"

Tesoro::Tesoro(unsigned int x, unsigned int y, unsigned int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Tesoro::~Tesoro() {}

unsigned int Tesoro::getCoordenadaX() {
	return this->x;
}

unsigned int Tesoro::getCoordenadaY() {
	return this->y;
}

unsigned int Tesoro::getCoordenadaZ() {
	return this->z;
}

unsigned int Tesoro::getJugadorID() {
	return this->jugadorID;
}

void Tesoro::setCoordenadaX(unsigned int x) {
	this->x = x;
}

void Tesoro::setCoordenadaY(unsigned int y) {
	this->y = y;
}

void Tesoro::setCoordenadaX(unsigned int z) {
	this->z = z;
}
