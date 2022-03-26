#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    int *vector, tam;
    float media, varianza, desviacion;
    lee(vector, &tam);
    imprime(vector, tam);
    estadisticasVector(vector, tam, &media, &varianza, &desviacion);
    printf("La media del vector es: %f\n", media);
    printf("La varianza del vector es: %f\n", varianza);
    printf("La desviación típixa del vector es: %f\n", desviacion);
}