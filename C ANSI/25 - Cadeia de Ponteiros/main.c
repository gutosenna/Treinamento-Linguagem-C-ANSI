#include <stdio.h>
#include <stdlib.h>

/* 
	Cadeia de Ponteiros - Indire��o M�ltipla
*/

int main(int argc, char *argv[]) {
	int var;
	int *point1;
	int **point2;
	int ***point3; // Tomar cuidado pq n�o � muito usual
	
	var = 23;
	
	point1 = &var;
	point2 = &point1;
	point3 = &point2;
	
	printf("\n%d\n", ***point3);
	
	return 0;
}
