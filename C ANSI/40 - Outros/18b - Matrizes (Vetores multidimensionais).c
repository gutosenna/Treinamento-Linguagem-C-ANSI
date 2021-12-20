#include <stdio.h>
#include <stdlib.h>

// Matrizes (Vetores Multidimensionais)
//Exemplo 02

// tipo nome[dim1][dim2][dim3]...[dimN]

#define DIML  5
#define DIMC  30

int main(int argc, char *argv[])
{
    int i,j; // variáveis para iteração
    
    int nomes[DIML][DIMC];
    
    for(i = 0; i  <DIML; i++)
    {
          
    printf("Entre com a linha %d ", i);
    scanf("%s", nomes[i]);
    getchar();             
    } // end for aninhado     
    
    for(i=0; i< DIML; i++) 
    {
    printf("O nome %d eh ", i);
    printf(nomes[i]);   
    printf("\n");
    }   
  
    
  system("PAUSE");	
  return 0;
} // end main
