#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//M�quina de Codifica��o, Declara��o Continue

/*
  Name: S�rgio Augusto de Senna
  Copyright: sesenna@hotmail.com
  Author: Guto Senna
  Date: 11/01/21 14:43
  Description: M�quina de codifica��o
*/
// continue
void codifica(); // prot�tipo da fun��o

int main(int argc, char *argv[])
{
  printf("Entrar com as letras para codificar\n");
  printf("Digite $ para sair. \n\n");
  codifica();
  
  
  system("PAUSE");	
  return 0;
} // end main

void codifica()
{
 char ok = 0, ch;
 
 while(!ok) // false
 {
     ch = getche();
     if(ch == '$')
     
     {
           ok = 1;
           printf("\n\n");
           continue;
     } // end if  
     printf(" = %c\n", ch + 2);    
 } // end while
      
} //end void codifica
