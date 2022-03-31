#include <stdio.h>
#include <stdlib.h>
#include "libMatrices.a"

int main(){
    int nFil, nCol, **matriz, *minimoCol;
    printf("Inserte el número de filas de la matriz: ");
    scanf("%d", &nFil);
    printf("Inserte el número de columnas de la matriz: ");
    scanf("%d", &nCol);
    matriz=reservaMemoria(nFil, nCol);
    printf("La matriz se ha reservado correctamene\n");
    rellenaMatriz(matriz, nFil, nCol);
    printf("La matriz se ha rellenado correctamente\n");
    imprimeMatriz(matriz, nFil, nCol);
    minimoCol=minCol(matriz, nFil, nCol);
    printf("El vector con los mínimos de cada columna es:\n");
    for(int i=0; i<nCol; i++){
        printf("vector[%d]: %d\n", i, minimoCol[i]);
    }
    liberarMemoria(&matriz, nFil);
    printf("Matriz liberada con éxito\n");
}