#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Crie um programa em C que aloque de forma automática 5 nós com dados de 1 a 5. Use Inserção no Início
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
			printf("O endereço %i é: %x",i,topo);
			printf("\nSeu valor é: %i",topo->valor);
			printf("\nO próximo endereço é: %x\n\n",topo->proximo);
		
			topo = topo->proximo;

	}
	
	return 0;
	
}
