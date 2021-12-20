#include <stdio.h>
#include <stdlib.h>

//Este é o projeto da aula 2
// do curso de linguagem C
// Case-Sensitive, scanf, comentários

int main(int argc, char *argv[])
{
  int numero; // isto é uma variável

 printf("Digite um numero: "):  // imprime a frase na tela
 scanf("%d", &numero); //lê o numero que o usuario digita
 getchar(); // limpa o buffer do teclado do PC
                 
 printf("O numero eh igual a: %d\n\n");
 
  system("PAUSE");	
  return 0;
}
