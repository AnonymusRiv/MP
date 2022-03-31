#include "funciones.h"

void compara(int *vector, int tam, int numero, int *mayor, int *menor){
    for(int i=0; i<tam; i++){
        if(vector[i]>numero){
            (*mayor)++;
        }
        else{
            (*menor)++;
        }
    }
}

void separa(int *vector, int tam, int numero, int *mayor, int *menor){
    int aux_mayor=0, aux_menor=0;
    for(int i=0; i<tam; i++){
        if(vector[i]>numero){
            mayor[aux_mayor]=vector[i];
            aux_mayor++;
        }
        else{
            menor[aux_menor]=vector[i];
            aux_menor++;
        }
    }
}