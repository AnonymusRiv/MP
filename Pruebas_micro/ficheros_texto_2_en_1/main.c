#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char* argv[]){
    struct alumno *alumnos;
    FILE* entrada1, *entrada2, *salida;
    int tam=0,longitud = 0;

    if(argc!=4){
        printf("Se ha llamado mal al programa.\nUso Correcto: ./Ej <fichero 1> <fichero 2> <fichero salida>\n");
        exit(-1);
    }

    entrada1=abrirFicheroLectura(argv[1]);
    entrada2=abrirFicheroLectura(argv[2]);
    salida=abrirFicheroEscritura(argv[3]);
    leeFichero(entrada1, &alumnos, &longitud);
    leeFichero(entrada2, &alumnos, &longitud);
    free(alumnos);
    fclose(entrada1);
    fclose(entrada2);
    fclose(salida);
}