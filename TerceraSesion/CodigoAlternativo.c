/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float monto,descuento,compra;
    char salida;
    do{
    printf("Ingresa la Cantidad ");
    scanf("%f",&monto);
    if (monto>0)
    {
        if (monto>=74){
        descuento=monto*0.15;
        }
        else {
            descuento=monto*0.10;
        }
        compra=monto-descuento;
        printf (" el total de su compra es %f ",compra);
    }
    else {
        printf ("la cantidad ingresada es negativa ");
    }
    printf ("para salir ingrese la letra s");
    scanf ("%c",&salida);
    }while(salida!='s'); 

    return 0;
}



