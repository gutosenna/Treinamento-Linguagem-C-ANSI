#include <stdio.h>
#include <stdlib.h>

// PONTEIROS, ENCONTRANDO PROBLEMAS

/*
  Este programa não deve ser executado

*/

int main(int argc, char *argv[])
{
  int var;
  int *pointer;
  
  var = 46;
  
  pointer = &var; /// errado, deve apontar o endereço (&) da variável e não o valor
  
  printf("%d\n\n", *pointer);
  
  system("PAUSE");	
  return 0;
}
