#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void menu(){
    printf("1. Comprobar existencia de un libro.\n");
    printf("2. Introducir nuevo libro.\n");
    printf("3. Contar el número de libros diferentes que hay\n");
    printf("4. Listado de libros\n");
    printf("5. Vender libros\n");
    printf("6. Borrar registros con 0 unidades\n");
    printf("7. Salir\n");
}

FILE* abrirFicheroLectura(FILE* fichero, char* nombre){
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