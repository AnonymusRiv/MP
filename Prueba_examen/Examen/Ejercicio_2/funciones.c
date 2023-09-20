#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"


/*
    nEle: número de elementos del vector V1 y V2.
    V1, V2 y VR. Vectores.
*/

void ejercicio2(int nEle, int *V1, int *V2, int *VR){
    int aux=0, tam=0;
    recursiva(nEle, tam, aux, V1, V2, VR);
}

void recursiva(int nEle, int tam, int aux, int *V1, int *V2, int *VR){
    if((tam % 2) == 0){
        VR[tam]=V1[aux];
    }
    else{
        VR[tam]=V2[aux];
        aux++;
    }
    tam++;
    recursiva(nEle, tam, aux, V1, V2, VR);
}