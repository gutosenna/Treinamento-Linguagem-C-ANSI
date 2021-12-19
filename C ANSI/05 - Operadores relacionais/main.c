#include <stdio.h>
#include <stdlib.h>

/*
   
   if(condição 01)
   {
               
     comandos ;           
   }
   
   else if(condição 02)
   {
        
      comandos;  
   }
   
   else if(condição 03)
   {
        
      comandos;  
   }
   
   else
   {
     comandos;    
       
   }
   
   if(condição) comando;
   
   

*/

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    printf("Digite um valor para a:");
    scanf("%d",&a);
    getchar();
    printf("Digite um valor para b:");
    scanf("%d",&b);
    getchar();
    
    if(a < b) printf("a menor que b\n\n");     
    else if(b < a) printf("b menor que a\n\n");     
    else printf("a eh igual a b\n\n"); 
    
  
  system("PAUSE");	
  return 0;
}
