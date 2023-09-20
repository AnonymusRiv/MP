#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char *argv[]){
    FILE* fichero;
    float media;

    if(argc != 2){
        printf("Error al llamar al programa, uso correcto: ./Ej3 <nombre_fichero>\n");
        exit(-1);
    }

    fichero=abrirFicheroLectura(fichero, argv[1]);
    media=leer(fichero);
    printf("La media de los elementos del fichero %s es: %f\n", argv[1], media);
    fclose(fichero);
}