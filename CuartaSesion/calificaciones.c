#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	//Declaracion de Arreglos
	float calificaciones[5];
	//Contador
	int i; 
	//Acumulador
	float acumulador = 0;
	for(i=0;i<5;i++){
		printf("Ingresa la Calificacion: %d\n",i+1);
		scanf("%f",&calificaciones[i]);
	}
	for(i=0;i<5;i++){
		acumulador = acumulador + calificaciones[i];
		//printf(" Calificacion: %d %0.1f\n",i+1,calificaciones[i]);
	}
	printf("Total: %2.2f\n",acumulador);
	//float promedio = acumulador / 5;
	printf("Promedio de Calificaciones: %2.2f\n",acumulador / 5);
	system("pause");
}
