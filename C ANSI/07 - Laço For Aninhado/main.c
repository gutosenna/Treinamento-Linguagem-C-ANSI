#include <stdio.h>
#include <stdlib.h>

/*
for(inicialização;condição;incremento)
{
	comandos;

*/
int main(int argc, char *argv[]) {
	int i,j;
/*	
	for(i=-0;i<10;i++) {
		printf("Linha %d\n",i);
	}
	printf("-----------------\n");
	for(i=9;i>0;i--) {
		printf("Linha %d\n",i);
	}
	*/
	for(i=0;i<10;i++) {
		printf("\nLinha %d\n",i);
		for(j=0;j<5;j++) {
			printf("\nTeste %d\n",j);
		}
	}
	return 0;
}
