#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
    int *V1, *V2, *VR;
    int nEle=5;
    V1=(int *)malloc(nEle*sizeof(int));
    V2=(int *)malloc(nEle*sizeof(int));
    VR=(int *)malloc(10*sizeof(int));

    V1[0]=-4;
    V1[1]=-7;
    V1[2]=-1;
    V1[3]=-9;
    V1[4]=-3;

    V2[0]=2;
    V2[1]=8;
    V2[2]=0;
    V2[3]=6;
    V2[4]=5;

    ejercicio2(nEle, V1, V2, VR);
}