#Este es el makefile

all: main.x clean
	@echo Ejecutando el programa de <Carlos>

main.x: main.o funciones.o
	gcc -o main.x main.o funciones.o

main.o: main.c
	gcc -c main.c

funciones.o: funciones.c
	gcc -c funciones.c

.PHONY: clean
clean:
	@echo Borrando ficheros.o
	rm *o