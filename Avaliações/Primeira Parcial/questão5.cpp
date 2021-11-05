#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ITEM
{
	int item_sku=0;
	int descricao [30];
	float valor=0;
};

struct COMBO 
{	
	int combo_sku=0;
	struct ITEM item1;
	struct ITEM item2;
};


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	struct COMBO cadastro;
	
	printf("Seja bem vindo ao cadastro de combo");
	
	printf("\n\nPor gentileza informe o sku do combo: ");
	scanf("%d",&cadastro.combo_sku);
	
	printf("\nAgora digite o sku do item 1: ");
	scanf("%d",&cadastro.item1.item_sku);
	printf("\ninforme a descrição do item 1: ");
	scanf("%s",&cadastro.item1.descricao);
	printf("\ninforme o valor do item 1: ");
	scanf("%f",&cadastro.item1.valor);
	
	printf("\nAgora digite o sku do item 2: ");
	scanf("%d",&cadastro.item2.item_sku);
	printf("\ninforme a descrição do item 2: ");
	scanf("%s",&cadastro.item2.descricao);
	printf("\ninforme o valor do item 2: ");
	scanf("%f",&cadastro.item2.valor);
	
	system("cls");
	
	printf("O combo cadastrado com a sku %d possuí os seguintes itens:",cadastro.combo_sku);
	printf("\n\nitem 1: \nsku: %d",cadastro.item1.item_sku);
	printf("\ndescrição: %s", cadastro.item1.descricao);
	printf("\nvalor: %.2f", cadastro.item1.valor);
	printf("\n\nitem 2: \nsku: %d",cadastro.item2.item_sku);
	printf("\ndescrição: %s", cadastro.item2.descricao);
	printf("\nvalor: %.2f", cadastro.item2.valor);
	
	
	printf("\n\n\nOs endereços das variáveis são: %x, ",&cadastro); //62fd10
	printf("\n%x, ",&cadastro.combo_sku); // 62fd10
	printf("\n%x, ",&cadastro.item1); //62fd14
	printf("\n%x, %x, %x,  ",&cadastro.item1.item_sku,&cadastro.item1.descricao,&cadastro.item1.valor); //62fd14, 62fd18, 62fd90
	printf("\n%x, ",&cadastro.item2); //62fd94
	printf("\n%x, %x, %x,  ",&cadastro.item2.item_sku,&cadastro.item2.descricao,&cadastro.item2.valor);//62fd94, 62fd98, 62fe10
	
	return 0;
}
