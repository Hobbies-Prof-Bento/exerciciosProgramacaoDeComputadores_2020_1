#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* .2) Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, 
depois do preenchimento imprima a matriz e todo seu conteúdo. */



struct ENDERECO //substruct
{
	char rua [50]; //variável que vai receber o nome da rua
	int numero=0; //variável que vai receber o número da rua
	
};

struct CADASTRO //a struct principal
{
	char nome [30];
	struct ENDERECO res; // res = residencial
	struct ENDERECO com; // com = comercial
};

struct CADASTRO cadastro1; //declaração da struct cadastro com a variável "cadastro1"

int main()
{
	setlocale(LC_ALL,"portuguese"); //coloca idioma
	
	
	
	printf("BEM VINDO AO CADASTRO DE ENDEREÇOS\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOCÊ PODE CADASTRAR SEU ENDEREÇO RESIDENCIAL E COMERCIAL\n\n");
	
	printf("Por gentileza, digite o seu nome: ");
	scanf("%s",&cadastro1.nome); //leitura de do nome
	printf("\n Por gentileza digite o seu endereço residencial: ");
	scanf("%s",&cadastro1.res.rua); //leitura da rua residencial
	printf("\n Agora o número: "); 
	scanf("%d",&cadastro1.res.numero); //leitura do número residencial
	printf("\n Por gentileza digite o seu endereço comercial: ");
	scanf("%s",&cadastro1.com.rua); //leitura do rua comercial
	printf("\n Agora o número: ");
	scanf("%d",&cadastro1.com.numero); //leitura do número comercial
	
	
	
	system("cls"); // limpa a tela
	
	/*impressão das informações */
	
	printf("NOME: %s",cadastro1.nome);
	printf("\nENDEREÇO RESIDENCIAL: %s, %d",cadastro1.res.rua,cadastro1.res.numero); 
	printf("\nENDEREÇO COMERCIAL: %s, %d",cadastro1.com.rua,cadastro1.com.numero);	
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

