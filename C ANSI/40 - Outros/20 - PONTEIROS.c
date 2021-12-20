#include <stdio.h>
#include <stdlib.h>

// PONTEIROS & *
// tipo *nome;


int main(int argc, char *argv[])
{
  int variavel = 250;   // variável inteira com o valor  250
  int *ponteiro;        // ponteiro para a variável
  int exibe;            // variável que vai exibir o valor  250
  
  ponteiro = &variavel;  // pponteiro está apontando para o endereço da variável
  
  exibe = *ponteiro;    // a variável exibe recebe o conteúdo do endereço para o qual está apontando
  
  printf("\n%d\n",exibe);
  
  system("PAUSE");	
  return 0;
}
