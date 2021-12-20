#include <stdio.h>
#include <stdlib.h>

// Matrizes (Vetores Multidimensionais
//Exemplo 01

// tipo nome[dim1][dim2][dim3]...[dimN]

#define DIML  3
#define DIMC  5

int main(int argc, char *argv[])
{
    int i,j; // variáveis para iteração
    
    int matriz[DIML][DIMC];
    
    for(i = 0; i  <DIML; i++)
    {
    for(j = 0;j < DIMC; j++)
    {
    scanf("%d", &matriz[i][j]);
    getchar();             
    } // end for aninhado            
  } // end for
  
  for(i=0; i < DIML; i++)
  {
     for(j =0; j<DIMC; j++)
     {
           printf("%4d", matriz[i][j]);
     }// end for aninhado   
     printf("\n");
  }// end for
    
  system("PAUSE");	
  return 0;
} // end main
