#include <stdio.h>
#include <stdlib.h>

// PONTEIROS &		*

// tipo *nome;

int main(int argc, char *argv[]) {
	
	int variavel = 250;		// vari?vel com o valor 250
	int *ponteiro;			// ponteiro para a vari?vell 
	int exibe;				// vari?vel que vai exibir o valor 250
	
	ponteiro = &variavel;	// ponteiro est? apontando para o endere?o da vari?vel
	
	exibe = *ponteiro;		// a vari?vel exibe recebe o conte?do do endere?o para o qual o ponteiro aponta
	
	printf("\n%d\n",exibe);
	
	return 0;
}
