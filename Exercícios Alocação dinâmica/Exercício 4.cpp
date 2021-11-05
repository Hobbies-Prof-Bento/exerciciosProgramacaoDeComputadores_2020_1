#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4.Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, depois do preenchimento imprima todo seu conteúdo. Sem alocação estática, apenas ponteiros e malloc.
 */



struct ENDERECO //substruct
{
	char rua [50]; //variável que vai receber o nome da rua
	char numero[50]; //variável que vai receber o número da rua
	
};

struct CADASTRO //a struct principal
{
	char nome [30];
	struct ENDERECO res; // res = residencial
	struct ENDERECO com; // com = comercial
};



int main()
{
	setlocale(LC_ALL,"portuguese"); //coloca idioma
	
	struct CADASTRO *pessoa; //declaração do ponteiro struct cadastro com a variável "pessoa"
	
	pessoa=(struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //alocando espaço na memória para a struct
	
	printf("BEM VINDO AO CADASTRO DE ENDEREÇOS\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOCÊ PODE CADASTRAR SEU ENDEREÇO RESIDENCIAL E COMERCIAL\n\n");
	
	printf("Por gentileza, digite o seu nome: ");
	scanf("%s",pessoa->nome); //leitura de do nome
	printf("\n Por gentileza digite o seu endereço residencial: ");
	scanf("%s",pessoa->res.rua); //leitura da rua residencial
	printf("\n Agora o número: "); 
	scanf("%s",pessoa->res.numero); //leitura do número residencial
	printf("\n Por gentileza digite o seu endereço comercial: ");
	scanf("%s",pessoa->com.rua); //leitura do rua comercial
	printf("\n Agora o número: ");
	scanf("%s",pessoa->com.numero); //leitura do número comercial
	
	
	
	system("cls"); // limpa a tela
	
	/*impressão das informações */
	
	printf("NOME: %s, posição do ponteiro: %X",pessoa->nome, &pessoa->nome);
	printf("\nENDEREÇO RESIDENCIAL: %s, %s",pessoa->res.rua,pessoa->res.numero); 
	printf("\nENDEREÇO COMERCIAL: %s, %s",pessoa->com.rua,pessoa->com.numero);	
	
	free(pessoa); //liberando espaço na memória
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

