#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"


void lee(int *vector, int *tam){
    printf("Indique el tamaño del vector: ");
    scanf("%d", &*tam);
    printf("Inserte los elementos del vector:\n");
    for(int i=0; i<*tam; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &vector[i]);
    }
}

void imprime(int *vector, int tam){
    printf("El vector introducido es: \n");
    for(int i=0; i<tam; i++){
        printf("V[%d]: %d\n", i, vector[i]);
    }
}


void estadisticasVector(int *vector,int tam, float *media, float *varianza, float *desviacion){
    int suma=0;
    float var=0;
    for(int i=0; i<tam; i++){
        suma=suma+vector[i];
    }
    *media=suma/tam;
    for(int i=0; i<tam; i++){
        var=var+pow((*(vector+i) - *media), 2);
    }
    *varianza=var/tam;
    *desviacion=sqrt(*varianza);
}
