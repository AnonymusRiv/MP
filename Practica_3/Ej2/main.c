#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(){
    int min, max, elementos, tam=0;
    FILE* fichero;
    char *nombre=NULL, aux;

    printf("Inserte el nombre del fichero de texto: ");
    while((aux=getchar())!='\n'){
        if((nombre = (char*) realloc(nombre, (tam+1)*sizeof(char))) == NULL)
		{
			printf("Error al guardar el nombre introducido\n");
			return (-1);
		}
		nombre[tam]=aux;
		tam++;
    }

    printf("Inserte el número de elementos del fichero: ");
    scanf("%d", &elementos);

    printf("Inserte el valor mínimo de los números aleatorios: ");
    scanf("%d", &min);
    printf("Inserte el valor máximo de los números aleatorios: ");
    scanf("%d", &max);

    fichero=abrirFicheroEscritura(fichero, nombre);
    escribe(fichero, elementos, min, max);


    fclose(fichero);
}