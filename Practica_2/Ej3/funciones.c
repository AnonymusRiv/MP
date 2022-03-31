#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


void reservarMemoria(struct Ficha_Jugador **vector, int tam){
    *vector=(struct Ficha_Jugador*)malloc(tam * sizeof(struct Ficha_Jugador));
}

struct Ficha_Jugador lee(){
    struct Ficha_Jugador jugador;
    printf("\nInserte el nombre del jugador: ");
    scanf("%s", jugador.nombre);
    printf("Inserte el dorsal del jugador: ");
    scanf("%d", &(jugador.dorsal));
    printf("Inserte el peso del jugador: ");
    scanf("%f", &(jugador.peso));
    printf("Inserte la altura del jugador: ");
    scanf("%d", &(jugador.estatura));
    return jugador;
}

void rellenar(struct Ficha_Jugador *vector, int tam){
    for(int i=0; i<tam; i++){
        vector[i]=lee();
    }
}

void listar(struct Ficha_Jugador *vector, int tam){
    for(int i=0; i<tam; i++){
        printf("\n\tEl %d jugador tiene las siguientes características", i+1);
        printf("\nEl nombre del jugador es: %s", vector[i].nombre);
        printf("\nEl dorsal del jugador es: %d", vector[i].dorsal);
        printf("\nEl peso del jugador es: %f", vector[i].peso);
        printf("\nLa estatura del jugador es: %d\n", vector[i].estatura);
    }
}

int eliminar(struct Ficha_Jugador *vector, int *tam, char letra){

}