#include <stdio.h>
#include <stdlib.h>

// Ponteiros (indexa??o)

int main(int argc, char *argv[]) 
{
	int mat[10] = {1,2,3,4,5,6,7,8,9,10};
	int *point, i;
	
	point = mat;
	
	for(i=0;i<10;i++) printf("%i\n", *(point+i));
	
	return 0;
}
