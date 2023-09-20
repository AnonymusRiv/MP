#ifndef FUNCIONES_H
#define FUNCIONES_H

FILE* abirFicheroLectura(FILE* fichero, char* nombre);

FILE* abrirFicheroEscritura(FILE* fichero, char* nombre);

void escribir(FILE* entrada, FILE* salida);

void reservaMEmoria();

#endif