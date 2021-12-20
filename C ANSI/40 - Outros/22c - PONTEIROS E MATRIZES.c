#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// PONTEIROS E MATRIZES 03 // UTILIZANDO PONTEIROS

int main(int argc, char *argv[])
{
    char mat[30], *point;
    
    printf("Entre com uma frase maiuscula: \n");
    scanf("%s", &mat);
    getchar();
    printf("Frase em letra minuscula: ");
    
    point = mat;
    
   
    
    while(*point) printf("%c", tolower(*point++));
    
     printf("\n\n");
  
  system("PAUSE");	
  return 0;
}
