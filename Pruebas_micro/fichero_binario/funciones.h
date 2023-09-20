#ifndef FUNCIONES_H
#define FUNCIONES_H

FILE* abrirficheroescritura(char *nombre);

FILE* abrirficherolectura(char *nombre);

void escribe(FILE* fichero);

void lee(FILE* fichero);

#endif