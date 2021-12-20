#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Funções que retornam ponteiros
*/

// --- Protótipo da Função Auxiliar ---
char *findCharactere(char caractere, char *str);

int main(int argc, char *argv[]) 
{
	char frase[80];
	char chr, *pointer;
	
	printf("\nDigite uma frase: ");
	gets(frase);
	printf("Digite um caractere: ");
	chr = getche();
	pointer = findCharactere(chr, frase);
	
	if(pointer) printf("\n\n%s\n\n", pointer); // Se encontrar correspondência, imprime a frase a partir dela
	else printf("\n\nNenhuma paridade\n\n");
	
	return 0;
} // end main

// --- Desenvolvimento da Função Auxiliar ---
char *findCharactere(char caractere, char *str)
{
	int counter = 0;
	
	while((caractere != str[counter]) && (str[counter] != '\0')) counter++;
	
	if(str[counter]) return (&str[counter]); // Se houver correspondência, retorna o ponteiro para a localização
	
	else return (char *) '\0'; // Senão retorna um ponteiro nulo
	
} // end function
