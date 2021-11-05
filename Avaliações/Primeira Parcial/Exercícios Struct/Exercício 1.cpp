#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* .1) Crie um programa em C que preencha uma struct usando scanf depois do preenchimento imprima a matriz. */


struct BANDA
{
	char nome_banda [30];
	int musicas_que_gosta;
	
};

struct BANDA cadastro1;

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	printf("BEM VINDO AO CADASTRO DE BANDAS\n");
	printf("NESSE PROGRAMA VOCÊ PODE CADASTRAR SUA BANDA PREFERIDA E A QUANDIDADE DE MÚSICAS QUE GOSTA DESSA BANDA\n\n");
	
	printf("Por gentileza, digite o nome da banda: ");
	scanf("%s",&cadastro1.nome_banda);
	printf("\n Por gentileza digite a quantidade de músicas que gosta: ");
	scanf("%d",&cadastro1.musicas_que_gosta);
	
	system("cls");
	
	printf("Você gosta de %d músicas da banda %s.",cadastro1.musicas_que_gosta,cadastro1.nome_banda);
	printf("\n\n\n");
	
	system("pause");
	return 0;	
	
}

