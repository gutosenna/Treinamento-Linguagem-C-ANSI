#include <stdio.h>
#include <stdlib.h>

// Exemplo 3 // Aplicações Não Convencionais do laço for

// Utilizar Funções

// Programa que calcule o quadrado de números inteiros

// Solicita ao usuário números inteiros e vai retornando o quadrado dos mesmos

// Condição para encerrar o programa: digitar o número 0

// Utilizando laço for

// Funções auxiliares:  //externa a função principal (main)
void display();  // protótipo das funções
int leitura();   // variável global
void square();   // protótipo das funções


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
int t;  //armazena o número digitado pelo usuário para calcular o seu quadrado
scanf("%d", &t);    // lê o que for digitado no teclado
return t;
}  // end leitura

void square(int numero)
{
  printf("%d\n", numero * numero);    // imprime o quadrado do numero
}
