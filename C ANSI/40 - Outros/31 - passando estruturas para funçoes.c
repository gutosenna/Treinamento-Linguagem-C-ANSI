#include <stdio.h>
#include <stdlib.h>

// passando estruturas para funçoes

struct estrutura
{
 int a, b;
 
 char c;       
       
};

void imprimir(struct estrutura parametro)
{
 printf("d\n", parametro.a);  
     
}

int main(int argc, char *argv[])
{
  struct estrutura argumento;
  
  argumento.a = 1200;
  
  imprimir(argumento);
  
  
  system("PAUSE");	
  return 0;
}


/* pode ser dado dessa maneira

struct estrutural
{
   int a;
   int b;
   char c;
   float d;
   char s[10];  
          
}variavel;

func1(&variavel.a);
func2(&variavel.b);
func3(&variavel.s[10]);

*/
