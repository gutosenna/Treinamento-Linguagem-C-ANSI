#include <stdio.h>
#include <stdlib.h>

//Exemplo 03

// Utilizar fun��es

// Programa que calcule o quadrado de n�meros inteiros

// Solicita ao usu�rio n�meros inteiros e vai retornando o quadrado sos mesmos

// Condi��o para encerrar o programa: digitar o numero 0.

// Fun��es auxiliares: declarando as fun��es
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
	int t; // armazenamos o n�mero digitado pelo usu�rio para calcular o seu quadrado
	
	scanf("%d", &t); // le o que for digitado no teclado
	return t;
} // end leitura

void square(int numero) {
	printf("%d\n", numero * numero); // imprime o quadrado do numero
} // end square

