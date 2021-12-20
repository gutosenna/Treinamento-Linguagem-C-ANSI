
/*
  Sistema de Busca de Componentes em Linguagem C ANSI
  
  Aluno Sérgio Senna
  
  Janeiro de 2021
  
  Curso de Linguagem C


*/
//--- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

// --- Protótipo das Funções Auxiliares ---
int check(char *s);
void take_component();

// --- Variáveis Globais ---
char databank[][40] = { // Matriz contendo os componentes e respectivas características

                        "BC547"  , "TBJ NPX 625mW",
                        "BC 557" , "TBJ PNP 625mw",
                        "TIP41"  , "TBJ NPN 65W ",};
                        
                        
                        
                        
char input[80];         // Matriz para entrada de dados (componentes em pesquisa)
char component[80];     // Matriz passada como parâmetro para função check
char *point;            // Ponteiro                       
                        
                        
// --- Função principal ---                        
                                                
int main()
{
  int indice;                                   //Armazena o índice do componente
  char option;                                  //Armazena a opção escolhida
  
  do                                            //Loop
  {
    printf("Informe o componente que deseja pesquisar: "); //Solicita que o usuário pesquise um componente
    gets(input);                                           //lê o componente digitado pelo usuário
    point = input;                                         //atribui a point o endereço da matriz input
    printf("Caracteristicas do componente pesquisado: ");  
    take_component();                                      // Pega o primeiro componente
    
    
    // Loop para ler  um componente por vez da matriz input e exibe suas caractarísticas.
    do
    {
     // procura o índice do componente em databank
     indice = check(component);
     
     if(indice!= -1) printf("%s", databank[indice+1]);
     else printf("Sem registros no banco de dados\n");
     
     
     take_component();                      //Pega próxima palavra
             
    }   while(*component);                  //repete até encontrar uma string nula
    
    printf("\n");                           // quebra de linha
    
    printf("Pesquisar mais? s - sim | n - nao \n");   //Pergunta se o usuário quer pesquisar mais
    scanf("%c", &option);                             //Armazena a opçãp escolhida em option
    getchar();                                        // Limpa o buffer do teclado
       
       
  }while(option == 's' || option == 'S');
    
  system("PAUSE");	
  return 0;
} // end main

// Desenvolvimento das Funções Auxiliares
int check(char *s)             //Retorna a localização de uma correspondência entre a string
{
   int i;                      // Variável de iterações
   
   for(i=0; *databank[i]; i++) // Varre a matriz databank
   {
     if(!strcmp(databank[i],s)) break;     //comparação das matrizes databank e s        
            
   }// end for
   if(*databank[i]) return(i);             // Retorna o índice correspondente, se existir
   else return(-1);                        // Retorna -1 se não houver uma correspondência
    
} // end check


/*
  take_component lê o próximo componente da matriz input. Cada componente é 
  considerado como sendo separado por um espaço ou pelo terminador nulo.
  Nenhuma outra pontuação é permitida.
  O componente retornado será uma string de tamanho nulo quando o final
  da string input é encontrado.
  
*/
void take_component()
{
   char *q; // ponteiro auxiliar
   
   // Recarrega o endereço do componente toda vez que a função é chamada.
   
   q = component;
   
   // pega o próximo componente
   while(*point && *point!=' ')               //Shift no endereço dos índices da matriz databank
   {
      *q = *point;
      point++;
      q++;          
                
   }  // end while
     
     if(*point == ' ') point++;
     *q = '\0';                               // terminador nulo
     
}// end take component
