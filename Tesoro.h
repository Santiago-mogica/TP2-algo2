/*
 * Tesoro.h
 *
 *  Created on: Oct 7, 2023
 *      Author: algo2
 */

#ifndef TESORO_H_
#define TESORO_H_

class Tesoro  {
private:
    unsigned int x;
    unsigned int y;
    unsigned int z;

    unsigned int jugadorID;

public:
    /* pre: -
     * post: Crea el tesoro con sus coordenadas
     */
    Tesoro(unsigned int x, unsigned int y, unsigned int z, unsigned int jugadorID);

    /* pre: -
     * post: Destruye el tesoro liberando la memoria
     */
    ~Tesoro();

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
     * post: Devuelve el ID del jugador del tesoro
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



#endif /* TESORO_H_ */
