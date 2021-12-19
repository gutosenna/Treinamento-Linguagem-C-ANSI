#include <stdio.h>
#include <stdlib.h>

// Expressõe com Ponteiros

int main(int argc, char *argv[]) {

	int teste;
	
	int *point1, *point2;
	
	teste = 500;
	
	point1 = &teste;
	
	point2 = point1;
	
	printf("\n No local %p ", point2); // endereço de teste
	
	printf(" encontra-se o valor %d\n ", *point2); // o valor de teste
	
	system("PAUSE");
	return 0;
}
