/*
 * Espia.h
 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */

#ifndef ESPIA_H_
#define ESPIA_H_
#include <string>

class Espia{
private:
	int coordenada [3]; //x,y,z
	int jugadorID;
	int espiaID;

public:
	//Pre: se deben pasar parametros positivos.
	//post: se devuelve un objeto espia con los parametros dados.
	Espia(int x,int y, int z,int jugadorID, int espiaID);

	//Pre:-
	//Post: se libera la memoria asociada al objeto.
	~Espia();

	//Pre: se deben pasar parametros positivos.
	//Post: se setean las coordenadas del espia los parametros dados.
	void setCoordenadas(int x,int y, int z);

	//Pre:-
	//Post: se devuelven las coordenadas del espia.
	const int * getCoordenadas();

	//Pre:-
	//Post:se devuelve el ID del espia.
	int getEspiaID();

	//Pre:-
	//Post:se devuelve el ID del jugdor al que pertenece el espia.
	int getJugadorID();

};


#endif /* ESPIA_H_ */