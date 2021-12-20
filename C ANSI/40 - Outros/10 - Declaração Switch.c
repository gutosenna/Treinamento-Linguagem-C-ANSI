#include <stdio.h>
#include <stdlib.h>

// Declaração Switch 


/*

         switch(variavel)
         {
              case constante1:
                   comandos;
                   break;
              case constante2:
                   comandos;
                   break;
                   .
                   .
                   .
                 default:
                 comandos;       
                    
                         }



*/
//  Conversor de base numérica : decima > hexadecimal e vice-versa
int main(int argc, char *argv[])
{
  
  int opcao, valor;
  
  printf("Converter: \n");
  printf("1: decimal para hexadecimal\n");
  printf("2: hexadecimal para decimal\n");
  printf("\nInforme sua opcao: \n");
  scanf("%d", &opcao);
  getchar();
  
  switch(opcao)
  {
     case 1:
          printf("\nInforme o valor em decimal: ");     
          scanf("%d", &valor);
          getchar();
          printf("%d em hexadecimal eh: %x\n", valor, valor);
          break;
     case 2:
          printf("\nInforme o valor em hexadecimal: ");     
          scanf("%x", &valor);
          getchar();
          printf("%x em decimal eh: %d\n", valor, valor);
          break;
     default:
          printf("\Opcao invalida\n");        
               
               
               }
  
  
  system("PAUSE");	
  return 0;
}
