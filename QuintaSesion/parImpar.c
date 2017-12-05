#include <stdio.h>

void iniciar();
void calcularParImpar();
int num,residuo;
int main()
{    
    iniciar();
    calcularParImpar();
	getch();
    return 0;
}
void iniciar(){
	printf("introduce un numero y te digo si es par o impar \n");
    scanf("%d",&num);
}
void calcularParImpar(){
	residuo=num%2;
    if (residuo==0)
    printf ("el numero %d es par",num);
    else
    printf ("el numero %d es impar ",num);
}
