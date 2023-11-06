/*
 * celda.cpp
 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */

#include "celda.h"
#include <iostream>
#include <stdexcept>

Celda::Celda(){
	this -> estado = LIBRE;
	this ->espia = NULL;
	this ->tesoro = NULL;
	this ->tesoroMina = NULL;
}

//irtual Celda:: ~Celda();

EstadoDeCelda Celda::getEstadoCelda(){
	return this -> estado;
}

void Celda::setEstadoCelda(EstadoDeCelda nuevoEstado){
	if (nuevoEstado == LIBRE || nuevoEstado == INACTIVA ){
		this-> estado = nuevoEstado;
		}
	else {
		throw std::invalid_argument ("El nuevo estado no es valido.");
	}
}

Espia* Celda::getEspia(){
	if (!(this->espia)){
		return this -> espia;
	}
	else {
		throw ("No se ha definido un espia para esta celda" );
	}
}

void Celda::setEspia(Espia* nuevoEspia){
	if (!nuevoEspia){
		this->espia = nuevoEspia;
	}
	else{
		throw std::invalid_argument ("El puntero no puede ser NULL" );
	}
}


Tesoro* Celda::getTesoro(){
	if (!(this->tesoro)){
			return this -> tesoro;
		}
		else {
			throw ("No se ha definido un tesoro para esta celda" );
		}
}

void Celda::setTesoro(Tesoro* nuevoTesoro){
	if (!nuevoTesoro){
			this->tesoro = nuevoTesoro;
		}
		else{
			throw std::invalid_argument ("El puntero no puede ser NULL" );
		}
}

TesoroMina* Celda::getTesoroMina(){
	if (!(this->tesoroMina)){
				return this -> tesoroMina;
			}
			else {
				throw ("No se ha definido un tesoroMina para esta celda" );
			}
}

void Celda::setTesoroMina(TesoroMina* nuevoTesoroMina){
	if (!nuevoTesoroMina){
				this->tesoroMina = nuevoTesoroMina;
			}

	else{
		throw std::invalid_argument ("El puntero no puede ser NULL" );
		}
}

