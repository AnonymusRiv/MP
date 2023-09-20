#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

FILE* abrirficheroescritura(char *nombre){
    FILE* fichero;
    if((fichero = fopen(nombre, "wb"))==NULL){
        printf("Error al abrir el fichero en modo escritura.\n");
        exit(-1);
    }
    return fichero;
}

FILE* abrirficherolectura(char *nombre){
    FILE* fichero;
    if((fichero = fopen(nombre, "rb"))==NULL){
        printf("Error al abrir el fichero en modo lectura.\n");
        exit(-1);
    }
    return fichero;
}

void escribe(FILE *fichero){
    char algo[100];
    printf("Introduzca el mensaje: ");
    fgets(algo, 100, stdin);
    fwrite(algo, 100, 1, fichero);
    printf("Fichero escrito con exito.\n");
}

void lee(FILE* fichero){
    char algo[100];
    fread(algo, 100, 1, fichero);
    printf("La cadena leida del fichero es: %s", algo);
}