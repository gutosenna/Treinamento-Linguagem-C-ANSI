#include <stdio.h>
#include <stdlib.h>
/*
	Aplicações não convenncionais do laço for
	
	utilizar mais uma variável no laço for
	
	imprimir os números pares de 0 a 100

*/


int main(int argc, char *argv[]) {
	
	int i, j;
	
	for(i=0,j=0;i+j<=100;i++,j++) {
		
		printf("%d\n",i+j);
	}
	
	system("PAUSE");
	return 0;
}
