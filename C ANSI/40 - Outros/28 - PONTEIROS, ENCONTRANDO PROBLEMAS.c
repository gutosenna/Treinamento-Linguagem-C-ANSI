#include <stdio.h>
#include <stdlib.h>

// PONTEIROS, ENCONTRANDO PROBLEMAS

/*
  Este programa n�o deve ser executado

*/

int main(int argc, char *argv[])
{
  int var;
  int *pointer;
  
  var = 46;
  
  pointer = &var; /// errado, deve apontar o endere�o (&) da vari�vel e n�o o valor
  
  printf("%d\n\n", *pointer);
  
  system("PAUSE");	
  return 0;
}
