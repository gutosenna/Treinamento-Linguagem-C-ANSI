#include <stdio.h>
#include <stdlib.h>

/* 
	Este Programa não deve se executado
 */

int main(int argc, char *argv[]) {
	int var2, *pointer;
	
	var2 = 88;
	
	pointer = &var2;
	
	printf("\n%d\n", *pointer);
	
	return 0;
}
