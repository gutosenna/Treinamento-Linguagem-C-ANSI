#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int opcao;
    int valor;
    
    printf("Conversor Bases Numericas \n");
    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");
    printf("\n\nInforme a opcao: ");
    scanf("%d", &opcao);
    getchar();
    
    if(opcao == 1)
    {
      printf("\nInformar o valor em decimal: ");
      scanf("%d", &valor);
      getchar();
      printf("%d em hexadecimal eh: %x\n", valor, valor);         
    }
    else if(opcao == 2)
    {
      printf("\nInformar o valor em hexadecimal: ");
      scanf("%x", &valor);
      getchar();
      printf("%x em decimal eh: %d\n", valor, valor);     
    }
    
    else printf("\nSua opcao eh invalida.\n");
  
  system("PAUSE");	
  return 0;
}
