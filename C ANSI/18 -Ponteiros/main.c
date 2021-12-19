#include <stdio.h>
#include <stdlib.h>

// PONTEIROS &		*

// tipo *nome;

int main(int argc, char *argv[]) {
	
	int variavel = 250;		// variável com o valor 250
	int *ponteiro;			// ponteiro para a variávell 
	int exibe;				// variãvel que vai exibir o valor 250
	
	ponteiro = &variavel;	// ponteiro está apontando para o endereço da variável
	
	exibe = *ponteiro;		// a variável exibe recebe o conteúdo do endereço para o qual o ponteiro aponta
	
	printf("\n%d\n",exibe);
	
	return 0;
}
