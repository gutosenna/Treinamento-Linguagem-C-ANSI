// --- Inclui as bibliotecas auxiliares ---
#include <stdio.h>
#include <stdlib.h>

/*
	Rel�gio com Struct
*/

// --- Estrutura de dados ---
struct clock
{
	int horas;
	int minutos;
	int segundos;
};

// --- Prot�tipos da fun��es auxiliares ---
void delay();
void update(struct clock *t);
void display(struct clock *t);

// --- Fun��o Principal ---
int main(int argc, char *argv[]) 
{
	
	// Vari�vel da estrutura
	struct clock time;
	
	// Inicializa os dados da estrutura
	time.horas = 0;
	time.minutos = 0;
	time.segundos = 0;
	
	// Loop infinito
	for( ; ; )
	{
		update(&time);
		display(&time);
		delay();
		system("cls");
	} // end for
	
	return 0;
} // end main

// --- Desenvolvimento das fun��es auxiliares ---
void delay()
{
	long t;
	
	for(t = 1;t<200000000;t++); // Atraso do nosso c�digo 
} // end delay

void update(struct clock *t)
{
	t->segundos++;
	
	if(t->segundos == 60)
	{
		t->segundos = 0;
		t->minutos++;
	}
	if(t->minutos == 60)
	{
		t->minutos = 0;
		t->horas++;
	}
	
	if(t->horas == 24) t->horas = 0;
	
	delay();
	
} // end update

void display(struct clock *t)
{
	printf("%d:", t->horas);
	printf("%d:", t->minutos);
	printf("%d\n", t->segundos);
	
} // end display
