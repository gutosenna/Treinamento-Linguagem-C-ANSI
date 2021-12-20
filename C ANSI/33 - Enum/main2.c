#include <stdio.h>
#include <stdlib.h>

/*
	Meses do ano 
*/

enum meses{jan,fev,mar,abr,mai,jun,jul,ago,set,out,nov,dez};

char mes[][20] = 
{
	"Janeiro",
	"Fevereiro",
	"Marco",
	"Abril",
	"Maio",
	"Junho",
	"Julho",
	"Agosto",
	"Setembro",
	"Outubro",
	"Novembro",
	"Dezembro"
};

int main(int argc, char *argv[]) {
	
	enum meses m;
	
	for(m=jan;m<=dez;m++) 
	{
		printf("%s\n",mes[m]);
	}
	
	
	return 0;
}
