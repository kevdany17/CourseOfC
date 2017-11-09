#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int color;
	printf("Escribe numero: ");
	scanf("%d",&color);
	//Selector (Variable)
	switch(color){
		//Caso o Rama, 1 to N
		case 1: printf("Azul\n"); break;
		case 2: printf("Amarillo\n"); break;
		case 3: printf("Rojo\n"); break;
		case 4: printf("Verde\n"); break;
		//POr defecto
		default: printf("Numero no Encontrado\n"); 
	}
	system("pause");
}
