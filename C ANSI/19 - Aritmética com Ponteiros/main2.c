#include <stdio.h>
#include <stdlib.h>

// Aritm�tica com Ponteiros adi��o ou subtra��o

int main() 
{
	int *itPoint;
	char *chPoint;
	float *flPoint;
	
	printf("\n %p \n", itPoint); // endere�o do ponteiro inteiro
	
	itPoint++;
	
	printf("\n %p \n", itPoint); // endere�o deslocado em 4 bytes
	
}
