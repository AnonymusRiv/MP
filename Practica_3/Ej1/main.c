#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(){
    char *entrada, *salida, aux;
    int tam=0;
    FILE* fichero1, *fichero2;
    printf("Inserte el nombre del fichero: ");
    while((aux=getchar())!='\n'){
        if((entrada = (char*) realloc(entrada, (tam+1)*sizeof(char))) == NULL)
		{
			printf("Error al guardar el nombre introducido\n");
			return (-1);
		}
		entrada[tam]=aux;
		tam++;
    }
    if((salida=(char *)malloc((tam + 11)*sizeof(char)))==NULL){    //Poner comprobación de reserva de memoria *IMPORTANTE*
        printf("\nError al reservar memoria.");
        exit(-1);
    }
    strcpy(salida, "mayusculas-");
    strcat(salida, entrada);
    fichero1=abirFicheroLectura(fichero1, entrada);
    fichero2=abrirFicheroEscritura(fichero2, salida);
    escribir(fichero1, fichero2);
    fclose(fichero1);
    fclose(fichero2);
}