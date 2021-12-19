#include <stdio.h>
#include <stdlib.h>

// Aritmética com Ponteiros adição ou subtração

int main() 
{
	int *itPoint;
	char *chPoint;
	float *flPoint;
	
	printf("\n %p \n", itPoint); // endereço do ponteiro inteiro
	
	itPoint++;
	
	printf("\n %p \n", itPoint); // endereço deslocado em 4 bytes
	
}
