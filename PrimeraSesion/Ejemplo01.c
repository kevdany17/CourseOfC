#include <stdio.h>
#include <stdlib.h>
//Varibles Globales
int numero1;
void main(int argc, char *argv[]) {
	//Alfanumericos -> char[0]
	//Caracter -> char
	//logicos -> boolean
	//Decimal -> float. double
	//Variable es espacio en memoria, cambia con el flujo del programa
	//Variable Local
	//Asignar Variable Global
	numero1 = 2;
	int numero; //Declarar
	numero = numero1 + 2; //Asignacion
	printf("%d",numero);
	//Funcion -> llama a pause 
	getch();
}


