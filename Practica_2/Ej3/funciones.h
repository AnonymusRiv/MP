#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Ficha_Jugador{
    char nombre[50];
    int dorsal;
    float peso;
    int estatura;
};

void reservarMemoria(struct Ficha_Jugador **vector, int tam);

struct Ficha_Jugador lee();

void rellenar(struct Ficha_Jugador *vector, int tam);

void listar(struct Ficha_Jugador *vector, int tam);

int eliminar(struct Ficha_Jugador *vector, int *tam, char letra);

#endif