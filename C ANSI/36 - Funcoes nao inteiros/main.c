#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define pi 3.1415926535

/*
	Funções que retornam números não inteiros
	
	double nome(parametros...)
*/

// Protótipo das funções
float teste(float numero);
float area_circulo(float raio);

//const float pi = 3.1415926535;

int main(int argc, char *argv[]) {
	
	//	printf("%.2f\n", pow(2,3));
		
		float raio_usuario,resultado;
		
		printf("Informe o valor do raio: ");
		scanf("%f",&raio_usuario);
		
		resultado = area_circulo(raio_usuario);
		
		printf("A area eh: %f\n", resultado);		
		
		
	return 0;
}

float teste(float numero)
{
	float retornar;
	
	retornar = numero;
	
	return retornar;
	
	// ou return numero;
}

float area_circulo(float raio)
{
	// area do círculo = pi.R^2
	
	//return pi*pow(raio,2); 
	// ou return pi*raio*raio;
	return M_PI*raio*raio;
}
