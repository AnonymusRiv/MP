#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

FILE* abrirFicheroLectura(char* nombre){
    FILE *fichero;
    if((fichero = fopen(nombre, "r"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

FILE* abrirFicheroEscritura(char* nombre){
    FILE* fichero;
    if((fichero = fopen(nombre, "w"))==NULL){
        printf("\nError al abrir el fichero %s\n", nombre);
        exit(-1);
    }
    return fichero;
}

void leeFichero(FILE* fichero, struct alumno **alumnos, int *longitud){
    char *aux, auxc;
    int tam=0;
    int encontrado=0;
    while(fgets(aux, 256, fichero)!=NULL || !feof(fichero)){
        for(int i=0; i<*longitud; i++){
            if(strcmp(alumnos[i]->nombre, aux)==0){
                encontrado=1;
            }
        }
        if(encontrado==0){
            *longitud++;
            if((*alumnos = (struct alumno*) realloc(alumnos, *longitud *sizeof(struct alumno))) == NULL){
                printf("Error al guardar el nombre del fichero de salida\n");
                exit (-1);
            }
            strcmp(alumnos[*longitud]->nombre, aux);
            fgets(aux, 256, fichero);
            strcmp(alumnos[*longitud]->apellido, aux);
            fscanf(fichero, "%d %d %d%c", &alumnos[*longitud]->edad, &alumnos[*longitud]->nota1, &alumnos[*longitud]->nota2, &auxc);
        }
        else{
            fgets(aux, 256, fichero);
            fgets(aux, 256, fichero);
        }
    }
}

void escribe(struct alumno *alumnos, FILE* fichero){

}