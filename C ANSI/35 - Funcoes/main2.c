#include <stdio.h>
#include <stdlib.h>

/*
	Funções que retornam valores inteiros
*/
int soma(int n1, int n2);
int subt(int n1, int n2);
int mult(int n1, int n2);
int divi(int n1, int n2);

int main(int argc, char *argv[]) {
	
	int resultado = soma(8,7);
	
	printf("%d\n",resultado);
	
	printf("%d\n",soma(2,5));
	
	return 0;
}

soma(int n1, int n2)
{
	return (n1 + n2);
}

int subt(int n1, int n2)
{
	return (n1 - n2);
}

mult(int n1, int n2)
{
	return(n1*n2);
}

int divi(int n1, int n2) {
	return (n1/n2);
}
