#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 6. Crie um programa em C que preencha 5 structs CADASTRO com nome e telefone usando scanf,
 cada endereço retornado pelo malloc será armazenado em um vetor de ponteiros.

struct CADASTRO *vet[5];
*/

struct CADASTRO
{
	
	char nome[50];
	int telefone=0;
	
};


int main ()
{
	
	setlocale(LC_ALL,"portuguese");
	
	struct CADASTRO *pessoa[5];
	int i=0,j=0, k=0;
	
	printf("SEJA BEM VINDO");
	
	for(i=0;i<5;i++)
	{
	
		pessoa[i]=(struct CADASTRO*)malloc(sizeof(struct CADASTRO));
	
	}
	
	for(j=0;j<5;j++)
	
	{
		printf("\n\nDigite o nome da pessoa [%d]: ",j+1);
		scanf("%s",pessoa[j]->nome);
		
		printf("\nDigite o telefone da pessoa [%d]: ",j+1);		
		scanf("%d",&pessoa[j]->telefone);
	}
	
	system("cls");
	
	for(k=0;k<5;k++)
	{
		
		printf("\n\n\nO nome da pessoa [%d] é: %s",k+1,pessoa[k]->nome);
		printf("\nO telefone da pessoa [%d] é: %d",k+1, pessoa[k]->telefone);
				
	}
	
	free(pessoa);
	
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
