#ifndef FUNCIONES_H
#define FUNCIONES_H

/**
    @file funciones.h
    @author Carlos Rivero Talavera
    @version 1.0
    @brief Esta es una prueba para el micro
    @date 30/03/2022
*/

struct Persona{
    char nombre[50];    /**< nombre de la persona*/
    int edad;           /**< edad de la persona*/
};


/**
    @fn void ReservaMemoria(struct Persona **vector, int tam)
    @brief Reserva memoria de una estructura del tipo persona
    @param vector Vector de tipo struct Persona
    @param tam Tamaño del vector
    @pre Ninguna
    @post Ninguna
    @return Nada
*/
void ReservaMemoria(struct Persona **vector, int tam);

/**
    @fn void Rellena(struct Persona **vector, int tam)
    @brief Rellena el vector de struct Persona
    @param vector Vector de tipo struct Persona
    @param tam Tamaño del vector
    @pre Ninguna
    @post Ninguna
    @return Nada
*/
void Rellena(struct Persona *vector, int tam);

/**
    @fn void Imprime(struct Persona *vector, int tam)
    @brief Imprime por pantalla el vector de struct Persona
    @param vector Vector de tipo struct Persona
    @param tam Tamaño del vector
    @pre Ninguna
    @post Ninguna
    @return Nada
*/
void Imprime(struct Persona *vector, int tam);

/**
    @fn int Mayores(struct Persona *vector, int tam, int *media)
    @brief Calcula la edad media de las personas mayores de edad y cuenta cuantas personas son mayores
    @param vector Vector de tipo struct Persona
    @param tam Tamaño del vector
    @pre Ninguna
    @post Ninguna
    @return Devuelve el número de personas mayores de edad
*/
int Mayores(struct Persona *vector, int tam, float *media);

/**
    @fn void LiberaMemoria(struct Persona **vector)
    @brief Libera la memoria de la matriz
    @param vector Vector de tipo struct Persona
    @param tam Tamaño del vector
    @pre Ninguna
    @post Ninguna
    @return Nada
*/
void LiberaMemoria(struct Persona *vector);

#endif