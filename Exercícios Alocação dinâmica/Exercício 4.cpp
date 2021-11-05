#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4.Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, depois do preenchimento imprima todo seu conte�do. Sem aloca��o est�tica, apenas ponteiros e malloc.
 */



struct ENDERECO //substruct
{
	char rua [50]; //vari�vel que vai receber o nome da rua
	char numero[50]; //vari�vel que vai receber o n�mero da rua
	
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
	
	struct CADASTRO *pessoa; //declara��o do ponteiro struct cadastro com a vari�vel "pessoa"
	
	pessoa=(struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //alocando espa�o na mem�ria para a struct
	
	printf("BEM VINDO AO CADASTRO DE ENDERE�OS\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOC� PODE CADASTRAR SEU ENDERE�O RESIDENCIAL E COMERCIAL\n\n");
	
	printf("Por gentileza, digite o seu nome: ");
	scanf("%s",pessoa->nome); //leitura de do nome
	printf("\n Por gentileza digite o seu endere�o residencial: ");
	scanf("%s",pessoa->res.rua); //leitura da rua residencial
	printf("\n Agora o n�mero: "); 
	scanf("%s",pessoa->res.numero); //leitura do n�mero residencial
	printf("\n Por gentileza digite o seu endere�o comercial: ");
	scanf("%s",pessoa->com.rua); //leitura do rua comercial
	printf("\n Agora o n�mero: ");
	scanf("%s",pessoa->com.numero); //leitura do n�mero comercial
	
	
	
	system("cls"); // limpa a tela
	
	/*impress�o das informa��es */
	
	printf("NOME: %s, posi��o do ponteiro: %X",pessoa->nome, &pessoa->nome);
	printf("\nENDERE�O RESIDENCIAL: %s, %s",pessoa->res.rua,pessoa->res.numero); 
	printf("\nENDERE�O COMERCIAL: %s, %s",pessoa->com.rua,pessoa->com.numero);	
	
	free(pessoa); //liberando espa�o na mem�ria
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

