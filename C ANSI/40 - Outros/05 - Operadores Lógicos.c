#include <stdio.h>
#include <stdlib.h>

// Operadores Lógicos

int main(int argc, char *argv[])
{
  char a = 1;
  char b = 2;
  char c = 3;
  char d = 1;
  
  if(a > b && a < c)
  {
       
       printf("Condicao1 verdadeira\n");
   }
  if(c == d || d == b) 
  {
       printf("Condicao 2 verdadeira\n");
       
       }
  else 
  {
       printf("Nenhuma condicao verdadeira\n");
       }
  
  system("PAUSE");	
  return 0;
}
