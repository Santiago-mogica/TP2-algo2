/*
 * celda.cpp
 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */

#include "celda.h"
#include <iostream>
#include <stdexcept>

celda::celda(){
	this -> estado = LIBRE;
	this ->espia = NULL;
	this ->tesoro = NULL;
	this ->tesoroMina = NULL;
}

celda:: ~celda();

EstadoDeCelda celda::getEstadoCelda(){
	return this -> estado;
}

void setEstadoCelda(EstadoDeCelda nuevoEstado){
	if (nuevoEstado == LIBRE || nuevoEstado == INACTIVA ){
		this-> estado = nuevoEstado;
		}
	else {
		throw std::invalid_argument ("El nuevo estado no es valido.");
	}
}

Espia* getEspia(){
	if (!(this->espia)){
		return this -> espia;
	}
	else {
		throw ("No se ha definido un espia para esta celda" );
	}
}

void setEspia(Espia* nuevoEspia){
	if (!nuevoEspia){
		this->espia = nuevoEspia;
	}
	else{
		throw std::invalid_argument ("El puntero no puede ser NULL" );
	}
}


Tesoro* getTesoro(){
	if (!(this->tesoro)){
			return this -> tesoro;
		}
		else {
			throw ("No se ha definido un tesoro para esta celda" );
		}
}

void setTesoro(Tesoro* nuevoTesoro){
	if (!nuevoTesoro){
			this->tesoro = nuevoTesoro;
		}
		else{
			throw std::invalid_argument ("El puntero no puede ser NULL" );
		}
}

TesoroMina* getTesoroMina(){
	if (!(this->tesoroMina)){
				return this -> tesoroMina;
			}
			else {
				throw ("No se ha definido un tesoroMina para esta celda" );
			}
}

void setTesoroMina(TesoroMina* nuevoTesoroMina){
	if (!nuevoTesoroMina){
				this->tesoro = nuevoTesoroMina;
			}
			else{
				throw std::invalid_argument ("El puntero no puede ser NULL" );
			}
	}
}

