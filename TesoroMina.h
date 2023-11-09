/*
 * TesoroMina.h
 *
 *  Created on: Oct 19, 2023
 *      Author: algo2
 */

#ifndef TESOROMINA_H_
#define TESOROMINA_H_

class TesoroMina  {
private:
    unsigned int x;
    unsigned int y;
    unsigned int z;

    unsigned int jugadorID;

public:
    /* pre: -
     * post: Crea el tesoro mina con sus coordenadas
     */
    TesoroMina(unsigned int x, unsigned int y, unsigned int z, unsigned int jugadorID);

    /* pre: -
     * post: Destruye el tesoro mina liberando la memoria
     */
    ~TesoroMina();

    /* pre: -
     * post: Devuelve la coordenada X
     */
    unsigned int getCoordenadaX();

    /* pre: -
     * post: Devuelve la coordenada Y
     */
    unsigned int getCoordenadaY();

    /* pre: -
     * post: Devuelve la coordenada Z
     */
    unsigned int getCoordenadaZ();

    /* pre: -
     * post: Devuelve el jugador del tesoro mina
     */
    unsigned int getJugadorID();

    /* pre: -
     * post: Cambia la coordenada X
     */
    void setCoordenadaX(unsigned int x);

    /* pre: -
     * post: Cambia la coordenada Y
     */
    void setCoordenadaY(unsigned int y);

    /* pre: -
     * post: Cambia la coordenada Z
     */
    void setCoordenadaZ(unsigned int z);

};



#endif /* TESOROMINA_H_ */
