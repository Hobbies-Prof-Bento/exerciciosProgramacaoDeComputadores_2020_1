#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* .2) Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, 
depois do preenchimento imprima a matriz e todo seu conte�do. */



struct ENDERECO //substruct
{
	char rua [50]; //vari�vel que vai receber o nome da rua
	int numero=0; //vari�vel que vai receber o n�mero da rua
	
};

struct CADASTRO //a struct principal
{
	char nome [30];
	struct ENDERECO res; // res = residencial
	struct ENDERECO com; // com = comercial
};

struct CADASTRO cadastro1; //declara��o da struct cadastro com a vari�vel "cadastro1"

int main()
{
	setlocale(LC_ALL,"portuguese"); //coloca idioma
	
	
	
	printf("BEM VINDO AO CADASTRO DE ENDERE�OS\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOC� PODE CADASTRAR SEU ENDERE�O RESIDENCIAL E COMERCIAL\n\n");
	
	printf("Por gentileza, digite o seu nome: ");
	scanf("%s",&cadastro1.nome); //leitura de do nome
	printf("\n Por gentileza digite o seu endere�o residencial: ");
	scanf("%s",&cadastro1.res.rua); //leitura da rua residencial
	printf("\n Agora o n�mero: "); 
	scanf("%d",&cadastro1.res.numero); //leitura do n�mero residencial
	printf("\n Por gentileza digite o seu endere�o comercial: ");
	scanf("%s",&cadastro1.com.rua); //leitura do rua comercial
	printf("\n Agora o n�mero: ");
	scanf("%d",&cadastro1.com.numero); //leitura do n�mero comercial
	
	
	
	system("cls"); // limpa a tela
	
	/*impress�o das informa��es */
	
	printf("NOME: %s",cadastro1.nome);
	printf("\nENDERE�O RESIDENCIAL: %s, %d",cadastro1.res.rua,cadastro1.res.numero); 
	printf("\nENDERE�O COMERCIAL: %s, %d",cadastro1.com.rua,cadastro1.com.numero);	
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

