#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
    int tam=5;
    struct datos* Vector=(struct datos*)malloc(tam * sizeof(struct datos));
    int criterio;

    for(int i=0; i<tam; i++){
        printf("DATOS %d\n", i);
        printf("Inserte un nombre: ");
        scanf("%s", Vector[i].nombre);
        Vector[i].codigo=i;
        printf("Inserte el peso: ");
        scanf("%f", &Vector[i].pesoKg);
        printf("Inserte la altura: ");
        scanf("%f", &Vector[i].alturaM);
    }

    printf("------------------------------\n");
    printf("Vector rellenado correctamente\n");

    printf("\nSeleccione una opción:\n\t0. Ascendente por imc.\n\t1. Descendente por nombre.\n");
    scanf("%d", &criterio);

    ejercicio1(tam, Vector, criterio);

    for(int i=0; i<tam; i++){
        printf("\n\tDATOS %d\n", i);
        printf("Nombre: %s\n", Vector[i].nombre);
        printf("Codigo: %d\n", Vector[i].codigo);
        printf("Peso: %f\n", Vector[i].pesoKg);
        printf("Altura: %f\n", Vector[i].alturaM);
    }
}