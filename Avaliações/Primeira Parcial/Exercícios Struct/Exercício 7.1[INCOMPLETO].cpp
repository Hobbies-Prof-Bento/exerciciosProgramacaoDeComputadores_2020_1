//programa em constru��o ainda
#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 7. Crie uma agenda telef�nica como no exemplo 6, um sistema de menus dever� cadastrar cada usu�rio. (1. Novo 2. Remover, 3. Buscar, 4. Editar, 5. Sair)
 */

struct AGENDA //cria��o da strict
{
	
	char nome [30]; //cria��o da vari�vel nome
	int telefone=0; //cria��o da vari�vel telefone
	char email[30]; //cria��o da vari�vel email
	char endereco [30]; //cria��o da vari�vel endere�o
	
};


int main() //Ccome�o do programa
{
	
	setlocale(LC_ALL,"portuguese"); //defini��o do idioma para acentua��o
	
	int n=0; //n�mero de pessoas cadastradas
	int capacidade = 1;
	int opcao=0; //variavel para as op��es do menu
	struct AGENDA pes[capacidade]; //cria��o do vetor pes que puxa informa��s da struct AGENDA, com "n" espa�os de aloca��o.
	int i;
	a: //� o ponto para onde o goto a; manda
	
	system("cls");
		
	printf("BEM VINDO � AGENDA");
	printf("\n\nSELECIONE UMA OP��O:");
	printf("\n\n[1] Adicionar um novo contato");
	printf("\n[2] Remover um contato existente");
	printf("\n[3] Buscar um contato");
	printf("\n[4] Editar um contato existente");
	printf("\n[5] Sair");
	printf("\n\nOP��O SELECIONADA: ");
	scanf("%d",&opcao);
	
	if(opcao==1)
	{
		
			
		system("cls");
			
						
		printf("Por gentileza, digite o nome do novo contato: ");
		scanf("%s",&pes[n].nome);
		printf("\nDigite o n�mero de telefone: ");
		scanf("%d",&pes[n].telefone);
		printf("Digite o email: ");
		scanf("%s",&pes[n].email);
		printf("Digite o endere�o: ");
		scanf("%s",&pes[n].endereco);
		
		capacidade=capacidade+1;
		n=n+1;
						
			
		printf("\n\n\n");// Aqui � detalhe pessoal
			
		system("pause");
			
		goto a;
		
	}


	if(opcao==2)
	{
	
		
		system("cls");
		
		printf("\nAQUI SER� PROGRAMADO O REMO��O DE CONTATOS");
			
		printf("\n\n\n");// Aqui � detalhe pessoal
								
		system("pause");
			
		goto a;			
	}
	
	if(opcao==3)
	{
				
		system("cls");
		
		printf("\nAQUI SER� PROGRAMADO BUSCA DE CONTATOS");
			
	/*	for(i=0;i<=n;i++)
		{
				
			printf("\n%s",pes[i].nome);
				
		}
		*/	
		printf("\n\n\n");// Aqui � detalhe pessoal	
									
		system("pause");	
			
		goto a;
	
	}
	
	if(opcao==4)
	{
		
		system("cls");
		
		printf("\nAQUI SER� PROGRAMADO EDI��O DE CONTATOS");
			
		printf("\n\n\n");// Aqui � detalhe pessoal
								
		system("pause");
			
		goto a;	
	
	}
	
	if(opcao==5)
	{
				
		system("cls");
			
		printf("\nFIM DO PROGRAMA");
			
		printf("\n\n\n");// Aqui � detalhe pessoal
			
		system("pause");
			
		return 0;
			
	}
	
	else
	{
				
		printf("\nOP��O INV�LIDA");
		
		printf("\n\n\n");	
			
		system("pause");
			
		goto a;
	
	}
		
	
	
return 0;
}
