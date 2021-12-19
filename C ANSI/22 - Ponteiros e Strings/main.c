#include <stdio.h>
#include <stdlib.h>

// Ponteiros e Strings

/*
	Sintaxe e da Semântica
	
*/

int main(int argc, char *argv[]) {
	
	char str[50];
	
	char *point;
	
	int i;
	
	printf("Entre com uma string: ");
	gets(str);
	
	// Encontrar o primeiro espaço ou o fim da string
	
	for(i=0;str[i] && str[i]!= ' '; i++); // encontramos o primeiro espaço na string
	
	point = &str[i];
	
	printf("\n");
	printf(point);
	printf("\n");
	
	
	
	return 0;
}

/*
	char *point;
	
	point = "Teste de string qualquer";
	
	printf("\n");
	printf(point);	
	printf("\n");

*/
