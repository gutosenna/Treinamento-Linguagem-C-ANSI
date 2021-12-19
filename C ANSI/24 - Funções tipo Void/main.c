#include <stdio.h>
#include <stdlib.h>

// Funções do Tipo Void

//void linha();
//void imprime(char *frase);

int main(int argc, char *argv[]) {
	
	char f[51];
	int comp1, comp2;
	char s[] = {'o','l','a','s'};
	
	printf("Digite uma frase: ");
	scanf("%s",&f);
	comp1 = strlen(f);
	comp2 = strlen(s);
	getchar();
	
	printf("funcao printf: %s\n",f);
	linha();
	imprime(f);
	linha();
	printf("funcao printf: %s\n",s);
	linha();
	imprime(s);
	printf("Comprimento do vetor 1: %d e vetor 2: %d",comp1,comp2);
	return 0;
} // end main

 void linha() 
{
	printf("-----------------------------\n");
} // end linha

void imprime(char *frase) 
{
	printf("Funcao imprime: %s	\n",frase);
	printf("\n");
}
