#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 5.Crie duas structs, uma est�tica e outra din�mica com os seguintes campos 
Quantidade;
Descri��o do produto;
Valor Unit�rio;
Preencha a struct est�tica com scanf;
Aloque a struct din�mica
Copie os dados a struct est�tica para a din�mica;
Imprima a struct din�mica.
*/

struct PRODUTO1
{
	
	int quantidade;
	char descricao_produto[50];
	float valor_unitario=0;
	
};

struct PRODUTO2
{
	
	int quantidade;
	char descricao_produto[50];
	float valor_unitario=0;
	
};

int main ()
{
	
	setlocale(LC_ALL,"portuguese");
	
	struct PRODUTO1 produto_estatico;
	struct PRODUTO2 *produto_dinamico;
	
	produto_dinamico = (struct PRODUTO2*)malloc(sizeof(struct PRODUTO2));
	
	
	printf("BEM VINDO");
	
	printf("\n\nPor gentileza digite a quantidade do produto: ");
	scanf("%d",&produto_estatico.quantidade);
	printf("\Agora descreva o produto: ");
	scanf("%s",&produto_estatico.descricao_produto);
	printf("\nDigite o valor do produto em R$: ");
	scanf("%f",&produto_estatico.valor_unitario);
	
	produto_dinamico->quantidade=produto_estatico.quantidade;
	strcpy(produto_dinamico->descricao_produto,produto_estatico.descricao_produto);
	produto_dinamico->valor_unitario=produto_estatico.valor_unitario;
	
	printf("\n\nA quantidade do produto �: %d", produto_dinamico->quantidade);	
	printf("\nA descri��o do produto �: %s", produto_dinamico->descricao_produto);
	printf("\nO valor unit�rio do produto �: R$%.2f", produto_dinamico->valor_unitario);
	
	free(produto_dinamico);
	
	printf("\n\n\n");
	
	system("pause");
	
	return 0;
	
}
