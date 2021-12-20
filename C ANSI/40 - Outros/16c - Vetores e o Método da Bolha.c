#include <stdio.h>
#include <stdlib.h>
#define tam 10

/*
int vetor[tamanho]

int vetor[5]

float vetor[10]

char vetor[4]

*/
int main(int argc, char *argv[])
{
    int vetor[tam];
    unsigned i, numero;
    
    printf("Entrar com o numero inicial do vetor. ");
    scanf("%d", &numero);
    getchar();
    
    //Gerar o vetor
    for(i=0; i<=tam; i++) vetor[i] = numero++;
    
    // imprime o vetor
    for(i=0; i<=tam; i++) printf("Elemento %d = %d\n",i, vetor[i]);
    
    // vetor[0] = 3
    
  
  system("PAUSE");	
  return 0;
}
