#include <stdio.h>
#include <stdlib.h>

//Declarar Procedimiento
void saludar();
//Prototipo de la funcion
void sumar(int operando1,int operando2);
void restar(int operando1,int operando2);
//Variable Global
int resultado;
void main(int argc, char *argv[]) {
	//Llamar Al Procedimiento
	saludar();
	int num1,num2;
	printf("Introduce el Primer Numero: \n");
	scanf("%d",&num1);
	printf("Introduce el Segundo Numero: \n");
	scanf("%d",&num2);
	//Argumentos 
	sumar(num1,num2);
	printf("El Total de la Suma es: %d\n",resultado);
	restar(num1,num2);
	printf("El Total de la Resta es: %d\n",resultado);
	system("pause");
	
}
//Describir el Procedimiento
void saludar(){
	printf("Bienvenido al Programa");
	//getch();
}

void sumar(int operando1,int operando2){
	//Parametro operando1
	//parametro operando2
	//Solo se llaman parametros  cuando escribo la funcion
	resultado  = operando1 + operando2;
}
void restar(int operando1,int operando2){
	resultado = operando1 - operando2;
}
