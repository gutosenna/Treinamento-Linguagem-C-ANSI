#include <stdio.h>
#include <stdlib.h>

#define DIML	5
#define DIMC	30

/*
	tipo nome[dim1][dim2][dim3]...[dimn]
*/

int main(int argc, char *argv[]) 
{
	
	unsigned int i,j; // vari?veis para itera??o
	
	int nomes[DIML][DIMC];
	
	for(i=0;i<DIML;i++)
	{ 
		printf("Entre com a linha %d: ",i);
		scanf("%s", &nomes[i]);
	}	
	
	for(i=0;i<DIML;i++)
	{
		printf("O nome %d eh: ",i);
		printf(nomes[i]);
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}
