#include <stdio.h>
#include <stdlib.h>

/* 
	ENUMERE��ES
	
	enum
	
*/

enum componentes{transistor,capacitor,resistor,diodo,mcu};

char matriz[][20] =
{
	"transistor",
	"capacitor",
	"resistor",
	"diodo",
	"mcu"
};

int main(int argc, char *argv[]) {
	
	enum componentes referencia;
	
	for(referencia=transistor;referencia<=mcu;referencia++)
	{
		printf("%s\n",matriz[referencia]);
	}
	
	return 0;
}
