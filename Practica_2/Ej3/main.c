#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
    struct Ficha_Jugador *vector;
    int tam;
    printf("Inserte el número de jugadores de su plantilla de fútbol: ");
    scanf("%d", &tam);
    reservarMemoria(&vector, tam);
    rellenar(vector, tam);
    listar(vector, tam);
    free(vector);
}