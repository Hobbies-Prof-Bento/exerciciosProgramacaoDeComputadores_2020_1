#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Crie um programa em C que aloque de forma autom�tica 5 n�s com dados de 1 a 5. Use Inser��o no In�cio
*/

struct CADASTRO
{
	
	int valor;
	struct CADASTRO *proximo;
	
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct CADASTRO *topo = NULL;
	struct CADASTRO *auxiliar = NULL;
	int contador = 1;
	
	while(contador<6)
	{
		auxiliar = topo;
		topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
		topo->valor = contador;
		topo->proximo = auxiliar;
		contador ++;
	}
	
	for(int i=1;i<contador;i++)
	{
			printf("O endere�o %i �: %x",i,topo);
			printf("\nSeu valor �: %i",topo->valor);
			printf("\nO pr�ximo endere�o �: %x\n\n",topo->proximo);
		
			topo = topo->proximo;

	}
	
	return 0;
	
}
