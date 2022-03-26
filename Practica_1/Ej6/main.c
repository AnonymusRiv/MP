#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2, resultado;
    printf("Inserte dos valores:\n");
    printf("Valor 1: ");
    scanf("%d", &num1);
    printf("Valor 2: ");
    scanf("%d", &num2);
    printf("El menor valor con la funcion minimo() es : %d\n", minimo(num1, num2));
    minimo_referencia(num1, num2, &resultado);
    printf("El menor valor con la funcion minimo_referencia() es : %d\n", resultado);

}