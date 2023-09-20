#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funciones.h"

FILE* abirFicheroLectura(FILE* fichero, char* nombre){
    if((fichero = fopen(nombre, "r"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

FILE* abrirFicheroEscritura(FILE* fichero, char* nombre){
    if((fichero = fopen(nombre, "w"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

void escribir(FILE* entrada, FILE* salida){
    char lectura;
    while(fscanf(entrada, "%c", &lectura)!=EOF){
        putc(toupper(lectura), salida);
    }
}