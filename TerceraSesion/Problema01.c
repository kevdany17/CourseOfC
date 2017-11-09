#include <stdio.h>
//Variable Global
float monto;
//Procedimiento
void leerMonto(); //Camel Case -> camelLowerCase
float calcularDescuento(); 
void main() {
	float compra;
	char salida;
	do{
		leerMonto();
		compra = monto - calcularDescuento();
		printf("Total de la Compra: %2.2f\n",compra);
		printf("Pulse s para salir: \n");
		scanf("%c",&salida);
	}while(salida!='s');	
}
//procedimiento
void leerMonto(){
	do{
		printf("Escribe el Monto de la Compra, No se Acepta Cero: ");
		scanf("%f",&monto);
	}while(monto==0);
}
//Funcion
float calcularDescuento(){
	//Variable Local
	float descuento;
	if(monto>74){
		descuento = monto * 0.15;
	}else if(monto<=74){
		descuento = monto * 0.10;
	}
	return descuento;
}
