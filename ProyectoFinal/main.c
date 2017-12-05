#include <stdio.h>
#include <stdlib.h>
#include "areaPerimetro.h"
 //Declarar Protipos
void repetir();
void mostrarMenu();
void calcularCuadrado();
void calcularTriangulo();
void calcularRectangulo();
void main(int argc, char *argv[]) {
	repetir();
	system("pause");
}
//Repite el Programa
void repetir(){
	char estado;
	do{
		mostrarMenu();
		printf("Desea Salir del Pinche Proamga Programa?(s/n):");
		scanf("%c",&estado);
		system("cls");
	}while(estado!='n');
}
//Muestra el Menu
void mostrarMenu(){
	int opcion;
	printf("\t\tBienvenido al Programa\n");
	printf("Instrucciones: Seleccione Una Opcion del 1 - 4,\n");
	printf("==========1) Area y Perimetro del Cuadrado ==============\n");
	printf("==========2) Area y Perimetro del Triangulo =============\n");
	printf("==========3) Area y Perimetro del Rectangulo ============\n");
	printf("==========4) Area y Perimetro del Trapecio ==============\n\n");
	printf("Introduce una Opcion: ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1: calcularCuadrado(); break;
		case 2: calcularTriangulo(); break;
		case 3: calcularRectangulo(); break;
		default: printf("Opcion No Valida");
	}
	printf("\n\n\nPulse una Tecla para Continuar");
	getch();
}
void calcularCuadrado(){
	float lado;
	printf("\nIngresa el valor del Lado: ");
	scanf("%f",&lado);
	printf("\nResultado::Area: %2.2f, Perimetro:%2.2f",areaCuadrado(lado),perimetroCuadrado(lado));
}
void calcularTriangulo(){
	float base,altura,ladoA,ladoB,ladoC;
	printf("\nIngresa el valor de la base: ");
	scanf("%f",&base);
	printf("\nIngresa el valor de la altura: ");
	scanf("%f",&altura);
	printf("\nIngresa el valor del Lado A: ");
	scanf("%f",&ladoA);
	printf("\nIngresa el valor del Lado B: ");
	scanf("%f",&ladoB);
	printf("\nIngresa el valor del Lado C: ");
	scanf("%f",&ladoC);
	printf("\nResultado::Area: %2.2f, Perimetro:%2.2f",areaTriangulo(base,altura),perimetroTriangulo(ladoA,ladoB,ladoC));
}
void calcularRectangulo(){
	float ladoA,ladoB;
	printf("\nIngresa el valor del Lado A: ");
	scanf("%f",&ladoA);
	printf("\nIngresa el valor del Lado B: ");
	scanf("%f",&ladoB);
	printf("\nResultado::Area: %2.2f, Perimetro:%2.2f",areaRectangulo(ladoA,ladoB),perimetroRectangulo(ladoA,ladoB));
}
