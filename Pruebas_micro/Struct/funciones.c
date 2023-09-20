#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void ReservaMemoria(struct Persona **vector, int tam){
    if((*vector=(struct Persona*)malloc(tam*sizeof(struct Persona)))==NULL){    //Poner comprobación de reserva de memoria *IMPORTANTE*
        printf("\nError al reservar memoria.");
        exit(-1);
    }
}

void Rellena(struct Persona *vector, int tam){
    for(int i=0; i<tam; i++){
        printf("Inserte el nombre de la persona: ");
        scanf("%s", vector[i].nombre);
        printf("Inserte la edad de la persona: ");
        scanf("%d", &vector[i].edad);
    }
}

void Imprime(struct Persona *vector, int tam){
    printf("------------------------------------\n");
    for(int i=0; i<tam; i++){
        printf("El nombre de la %d persona es : %s\n", i, vector[i].nombre);
        printf("La edad de la %d persona es : %d\n", i, vector[i].edad);
        printf("------------------------------------\n");
    }
}

int Mayores(struct Persona *vector, int tam, float *media){
    int mayor=0;
    float suma=0, aux=0;;
    for(int i=0; i<tam; i++){
        if(vector[i].edad>=18){
            suma=suma+vector[i].edad;
            mayor++;
            aux++;
        }
    }
    *media=suma/aux;
    return mayor;
}

void LiberaMemoria(struct Persona *vector){
    free(vector);
}