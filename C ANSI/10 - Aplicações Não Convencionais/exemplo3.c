#include <stdio.h>
#include <stdlib.h>

//Exemplo 03

// Utilizar funções

// Programa que calcule o quadrado de números inteiros

// Solicita ao usuário números inteiros e vai retornando o quadrado sos mesmos

// Condição para encerrar o programa: digitar o numero 0.

// Funções auxiliares: declarando as funções
void display();
int leitura();
void square();

int main(int argc, char *argv[]) {
	
	int valor;
	
	for(display(); valor = leitura(); display()) {
		square(valor);
	}
	
	
	system("PAUSE"); // pausa do sistema
	return 0;
} // end main

void display() {
	printf("Digite zero para sair\n");
	printf("Ou informe um inteiro para calcular o seu quadrado: ");
} // end display

int leitura() {
	int t; // armazenamos o número digitado pelo usuário para calcular o seu quadrado
	
	scanf("%d", &t); // le o que for digitado no teclado
	return t;
} // end leitura

void square(int numero) {
	printf("%d\n", numero * numero); // imprime o quadrado do numero
} // end square

