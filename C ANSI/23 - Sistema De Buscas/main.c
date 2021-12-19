/*
	Sistema de Busca de Componentes em linguagem C ANSI
	
	Estudante - Sérgio Senna
	
	Dezembro de 2021
	
	Curso de Linguagem C
	
*/

// --- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

// --- Protótipo das Funções Auxiliares ---
int check(char *s);
void take_component();

// --- Variáveis Globais ---
char databank[][40] = {  // Matriz contendo os componentes e respectivas características
						"BC547", "TBJ NPN 62mW",
						"BC557", "TBJ PNP 625mw",
						"TIP41", "TBJ NPN 65w",
						"TIP42", "TBJ PNP 65W",
						"TIP122", "TBJ NPN Darlington 100V 5A",
						"TIP127", "TBJ PNP Darlington 100V 5A",
						"2N2222", "TBJ NPN High Frequency 500nW",
						"2n7000", "Mosfet N Channel",
						"IRF3205", "Mosfet N channel 55V 98A",
						
						};
						
char input[80];			// Matriz para entrada de dados (componente em pesquisa)
char component[80];		// Matriz passada como parâmetro para função check
char *point;			// Ponteiro


// --- Função Principal ---
int main(int argc, char *argv[]) 
{
		int indice;		// Armazena o índice do componente
		char option;	// Armazena a opção escolhida
	
	do					// Loop
	{
		printf("Informe o componente que deseja pesquisar: ");		//Solicita que o usuário pesquise um componente
		gets(input);												//Lê o componente digitado pelo usuário
		point = input;												//Atribui a point o endereço da matriz input
		printf("Caracteristicas do componente pesquisado: ");		
		take_component();											//Pega o primeiro componente
			
			// Loop pra ler um componente por vez da matriz input e exibe suas características
			do
			{
				// Procura o índice do componente em databank
				indice = check(component);
				
				// Imprime as características do componente pesquisado
				if(indice!= -1) printf("%s", databank[indice+1]);
				else printf("Sem registros no banco de dados \n");
				
				take_component();	// Pega a próxoma palavra
				
			} while(*component);	// Repete até encontrar uma string nula
			
		printf("\n");				// Quebra de linha
		
		printf("Pesquisar mais? s - sim | n - nao \n");		// Pergunta se o usuário quer pesquisar mais
		scanf("%c", &option);								// Armazena a opção escolhida em option
		getchar();											// Limpa o buffer do teclado
	} while(option == 's' || option == 'S');
	
	system("PAUSE");
	return 0;
	
} // end main


// --- Desenvolvimento das Funções Auxiliares
int check(char *s)									// Retorna a localização de uma correspondência entre a string
{
	int i;											// Variável de iterações
	
	for(i=0; *databank[i]; i++)						// Varre a matriz databank
	{
		if(!strcmp(databank[i],s)) break;			// Comparação das matrizes databank e s	
	} // end for	
	
	if(*databank[i]) return(i);						// Retorna o índice correspondente, se uma correspondência existir
	else return(-1);								// Retorna -1 se não houver uma correspondência
	
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
	char *q;		// Ponteiro auxiliar
	
	// Recarrega o endereço do componente toda vez que a função é chamada.
	q = component;
	
	// Pega o próximo componente
	while(*point && *point!=' ')	// Shift no endereço dos índices da matriz databank
	{
		*q = *point;
		point++;
		q++;
	} // end while
	
	if(*point == ' ') point++;
	*q = '\0';		// Terminador nulo
	
} // end take_component










