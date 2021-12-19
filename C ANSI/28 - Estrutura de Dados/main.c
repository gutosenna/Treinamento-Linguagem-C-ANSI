#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Estrutura de dados
/*
	struct
*/
struct componente
{
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
};

struct componente comp;

int main(int argc, char *argv[]) {
	
	printf("Tipo do componente ____________________: ");
	fflush(stdin);
	fgets(comp.tipo, 20, stdin);
	
	printf("Referencia do componente _________________: ");
	fflush(stdin);
	fgets(comp.referencia,4,stdin);
	
	printf("Numero da referencia ________________: ");
	scanf("%c", &comp.num_ref);
	getchar();
	
	printf("Valor do componente ____________________: ");
	scanf("%d", &comp.valor);
	getchar();
	
	printf("Unidade _____________________: ");
	fflush(stdin);
	fgets(comp.unidade,10, stdin);
	
	printf("\n\nCOMPONENTE CRIADO: \n\n");
	printf("%s\n",comp.tipo);
	printf("%s", comp.referencia);
	printf("%c", comp.num_ref);
	printf(" \nValor: %d", comp.valor);
	printf(" %s \n\n",comp.unidade);
	
	return 0;
}


/*
struct componente
{
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
}comp;
*/
