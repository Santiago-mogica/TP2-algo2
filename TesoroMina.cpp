/*
 * TesoroMina.cpp
 *
 *  Created on: Oct 19, 2023
 *      Author: algo2
 */

#include "TesoroMina.h"


TesoroMina::TesoroMina(unsigned int x, unsigned int y, unsigned int z, unsigned int jugadorID) {
	this->x = x;
	this->y = y;
	this->z = z;

	this->jugadorID = jugadorID;
}

TesoroMina::~TesoroMina() {}

unsigned int TesoroMina::getCoordenadaX() {
	return this->x;
}

unsigned int TesoroMina::getCoordenadaY() {
	return this->y;
}

unsigned int TesoroMina::getCoordenadaZ() {
	return this->z;
}

unsigned int TesoroMina::getJugadorID() {
	return this->jugadorID;
}

void TesoroMina::setCoordenadaX(unsigned int x) {
	this->x = x;
}

void TesoroMina::setCoordenadaY(unsigned int y) {
	this->y = y;
}

void TesoroMina::setCoordenadaZ(unsigned int z) {
	this->z = z;
}

