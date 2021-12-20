#include <stdio.h>
#include <stdlib.h>
// Máquina de Codificação, Declaração Continue
/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/01/21 14:43
  Description: 
*/

int main(int argc, char *argv[])
{
  int x;
  
  for(x=0; x<=100; x++)
  {
           if(x % 2) continue; // pula todo numero impar / se tiver resto 
                      
    printf("%d\n", x);       
  }//end for
  
  system("PAUSE");	
  return 0;
}
