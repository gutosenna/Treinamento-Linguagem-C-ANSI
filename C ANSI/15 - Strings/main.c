#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// STRINGS - CADEIA DE CARACTETES

//strcat[dest, orig) - Concatena cadeia origem no final de destino.
//strncat(dest, orig, n) - Concatena cadeia orig no final de dest, usando no máximo n caracteres de orig.
//strcmp(str1,str2) - Compara as duas cadeias. Retorna zero se iguais, menor que 0 se str<str2, maior que 0 se str1>str2. 
//strcmpi(str1,str2) - Compara as duas cadeias sem levar em conta maiúsculas e minúsculas.
//strlen(str) - Calcula o comprimento da cadeia sem o caractere nulo.
//strlwr(str) - Converte cadeia para minúsculas.
//strupr(str) - Converte cadeia para maiúsculas.
//strcpy(dest, orig) - Copia cadeia origem para destino.

int main(int argc, char *argv[]) {
	
	char nome[51], sobrenome[51];
	
	int comp1, comp2;
	
	printf("Digite seu nome ");
	scanf("%s", &nome);
	comp1 = strlen(nome);
	getchar();
	
	printf("Digite seu sobrenome ");
	scanf("%s", &sobrenome);
	comp2 = strlen(sobrenome);
	getchar();
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
	
	printf("Ola %s!\n", nome);
	
	printf("Seu nome tem %d caracteres e seu nome tem %d catacteres\n", comp1,comp2);
	
	strlwr(nome);
	strupr(nome);
	
	printf("\n");
	printf(strlwr(nome));
	
	printf("\n");
	printf(strupr(nome));
	printf("\n");
	
	strcpy(nome, "outro nome");
	printf(nome);
	printf("\n");
	
	return 0;
}
