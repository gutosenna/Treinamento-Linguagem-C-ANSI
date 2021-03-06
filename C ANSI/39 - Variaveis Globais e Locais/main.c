/* 
	Curso de Linguagem C ANSI

	Aula 41: Vari?veis GLobais vs Vari?veis Locais

	Autor: Estudante S?rgio Senna	Data: mes/ano
	
 */

// --- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

// --- Prot?tipo das Fun??es Auxiliares ---
void funcao1();
void funcao2();

// --- Vari?veis Globais ---
int counter; // Vari?vel Global para contagem

// --- Fun??o Principal ---
int main(int argc, char *argv[]) 
{
	counter = 200;
	
	funcao1();

  system("PAUSE");		
  return 0;

} //end main

// --- Desenvolvimento das Fun??es Auxiliares ---
void funcao1()
{
	funcao2();
	
	printf("\n\nO valor de counter eh %d\n\n", counter); // imprimir o valor 200
		
} // end funcao1

void funcao2()
{
	int counter;
	
	for(counter = 1; counter < 20; counter++) printf("-");
	
} // end funcao2

/*
	Os 3 motivos para se evitar o uso de vari?veis globais:
	
	1) Ocupam a mem?ria durante todo o tempo em que o programa est? sendo 
	executado, n?o somente quando necess?rio;
	
	2) Usar uma vari?vel local torna menos geral uma fun??o, pois ela depender? 
	de alguma defini??o externa;
	
	3) Um grande n?mero de vari?veis globais pode ocasionar erros no projeto
	devido efeitos desconhecidos.
	
*/

