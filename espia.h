/*
 * espia.h
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
	Espia(int x,int y, int z,int jugadorID, int espiaID);
	~Espia();
	void setCoordenadas(int x,int y, int z);
	const int * getCoordenadas();
	int getEspiaID();
	int getJugadorID();

};


#endif /* ESPIA_H_ */
