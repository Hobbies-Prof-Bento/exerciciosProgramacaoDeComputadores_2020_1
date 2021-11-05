#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Crie um programa em C que aloque de forma automática 5 nós com dados de 1 a 5. Use Inserção no Fim
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
	struct CADASTRO *cadastro =NULL;
	struct CADASTRO *fim = NULL;
	int contador = 1;

	while(contador<6)
	{
		cadastro = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
		cadastro->valor = contador;
		cadastro->proximo = NULL;
		if(topo == NULL)
		{
			topo = cadastro;
		}
		else
		{
			fim->proximo = cadastro;
		}
		fim = cadastro;
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
