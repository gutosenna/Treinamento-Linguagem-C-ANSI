#include <stdio.h>
#include <stdlib.h>

// Operadores de Assinalamento, Incremento e Decremento

int main(int argc, char *argv[])
{
  int a=0, b=0, c=0, d=0;
  
  a++; // a = 0 + 1 = 1
  
  b--; // b = 0 - 1 = -1
  
  c = 1; // c = 1
  
  c += a; // c = c + a = 2
  
  d -= c; // d = d - c = -2
  
  printf("a = %d\nb = %d\nc = %d\nd = %d\n,",a,b,c,d); // imprime as vari�veis na ordem da esquerda pra direita
                                                      //de acordo com as vari�veis inscritas
  
  
  system("PAUSE");	
  return 0;
}
