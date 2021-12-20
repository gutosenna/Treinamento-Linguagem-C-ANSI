#include <stdio.h>
#include <stdlib.h>

// Vetores e o Método da Bolha exemplo 2

// Criar um vetor e organzar os dados
// Os dados do vetor devem ser exibidos em forma crescente

#define tam 5
#define falso 0
#define verdadeiro 1

int main(int argc, char *argv[])
{
    int vetor[tam],i,change = falso, final = tam, store;
    
    printf("Entre com um vetor de %d elementos\n", tam);
    for(i=0;i<tam;i++)
    {
    printf("Elemento %d ",i);
    scanf("%d", &vetor[i]);
    getchar();                  
    }
    do
    {
      change = falso;
      for(i=0;i<final;i++)
      {
             if(vetor[i]>vetor[i+1]) //vetor[0] = 5, vetor[1] = 2
             {
             store = vetor[i];       //store = 5 //armazena o valor de vetor[0]
             vetor[i] = vetor[i+1];  //vetor[0] = 2 // armazena o proximo vetor[i+1]
             vetor[i+1] = store;     //vetor[1] = 5
             change = verdadeiro;
                                    
             }//end if                 
      } //end for                          
    } while(change);
    
    for(i=0;i<tam;i++) printf("%d\n", vetor[i]);
  
  system("PAUSE");	
  return 0;
}
