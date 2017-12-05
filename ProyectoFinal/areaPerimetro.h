//Retorna Area del Cuadrado
float areaCuadrado(float lado){
	//Area = l * l
	//float area = lado * lado;	
	return lado * lado;	
}
float perimetroCuadrado(float lado){
	//Perimetro = lado * lado * lado * lado
	return lado * 4;
}
float areaTriangulo(float base, float altura){
	return (base * altura) / 2;
}
float perimetroTriangulo(float lado1,float lado2,float lado3){
	return lado1 + lado2 + lado3;
}
float areaRectangulo(float lado1,float lado2){
	return lado1 * lado2;
}
float perimetroRectangulo(float lado1,float lado2){
	float temp = (lado1 * 2);
	float temp2 = (lado2 *2);
	return temp + temp2;
}

float temp = lado1 + lado2 + (lado3 * 2);
