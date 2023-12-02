/*
 * Espia.cpp

 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */
#include "Espia.h"
#include <iostream>
#include <stdexcept>

	bool verificarCoordenadas(int x,int y, int z){
		if (x >= 0 && y >= 0 && z >= 0  ){
			return true;
		}
		return false;
	}


	Espia::Espia(int x,int y, int z,int jugadorID, int espiaID){
		if (verificarCoordenadas(x,y,z) && jugadorID >= 0 && espiaID >= 0 ){
			this-> coordenada[0] = x;
			this->coordenada[1] = y;
			this->coordenada[2] = z;
			this->jugadorID = jugadorID;
			this->espiaID = espiaID;
		}
		else {
				throw std::invalid_argument ("Los parametros deben ser positivos.");
			}
	}

	//Espia:: ~ Espia;

	void Espia::setCoordenadas(int x,int y, int z){
		if (verificarCoordenadas(x,y,z) ){
					this-> coordenada[0] = x;
					this->coordenada[1] = y;
					this->coordenada[2] = z;
		}
		else {
			throw std::invalid_argument ("Los parametros deben ser positivos.");
			}
	}

	const int * Espia::getCoordenadas(){
		if (verificarCoordenadas(this->coordenada[0], this->coordenada[1], this->coordenada[2])){
			return this->coordenada;
		}
		else {
			throw ("Las coordenadas del espia no son validas.");
		}
	}

	int Espia::getEspiaID(){
		if (this->espiaID >= 0){
			return this-> espiaID;
		}
		else {
			throw ("El ID del espia no es valido.");
		}
	}

	int Espia::getJugadorID(){
		if (this->jugadorID >= 0){
			return this-> jugadorID;
		}
		else {
			throw ("El ID del jugador no es valido.");
		}
	}
