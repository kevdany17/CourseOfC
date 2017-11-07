#include <stdio.h>
#include <stdlib.h>
/*
	/ diagonal
	\ contra barra - slash - simbolode escape
*/
/*
	%d -> Enteros
	%f -> flotantes o doubles
	%c -> caracteres
	%s -> string
	\n -> retorno de linea 
*/
/* 
  float -> flotantes - 
  double -> doble presion 
*/
void main(int arg,char *args[]){
	// 5.6 -> 101.011
	float numero1;
	float numero2;
	int resultado;
	printf("Ingresa los Numeros  que quieres sumar\n");
	printf("Numero 1: ");
	scanf("%f",&numero1);
	printf("Numero 2: ");
	scanf("%f",&numero2);
	//Casteo -> Conversion de Tipo
	resultado =(int) numero1 + numero2; //operacion
	printf("El resultado de la Suma es: %d \n\n\n",resultado);
	system("pause");
	
}

