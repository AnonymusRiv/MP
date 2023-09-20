#ifndef FUNCIONES_H
#define FUNCIONES_H

struct alumno{
    char nombre[256];
    char apellido[256];
    int edad, nota1, nota2;
    float media;
};

FILE* abrirFicheroLectura(char* nombre);

FILE* abrirFicheroEscritura(char* nombre);

void leeFichero(FILE* fichero, struct alumno **alumnos, int *longitud);

void escribe(struct alumno *alumnos, FILE* fichero);

#endif