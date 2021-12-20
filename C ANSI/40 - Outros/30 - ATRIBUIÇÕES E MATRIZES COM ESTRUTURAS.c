#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// STRUCT - ESTRUTURA DE DADOS 

// MATRIZ COM ESTRUTURAS

//Atribuições

int main(int argc, char *argv[])
{
    struct minha_estrutura
    {
           int inteiro;
           double flutuante;       
           
    }exemplo1, exemplo2;
    
    exemplo1.inteiro = 100;
    
    exemplo2 = exemplo1;  // Atribuindo uma struct a outra
    
    printf("%d \n", exemplo2.inteiro);
    
  
  system("PAUSE");	
  return 0;
}
