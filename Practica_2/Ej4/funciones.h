#ifndef FUNCIONES_H
#define FUNCIONES_H

/**
    @file funciones.h
    @brief Este es el ejercicio 4 de la práctica 2
    @author Carlos Rivero Talavera
    @version 1.0
    @date 30/03/2022
*/


/**
    @fn int **reservaMemoria(int nFil, int nCol)
    @brief Reserva memoria de una matriz
    @param nFil es el número de filas de la matriz
    @param nCol es el número de columnas de la matriz
    @pre ninguna
    @post ninguna
    @return devuelve una matriz ya reservada
*/
int **reservaMemoria(int nFil, int nCol);


/**
    @fn rellenaMatriz(int **matriz, int nFil, int nCol);
    @brief Rellena una matriz con valores aleatorios
    @param matriz es la matriz
    @param nFil es el número de filas de la matriz
    @param nCol es el número de columnas de la matriz
    @pre ninguna
    @post ninguna
    @return nada
*/
void rellenaMatriz(int **matriz, int nFil, int nCol);


/**
    @fn imprimeMatriz(int **matriz, int nFil, int nCol);
    @brief Imprime la matriz por pantalla
    @param matriz es la matriz
    @param nFil es el número de filas de la matriz
    @param nCol es el número de columnas de la matriz
    @pre ninguna
    @post ninguna
    @return nada
*/
void imprimeMatriz(int **matriz, int nFil, int nCol);


/**
    @fn *minCol(int **matriz, int nFil, int nCol);
    @brief Escoge los valores mínimos de las columnas
    @param matriz es la matriz
    @param nFil es el número de filas de la matriz
    @param nCol es el número de columnas de la matriz
    @pre ninguna
    @post ninguna
    @return devuelve un vector de enteros con los elementos mínimos de cada columna
*/
int *minCol(int **matriz, int nFil, int nCol);


/**
    @fn liberarMemoria(int **matriz, int nFil);
    @brief libera la memoria de la matriz
    @param nFil es el número de filas de la matriz
    @param matriz Es la matriz
    @pre ninguna
    @post ninguna
    @return Nada
*/
void liberarMemoria(int ***matriz, int nFil);

#endif