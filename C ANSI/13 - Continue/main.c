#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// continue

// M�quina de codifica��o

void codifica(); // prot�tipo da fun��o

int main(int argc, char *argv[]) {
	
	printf("Entrar com as letras para codificar\n");
	printf("Digite $ para sair.\n");
	codifica();
	
	system("PAUSE");
	return 0;
} // end main

void codifica() {
	
	char ok = 0, ch;
	
	while(!ok) {
		ch = getche();
		if(ch == '$') {
			ok = 1;
			continue;
		}
		printf("%c", ch + 2);
	}
} // end codifica
