#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char *argv[]){
    FILE* fichero;
    if(argc!=2){
        printf("Error al llamar el programa\n");
        exit(-1);
    }

    fichero=abrirficheroescritura(argv[1]);
    escribe(fichero);
    fclose(fichero);

    fichero=abrirficherolectura(argv[1]);
    lee(fichero);
    fclose(fichero);
}