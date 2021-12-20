#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Máquina de Codificação, Declaração Continue

/*
  Name: Sérgio Augusto de Senna
  Copyright: sesenna@hotmail.com
  Author: Guto Senna
  Date: 11/01/21 14:43
  Description: Máquina de codificação
*/
// continue
void codifica(); // protótipo da função

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
