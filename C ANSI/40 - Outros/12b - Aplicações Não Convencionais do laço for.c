#include <stdio.h>
#include <stdlib.h>

// Exemplo 3 // Aplica��es N�o Convencionais do la�o for

// Utilizar Fun��es

// Programa que calcule o quadrado de n�meros inteiros

// Solicita ao usu�rio n�meros inteiros e vai retornando o quadrado dos mesmos

// Condi��o para encerrar o programa: digitar o n�mero 0

// Utilizando la�o for

// Fun��es auxiliares:  //externa a fun��o principal (main)
void display();  // prot�tipo das fun��es
int leitura();   // vari�vel global
void square();   // prot�tipo das fun��es


int main(int argc, char *argv[])
{
  int valor;
  
  for(display(); valor = leitura(); display())
{
  square(valor);               
}
  
  system("PAUSE");	
  return 0;
} //end main

void display()
{
printf("Digite zero para sair\n");
printf("ou informe um inteiro para calcular o seu quadrado: ");     
} // end display

int leitura()
{
int t;  //armazena o n�mero digitado pelo usu�rio para calcular o seu quadrado
scanf("%d", &t);    // l� o que for digitado no teclado
return t;
}  // end leitura

void square(int numero)
{
  printf("%d\n", numero * numero);    // imprime o quadrado do numero
}
