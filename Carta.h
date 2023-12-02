/*
 * Carta.h
 *
 *  Created on: Oct 20, 2023
 *      Author: algo2
 */

#ifndef CARTA_H_
#define CARTA_H_

enum TiposDeCarta {Blindaje, Radar, PartirTesoro, TipoDeCarta4, TipoDeCarta5, TipoDeCarta6};

class Carta {
private:
	TiposDeCarta carta;

public:
	/*	pre:
	 *	post: crea la carta
	 */
	Carta(TiposDeCarta carta);

	/*	pre:
	 * 	post: libera la memoria
	 */
	virtual ~Carta();

	/*	pre:
	 * 	post: devuelve el tipo de carta
	 */
	TiposDeCarta getCarta();
};



#endif /* CARTA_H_ */
