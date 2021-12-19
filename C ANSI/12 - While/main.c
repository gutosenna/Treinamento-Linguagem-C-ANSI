#include <stdio.h>
#include <stdlib.h>

/*	

	int x;
	while(x<10) {
		comandos...
		x++;
	}
	-----------------------------
	
	while(1) {
		loop infinito
	}
	-----------------------------
	inicio:
		goto inicio
	
	-----------------------------
	do-while
	
	do {
	
		comandos
		
	} while(condição); 
	-----------------------------
	for(;;) looping infinito
	-----------------------------
	for(x=0;x>10;x++) {
		iteração
	}
	-------------------------------
*/

int main(int argc, char *argv[]) {
	
	int opcao=1;
	
	do {
		printf("Digite a opcao: 1 - sim, 2 - nao ");
		scanf("%d", &opcao);
		getchar();
	}while(opcao<1 || opcao>2);
	return 0;
}
