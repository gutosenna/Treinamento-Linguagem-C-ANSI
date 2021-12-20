#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// STRUCT - ESTRUTURA DE DADOS 

struct componente
{
  char tipo[20];
  char referencia[4];
  unsigned char num_ref;       
  int valor;
  char unidade[10];   
       
}comp; // sempre lembrando do ponto e virgula pois é uma declaração e não uma função.
// stuct componente comp; // pode declarar depois do ponto e virgula ou dessa forma.

int main(int argc, char *argv[])
{
    printf("Tipo do componente ________________:"); // usuario entra com o componente pra armazenar no banco de dados
    fflush(stdin);  // entradas padrao pra pegar os dados do teclado
    fgets(comp.tipo,20,stdin); // pega a variável da estrutura
    
    printf("Referencia do componente____________:");
    fflush(stdin);  
    fgets(comp.referencia,4,stdin); 
    
    printf("Numero da referencia ____________:");
    scanf("%c", &comp.num_ref);
    getchar();
    
    printf("Valor do componente___________:");
    scanf("%d", &comp.valor);
    getchar();
    
    printf("Unidade___________:");
    fflush(stdin);  
    fgets(comp.unidade,10,stdin);
    
    printf("\n\nCOMPONENTE CRIADO:\n\n");
    printf("%s\n", comp.tipo);
    printf("%s ", comp.referencia);
    printf("%c ", comp.num_ref);
    printf(" Valor: %d", comp.valor);
    printf(" %s \n\n", comp.unidade);
    
  
  system("PAUSE");	
  return 0;
}
