// -- Bibliotecas auxiliares --
#include <stdio.h>
#include <stdlib.h>

/*
	FUNCOES
	
	tipo_da_funcao nome_da_funcao(parametros_da_funcao)
	
*/

// -- Protótipos de funções --
void imprimir();
void imprimir2();
void soma(int num1, int num2);
int soma1(int n1, int n2);


// -- Função Principal --
int main(int argc, char *argv[]) 
{
	int r;
	
	imprimir();
	imprimir2();
	soma(5, 7);
	r = soma1(10,20);
	printf("\nFuncao soma1: %d",r);				

  return 0;
} // end main

void imprimir() 
{
	printf("Mensagem01\n");
	printf("Mensagem02\n");
	printf("Mensagem03\n");
	printf("Mensagem04\n");
}

void imprimir2() 
{
	printf("Mensagem05\n");
	printf("Mensagem06\n");
	printf("Mensagem07\n");
	printf("Mensagem08\n");
}

void soma(int num1, int num2)
{
	int resultado;
	
	resultado = num1 + num2;
	
	printf("A soma eh: %d\n",resultado);
}

int soma1(int n1, int n2) 
{
	int resultado;
	
	resultado = n1 + n2;
	
	return resultado;
}

