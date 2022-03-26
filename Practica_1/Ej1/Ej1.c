#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, *b, **c;
    double d, *e, **f;
    char g, *h, **i;

    printf("\nEl valor de un entero es: %zu ", sizeof(a));
    printf("\nEl valor de un puntero a entero es: %zu ", sizeof(b));
    printf("\nEl valor de un doble puntero a entero es: %zu ", sizeof(c));
    printf("\nEl valor de un flotante es: %zu ", sizeof(d));
    printf("\nEl valor de un puntero a flotante es: %zu ", sizeof(e));
    printf("\nEl valor de un doble puntero a flotante es: %zu ", sizeof(f));
    printf("\nEl valor de un caracter es: %zu ", sizeof(g));
    printf("\nEl valor de un puntero a caracter es: %zu ", sizeof(h));
    printf("\nEl valor de un docle puntero a caracter es: %zu ", sizeof(i));
    printf("\n");
}