#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


// PONTEIROS E MATRIZES 02 // UTILIZANDO MATRIZ

int main(int argc, char *argv[])
{

char mat[30];
int i;

printf("Entre com uma frase em letra maiuscula\n");
scanf("%s", &mat);
getchar();

printf("Frase minuscula:");

for(i=0;mat[i];i++) printf("%c", tolower(mat[i]));

printf("\n\n");
  
  
  system("PAUSE");	
  return 0;
}
