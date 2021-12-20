#include <stdio.h>
#include <stdlib.h>

/* 
	Passando structs para funções
	
	
	Funções = tipo nome_funcao(parametros/argumentos);

*/

struct estrutura
{
	int a, b;
	
	char c;	
};

void imprimir(struct estrutura parametro)
{
	printf("%d\n", parametro.a);
}

int main(int argc, char *argv[]) {
	
	struct estrutura argumento;
	
	argumento.a = 1200;
	
	imprimir(argumento);
	
	return 0;
}
