#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"


/*
    nEle: número de elementos del vector.
    Vector: el vector a ordenar
    criterio: ordenación del vector
        0: ascendente por imc
        1: descendente por nombre
*/
void ejercicio1(int nEle, struct datos* Vector, int criterio){
    if(criterio == 0){
        qsort(Vector, nEle, sizeof(int), &menorimc);
    }
    else{
        qsort(Vector, nEle, sizeof(int), &menornombre);
    }
}

int menorimc(const void *e1, const void *e2){
    struct datos *a, *b;
    float imca, imcb;
    a=(struct datos*)e1;
    b=(struct datos*)e2;
    imca=(a->pesoKg/(a->alturaM *a->alturaM));
    imcb=(b->pesoKg/(b->alturaM * b->alturaM));
    if(imca>imcb){
        return (-1);
    }
    else{
        return (imca-imcb);
    }
}

int menornombre(const void *e1, const void *e2){
    struct datos *a, *b;
    a=(struct datos*)e1;
    b=(struct datos*)e2;
    if(strcmp(a->nombre, b->nombre)<0){
        return 1;
    }
    else{
        return 0;
    }
}



