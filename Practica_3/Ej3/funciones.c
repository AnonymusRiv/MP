#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


FILE* abrirFicheroLectura(FILE* fichero, char* nombre){
    if((fichero = fopen(nombre, "r"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

float leer(FILE* fichero){
    float suma=0, aux, veces=0;
    float media;
    char c;
    while((fscanf(fichero, "%f%c", &aux, &c)!=EOF)){
        veces++;
        suma+=aux;
    }
    media=suma/veces;
    return media;
}