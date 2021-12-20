#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Regras de Escopo, Vari�veis Locais */

void function(); // Prot�tipo da fun��o

// -- Vari�veis Globais --
int x, y, z;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	// Vari�veis Locais da fun��o "Main"
	int a, b, c, d;
	
	a = 100;
	b = 200;
	c = 300;
	d = 400;
	
	printf("Na fun��o main, a = %d, b = %d, c = %d, d = %d \n\n",a,b,c,d);
	
	function();
	
	return 0;
} // end main

// --- Desenvolvimento da Fun��o Auxiliar ---
void function()
{
	int a, b, c, d; // vari�veis locais da fun��o "Function"
	
	a = 33;
	b = 44;
	c = 55;
	d = 66;
	
	if(a<b) 
	{
		int z = 30;
		printf("z = %d\n\n",z);
	}
	
	printf("Na fun��o function, a = %d, b = %d, c = %d, d = %d \n\n",a,b,c,d);
	
} // end function
