#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

int main(){
    struct Persona* Personas;
    int tam, mayor;
    float media=0;
    printf("Inserte el número de personas: ");
    scanf("%d", &tam);
    ReservaMemoria(&Personas, tam);
    printf("Memoria reservada con éxito\n\n");
    Rellena(Personas, tam);
    printf("Vector llenado con éxito\n\n");
    Imprime(Personas, tam);
    mayor=Mayores(Personas, tam, &media);
    printf("\nHay %d personas mayores de edad y su media es %f\n", mayor, media);
    LiberaMemoria(Personas);
    printf("\nMemoria liberada con éxito.\n");
}