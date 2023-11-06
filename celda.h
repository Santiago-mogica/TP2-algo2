/*
 * celda.h
 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */

#ifndef CELDA_H_
#define CELDA_H_

#include "espia.h"


typedef enum {
	INACTIVA,
	LIBRE,

}EstadoDeCelda;

class Celda{

private :
	EstadoDeCelda estado;
	Espia* espia;
	Tesoro* tesoro;
	TesoroMina* tesoroMina;

public :

	Celda();
	~Celda();
	EstadoDeCelda getEstadoCelda();
	void setEstadoCelda(EstadoDeCelda nuevoEstado);
	Espia* getEspia();
	void setEspia(Espia* nuevoEspia);
	Tesoro* getTesoro();
	void setTesoro(Tesoro* nuevoTesoro);
	TesoroMina* getTesoroMina();
	void setTesoroMina(TesoroMina* nuevoTesoroMina);
};





#endif /* CELDA_H_ */
