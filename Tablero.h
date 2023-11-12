/*
 * Tablero.h
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#ifndef TABLERO_H_
#define TABLERO_H_

#include "Lista.h"
#include "Casillero.h"

class Tablero {
private:
	Lista<Lista<Lista<Casillero*>*>*>* casilleros;
	unsigned int longitudX;
	unsigned int longitudY;
	unsigned int longitudZ;

public:
	/*	pre:
	 *	post: crea el tablero
	 */
	Tablero(unsigned int longitudX, unsigned int longitudY, unsigned int longitudZ);

	/*	pre:
	 * 	post: libera la memoria
	 */
	virtual ~Tablero();

	/*	pre: la posicion elegida tiene que estar en el rango del tablero
	 * 	post: devuelve el casillero de la posicion
	 */
	Casillero* getCasillero(unsigned int posicionX, unsigned int posicionY, unsigned int posicionZ);

	/*	pre:
	 * 	post: devuelve la maxima longitud de x
	 */
	const unsigned int getLongitudX();

	/*	pre:
	 * 	post: devuelve la maxima longitud de y
	 */
	const unsigned int getLongitudY();

	/*	pre:
	 * 	post: devuelve la maxima longitud de z
	 */
	const unsigned int getLongitudZ();
};



#endif /* TABLERO_H_ */
