#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    int *vector, tam, num, tam_mayor=0, tam_menor=0, *mayor, *menor;
    printf("Introduzca el tamaño del vector: ");
    scanf("%d", &tam);
    vector=malloc(tam*sizeof(int));
    printf("Inserte los elementos del vector\n");
    for(int i=0; i<tam; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &vector[i]);
    }
    printf("Introduzca el número para hacer la división: ");
    scanf("%d", &num);
    compara(vector, tam, num, &tam_mayor, &tam_menor);
    mayor=malloc(tam_mayor*sizeof(int));
    menor=malloc(tam_menor*sizeof(int));
    separa(vector, tam, num, mayor, menor);

    printf("El vector mayor es\n");
    for(int i=0; i<tam_mayor; i++){
        printf("v[%d]: %d\n", i, mayor[i]);
    }
    printf("El vector menor es\n");
    for(int i=0; i<tam_menor; i++){
        printf("v[%d]: %d\n", i, menor[i]);
    }
}