#include <stdio.h>
#include <stdlib.h>
/*
	Aplica��es n�o convenncionais do la�o for
	
	utilizar mais uma vari�vel no la�o for
	
	imprimir os n�meros pares de 0 a 100

*/


int main(int argc, char *argv[]) {
	
	int i, j;
	
	for(i=0,j=0;i+j<=100;i++,j++) {
		
		printf("%d\n",i+j);
	}
	
	system("PAUSE");
	return 0;
}
