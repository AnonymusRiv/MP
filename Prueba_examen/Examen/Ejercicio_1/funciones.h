#ifndef FUNCIONES_H
#define FUNCIONES_H

#define LENGHT 100
struct datos{
    int codigo;
    char nombre[LENGHT];
    float pesoKg;
    float alturaM;
};

/*
ordenación
    ascendente -> índice de masa (peso/altura²)
    descendente -> nombre
*/

void ejercicio1(int nEle, struct datos* Vector, int criterio);
/*
    nEle: número de elementos del vector.
    Vector: el vector a ordenar
    criterio: ordenación del vector
        0: ascendente por imc
        1: descendente por nombre
*/

int menorimc(const void *e1, const void *e2);

int menornombre(const void *e1, const void *e2);

#endif