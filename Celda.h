/*
 * Celda.h
 *
 *  Created on: 05/11/2023
 *      Author: algo2
 */

#ifndef CELDA_H_
#define CELDA_H_

#include "Espia.h"


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

	//Pre:-
	//Post: se inicializa la celda, en su estado primario LIBRE, y sin espia, teosoro o tesoro mina.
	Celda();

	//Pre:-
	//Post: se libera la memoria asociada al objeto.
	~Celda();

	//Pre:-
	//Post: Se devuelve el estado en que se encuentra el espia.
	EstadoDeCelda getEstadoCelda();

	//Pre:-
	//Post: se inicializa la celda, en su estado primario LIBRE, y sin espia, teosoro o tesoro mina.
	void setEstadoCelda(EstadoDeCelda nuevoEstado);

	//Pre: -
	//Post: Se devuelve el espia que se encuentra en la celda. En caso contrario se devuelve NULL.
	Espia* getEspia();

	//Pre:  No puede haber otro espia en la celda para agregar un espia. Si se quiere quitar el espia se debe pasar como parametro un puntero a NULL.
	//Post: Se agrega un espia o un puntero a NULL para indicar que la casilla no tiene espia.
	void setEspia(Espia* nuevoEspia);

	//Pre: -
	//Post: Se devuelve el tesoro que se encuentra en la celda. En caso contrario se devuelve NULL.
	Tesoro* getTesoro();

	//Pre:  No puede haber otro tesoro en la celda para agregar un espia. Si se quiere quitar el tesoro se debe pasar como parametro un puntero a NULL.
	//Post: Se agrega un tesoro o un puntero a NULL para indicar que la casilla no tiene un tesoro.
	void setTesoro(Tesoro* nuevoTesoro);

	//Pre: -
	//Post: Se devuelve el tesoro mina que se encuentra en la celda. En caso contrario se devuelve NULL.
	TesoroMina* getTesoroMina();

	//Pre:  No puede haber otro tesoro mina en la celda para agregar un espia. Si se quiere quitar el tesoro mina se debe pasar como parametro un puntero a NULL.
	//Post: Se agrega un tesoro mina o un puntero a NULL para indicar que la casilla no tiene un tesoro mina.
	void setTesoroMina(TesoroMina* nuevoTesoroMina);
};





#endif /* CELDA_H_ */