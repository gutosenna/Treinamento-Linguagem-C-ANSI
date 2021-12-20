#include <stdio.h>
#include <stdlib.h>

//INDEXAÇÃO DE PONTEIROS

int main(int argc, char *argv[])
{
  int mat[10] = {1,2,3,4,5,6,7,8,9,10};
  
  int *point, i;
  
  point = mat;
  
  for(i=0;i<10;i++) printf("%d\n", *(point+i));
  
  
  
  
  system("PAUSE");	
  return 0;
}
