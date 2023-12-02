/*
 * Jugador.h
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include "Carta.h"

class Jugador {
private:
	unsigned int jugadorID;
	unsigned int tesorosRestantes;
	Lista<Carta*>* cartas;

public:

	/*	pre:
	 *	post: crea el jugador
	 */
	Jugador(unsigned int jugadorID, unsigned int tesorosRestantes);

	/*	pre:
	 * 	post: libera la memoria
	 */
	virtual ~Jugador();

	/*	pre:
	 * 	post: agrega carta
	 */
	void agregarCarta(TiposDeCarta carta);

	/*	pre: los tesoros a restar no pueden ser mayor a los tesoros
	 * 	post: resta los tesoros
	 */
	void restarTesoros(unsigned int tesorosParaRestar);

	/*	pre:
	 * 	post: devuelve el ID del jugador
	 */
	unsigned int getJugadorID();

	/*	pre:
	 * 	post: devuelve los tesoros restantes
	 */
	unsigned int getTesorosRestantes();

	/*	pre: la posicion tiene que estar entre 1 y la cantidad de cartas del jugador
	 * 	post: devuelve la carta
	 */
	Carta* getCarta(unsigned int posicionDeCarta);
};




#endif /* JUGADOR_H_ */
