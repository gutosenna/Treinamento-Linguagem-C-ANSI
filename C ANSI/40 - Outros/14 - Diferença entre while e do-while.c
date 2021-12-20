#include <stdio.h>
#include <stdlib.h>
//Diferença entre while e do-while
/*

   intx;
   
   while(x<10)
   {
   // comandos...
      x++;
   }
   _________________________________
   while(1)
   {
                 loop infinito       
   }  //end
   _________________________________
   for(;;)  
   {
      // loop infinito    
   }
  __________________________________ 
   
   
   inicio:
          
          goto inicio    // loop infinito
   
   ________________________________
   
   
   
   for(x=0; x<10;x++)  //iteração


do-while


do
{
     //comandos        
}while (condição)



*/

int main(int argc, char *argv[])
{
    int opcao = 1;
    
  do
  {
  printf("Digite a opcao: 1 - sim, 2 - nao ");
  scanf("%d", &opcao);
  getchar();
  
  }while(opcao < 1 || opcao > 2);
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
