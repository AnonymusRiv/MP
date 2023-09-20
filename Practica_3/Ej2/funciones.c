#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "funciones.h"

FILE* abrirFicheroEscritura(char* nombre){
    FILE* fichero;
    if((fichero = fopen(nombre, "w"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

void escribe(FILE* fichero, int elementos, int min, int max){
    int medio=max-min;
    srand(time(NULL));
    for(int i=0; i<elementos; i++){
        fprintf(fichero, "%d\n", (rand()%((medio)+min)));
    }
}