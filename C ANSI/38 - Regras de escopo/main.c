#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Regras de Escopo, Variáveis Locais */

void function(); // Protótipo da função

// -- Variáveis Globais --
int x, y, z;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	// Variáveis Locais da função "Main"
	int a, b, c, d;
	
	a = 100;
	b = 200;
	c = 300;
	d = 400;
	
	printf("Na função main, a = %d, b = %d, c = %d, d = %d \n\n",a,b,c,d);
	
	function();
	
	return 0;
} // end main

// --- Desenvolvimento da Função Auxiliar ---
void function()
{
	int a, b, c, d; // variáveis locais da função "Function"
	
	a = 33;
	b = 44;
	c = 55;
	d = 66;
	
	if(a<b) 
	{
		int z = 30;
		printf("z = %d\n\n",z);
	}
	
	printf("Na função function, a = %d, b = %d, c = %d, d = %d \n\n",a,b,c,d);
	
} // end function
