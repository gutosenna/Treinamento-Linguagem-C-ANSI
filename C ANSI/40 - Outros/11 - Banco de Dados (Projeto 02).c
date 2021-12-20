/*

Sistema de banco de dados simples

Seleciona vendedores por regi�o


*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char regiao, vendedor;
  
  printf("Regioes: Leste, Oeste e Norte\n");
  printf("Informe a primeira letra da regiao: ");
  regiao = getche(); // semelhante a fun��o scanf
                     // l� um comando do teclado
                     
  regiao = toupper(regiao); //converte as letras digitadas em mai�sculas
  printf("\n");
  
  switch(regiao)
  {
         case 'L':
            printf("Vendedores: Ricardo, Jose e Mariana \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche()); 
            printf("\n");
            
            switch(vendedor)
            {
                case 'R':
                    printf("Vendas: R$%d\n", 5000);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 15000);
                    break;
                case 'M':
                    printf("Vendas: R$%d\n", 18000);
                    break;            
                    default:
            printf("\nOpcao invalida\n\n");         
             }// end switch aninhado      
            break;
            
            case 'O':
            printf("Vendedores: Rafael, Joana e Pedro \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche()); 
            printf("\n");
            
            switch(vendedor)
            {
                case 'R':
                    printf("Vendas: R$%d\n", 2000);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 8000);
                    break;
                case 'P':
                    printf("Vendas: R$%d\n", 18500);
                    break;            
                    default:
            printf("\nOpcao invalida\n\n");         
             }// end switch aninhado      
            break;
            
                             
            case 'N':
            printf("Vendedores: Fabiana, Gabriela e Roberto \n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getche()); 
            printf("\n");
            
            switch(vendedor)
            {
                case 'F':
                    printf("Vendas: R$%d\n", 3000);
                    break;
                case 'G':
                    printf("Vendas: R$%d\n", 6000);
                    break;
                case 'R':
                    printf("Vendas: R$%d\n", 1000);
                    break;            
                    
                    default:
            printf("\nOpcao invalida\n\n");         
             }// end switch aninhado      
            break;  
                 
              default:
            printf("\nOpcao invalida\n\n");  
  } //end switch   
  
  
  
  
  system("PAUSE");	
  return 0;
}
