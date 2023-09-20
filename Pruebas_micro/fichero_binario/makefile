all: saludo main.x clean

.PHONY: saludo
saludo:
	@echo Ejecutando el makefile

main.x: main.o funciones.a funciones.h
	gcc -o main.x main.o funciones.a

main.o: main.c
	gcc -c main.c

funciones.a: funciones.o
	ar -rsv funciones.a funciones.o

funciones.o: funciones.c funciones.h
	gcc -c funciones.c

.PHONY: clean
clean:
	rm *.o
	rm *.a