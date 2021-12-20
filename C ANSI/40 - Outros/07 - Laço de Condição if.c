#include <stdio.h>
#include <stdlib.h>

// Laço de Condição if



/*

  if(condição)
  {
      comandos;        
              }
              


else if(condição 02)
{
    comandos; 
     }
     
     else
     {
         comandos;
         }

*/


//if(condição) comando;     // outro comando unico

int main(int argc, char *argv[])
{
  int a;
  int b;
  
  printf("Digite um valor para a: ");
  scanf("%d", &a);
  getchar();
  printf("Digite um valor para b: ");
  scanf("%d", &b);
  getchar();
  
  if(a < b)
  {
       printf("a menor b\n\n");
       
       }
  else if (b < a)
  {
       printf("b menor que a\n\n");
       
       }
  else
  {
      printf("a eh igual b\n\n");
      
      }
  
  system("PAUSE");	
  return 0;
}
