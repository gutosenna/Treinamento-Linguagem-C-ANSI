#include <stdio.h>
#include <stdlib.h>

#define dim 6

// PONTEIROS E MATRIZES 01

int main(int argc, char *argv[])
{
  char matriz[20] = "Teste de string";
  
  char *point;
  
  point = matriz;
  
  point += 9; // point = point + 9;
  
  // point = &matriz[dim];  // apontará para o elemento definido.

  
  printf("\n%c\n", *point);
  
  
  system("PAUSE");	
  return 0;
}
