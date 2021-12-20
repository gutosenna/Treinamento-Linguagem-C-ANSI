// --- Inclui as bibliotecas auxiliares ---
#include <stdio.h>
#include <stdlib.h>

/*
	Relógio com Struct
*/

// --- Estrutura de dados ---
union relogio
{
	int horas;
	int minutos;
	int segundos;
};

// --- Protótipos da funções auxiliares ---
void delay();
void update(union relogio *t);
void display(union relogio *t);

// --- Função Principal ---
int main(int argc, char *argv[]) 
{
	
	// Variável da estrutura
	union relogio tempo;
	
	// Inicializa os dados da estrutura
	tempo.horas = 0;
	tempo.minutos = 0;
	tempo.segundos = 0;
	
	// Loop infinito
	for( ; ; )
	{
		update(&tempo);
		display(&tempo);
		delay();
		system("cls");
	} // end for
	
	return 0;
} // end main

// --- Desenvolvimento das funções auxiliares ---
void delay()
{
	long t;
	
	for(t = 1;t<200000000;t++); // Atraso do nosso código 
} // end delay

void update(union relogio *t)
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

void display(union relogio *t)
{
	printf("%d:", t->horas);
	printf("%d:", t->minutos);
	printf("%d\n", t->segundos);
	
} // end display
