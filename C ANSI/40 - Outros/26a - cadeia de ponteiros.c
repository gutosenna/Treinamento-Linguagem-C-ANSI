#include <stdio.h>
#include <stdlib.h>

// CADEIA DE PONTEIROS

int main(int argc, char *argv[])
{
    int var;
    int *point1;
    int **point2;
    int ***point3; // não é usual mas funciona.
    
    var = 25;
    
    point1 = &var;
    point2 = &point1;
    point3 = &point2;
    
    printf("\n%d\n", ***point3);
  
  system("PAUSE");	
  return 0;
}
