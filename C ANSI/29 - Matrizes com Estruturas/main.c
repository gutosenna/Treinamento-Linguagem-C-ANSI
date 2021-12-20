#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Estrutura de dados
/*
	struct
	
	Matrizes de Estruturas
	
	Atribuições
	
*/


int main(int argc, char *argv[]) {
	
	struct minha_estrutura
	{
		int inteiro;
		double flutuante;	
	}exemplo1, exemplo2, exemplo3, exemplo4;
	
	exemplo1.inteiro = 100;
	
	exemplo2 = exemplo1; // Atribuindo uma struxt a outra
	
	printf("%d \n", exemplo2.inteiro);
	
	exemplo3.flutuante = 55.7;
	
	exemplo4 = exemplo3; // Atribuindo uma struxt a outra
	
	printf("%lf \n", exemplo4.flutuante);
	
	
	return 0;
} // end main
