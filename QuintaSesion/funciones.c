#include <stdio.h>

//Procedimiento
void iniciar();
//Funcion
int calcularArea(int lado1,int lado2);
int num1,num2;
void main(){
	iniciar();
	printf("El del Rectangulo Area es: %d",calcularArea(num1,num2));
	getch();
}
void iniciar(){
	printf("\tBienvenido al Programa\n");
	printf("Ingresa el Primer Numero:");
	scanf("%d",&num1);
	printf("Ingresa el Segundo Numero:");
	scanf("%d",&num2);
}
int calcularArea(int lado1,int lado2){
	int resultado;
	resultado = lado1 * lado2;
	return resultado;
}
