/* Condiciones*/
#include <stdio.h>
#include <stdlib.h>
 void main(){
 	int numero;
 	printf("Ingresa un numero Entero: ");
 	scanf("%d",&numero);
 	//If -> SI
 	if(numero==0){
	 	//Entonces -> Verdadero 1
	 	printf("El numero :%d es neutro\n",numero);
	}else if(numero>0){
	 	//SI_NO Si -> Entonces
  	 	printf("El numero :%d es positivo\n",numero);
    }else{
    	//SI_NO -> False o 0
    	printf("El numero :%d es Negetivo\n",numero);
	}  
 	system("pause");
 }
 /*
 	Operadores 
 	Operadores Aritmeticos +,-,*,/,%
 	Operadores Logicos o Booleanos >,<, >=,<=,!=,==, 
 	
 	true 1
 	false 0
 */
