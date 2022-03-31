#include <stdio.h>


int main(){
    char cadena[50];
    printf("Introduzca una cadena: ");
    fgets(cadena, 50, stdin);
    printf("La cadena leida es: %s", cadena);
}

/*
int nEle=0;
char aux, *frase=NULL;
while ((aux=getchar()!='\n')){
    frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
    frase[nEle]=aux;
    nEle++;
}
frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
frase[nEle]='\0';

*/