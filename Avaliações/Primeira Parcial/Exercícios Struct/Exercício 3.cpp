#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3. Crie um vetor com 5 structS CADASTRO com duas subtructs ENDERECO (comercial e residencial), preencha cada um com scanf e depois imprima.
Importante que existam dois loops distintos, um para o preenchimento e outro para a impress�o.*/



struct ENDERECO
{
	char rua [50];
	int numero=0;
	
};

struct CADASTRO
{
	char nome [30];
	struct ENDERECO res; // res = residencial
	struct ENDERECO com; // com = comercial
};

struct CADASTRO cadastro[5];

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i=0,j=0;
	
	
	printf("BEM VINDO AO CADASTRO DE ENDERE�OS\n");
	printf("NESSE PROGRAMA VOC� PODE CADASTRAR SEU ENDERE�O RESIDENCIAL E COMERCIAL\n\n");


	for(i=0;i<5;i++)
	{
		
		printf("\n\nCADASTRO [%d]\nPor gentileza, digite o seu nome: ",i+1);
		scanf("%s",&cadastro[i].nome);
		printf("\n Por gentileza digite o seu endere�o residencial: ");
		scanf("%s",&cadastro[i].res.rua);
		printf("\n Agora o n�mero: ");
		scanf("%d",&cadastro[i].res.numero);
		printf("\n Por gentileza digite o seu endere�o comercial: ");
		scanf("%s",&cadastro[i].com.rua);
		printf("\n Agora o n�mero: ");
		scanf("%d",&cadastro[i].com.numero);

	}
	
	
	system("cls");
	
	for(j=0;j<5;j++)
	{
	
		printf("\nNOME: %s",cadastro[j].nome);
		printf("\nENDERE�O RESIDENCIAL: %s, %d",cadastro[j].res.rua,cadastro[j].res.numero);
		printf("\nENDERE�O COMERCIAL: %s, %d",cadastro[j].com.rua,cadastro[j].com.numero);	
	}
	
	printf("\n\n\n");
	
	system("pause");
	return 0;	
	
}

