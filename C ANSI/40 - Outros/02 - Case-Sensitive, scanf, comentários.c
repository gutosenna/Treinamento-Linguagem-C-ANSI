#include <stdio.h>
#include <stdlib.h>

//Este � o projeto da aula 2
// do curso de linguagem C
// Case-Sensitive, scanf, coment�rios

int main(int argc, char *argv[])
{
  int numero; // isto � uma vari�vel

 printf("Digite um numero: "):  // imprime a frase na tela
 scanf("%d", &numero); //l� o numero que o usuario digita
 getchar(); // limpa o buffer do teclado do PC
                 
 printf("O numero eh igual a: %d\n\n");
 
  system("PAUSE");	
  return 0;
}
