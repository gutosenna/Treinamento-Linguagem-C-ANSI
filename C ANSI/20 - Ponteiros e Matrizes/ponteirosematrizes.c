#include <stdio.h>
#include <stdlib.h>

// Ponteiros e Matrizes

int main(int argc, char *argv[]) 
{

	char matriz[20] = "Teste de string";
	
	char *point;
	
	point = matriz; // exibe o primeiro caracter
	
	point = point + 9;
	
	printf("\n%c\n", *point);	
	
 return 0;
}
