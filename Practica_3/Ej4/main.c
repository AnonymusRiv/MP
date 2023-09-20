#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
    int opcion, tam=0;
    char *nombre, aux, *fich;
    struct libros libro;
    FILE* fichero;
    printf("Inserte el nombre del fichero de texto: ");
    while((aux=getchar())!='\n'){
            if((fich = (char*) realloc(fich, (tam+1)*sizeof(char))) == NULL)
            {
                printf("Error al guardar el nombre introducido\n");
                return (-1);
            }
            fich[tam]=aux;
            tam++;
    }
    menu();
    while(opcion != 6){
        switch (opcion){
        case 1:
            printf("Inserte el nombre del título ");
            while((aux=getchar())!='\n'){
            if((nombre = (char*) realloc(nombre, (tam+1)*sizeof(char))) == NULL)
            {
                printf("Error al guardar el titulo introducido\n");
                return (-1);
            }
            nombre[tam]=aux;
            tam++;
            }
        break;
        case 2:

        break;
        case 3:

        break;
        case 4:

        break;
        case 5:

        break;
        case 6:

        break;
        case 7:

        break;
        default:
            printf("Opción no válida\n");
        }
    }
}