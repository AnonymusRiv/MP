#ifndef FUNCIONES_H
#define FUNCIONES_H

struct libros{
    char *titulo;
    char *autor;
    float precio;
    int unidades;
};

void menu();

FILE* abrirFicheroLectura(FILE* fichero, char* nombre);

FILE* abrirFicheroEscritura(FILE* fichero, char* nombre);

#endif