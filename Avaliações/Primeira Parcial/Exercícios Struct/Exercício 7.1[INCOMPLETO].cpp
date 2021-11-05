//programa em construção ainda
#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 7. Crie uma agenda telefônica como no exemplo 6, um sistema de menus deverá cadastrar cada usuário. (1. Novo 2. Remover, 3. Buscar, 4. Editar, 5. Sair)
 */

struct AGENDA //criação da strict
{
	
	char nome [30]; //criação da variável nome
	int telefone=0; //criação da variável telefone
	char email[30]; //criação da variável email
	char endereco [30]; //criação da variável endereço
	
};


int main() //Ccomeço do programa
{
	
	setlocale(LC_ALL,"portuguese"); //definição do idioma para acentuação
	
	int n=0; //número de pessoas cadastradas
	int capacidade = 1;
	int opcao=0; //variavel para as opções do menu
	struct AGENDA pes[capacidade]; //criação do vetor pes que puxa informaçõs da struct AGENDA, com "n" espaços de alocação.
	int i;
	a: //é o ponto para onde o goto a; manda
	
	system("cls");
		
	printf("BEM VINDO À AGENDA");
	printf("\n\nSELECIONE UMA OPÇÃO:");
	printf("\n\n[1] Adicionar um novo contato");
	printf("\n[2] Remover um contato existente");
	printf("\n[3] Buscar um contato");
	printf("\n[4] Editar um contato existente");
	printf("\n[5] Sair");
	printf("\n\nOPÇÃO SELECIONADA: ");
	scanf("%d",&opcao);
	
	if(opcao==1)
	{
		
			
		system("cls");
			
						
		printf("Por gentileza, digite o nome do novo contato: ");
		scanf("%s",&pes[n].nome);
		printf("\nDigite o número de telefone: ");
		scanf("%d",&pes[n].telefone);
		printf("Digite o email: ");
		scanf("%s",&pes[n].email);
		printf("Digite o endereço: ");
		scanf("%s",&pes[n].endereco);
		
		capacidade=capacidade+1;
		n=n+1;
						
			
		printf("\n\n\n");// Aqui é detalhe pessoal
			
		system("pause");
			
		goto a;
		
	}


	if(opcao==2)
	{
	
		
		system("cls");
		
		printf("\nAQUI SERÁ PROGRAMADO O REMOÇÃO DE CONTATOS");
			
		printf("\n\n\n");// Aqui é detalhe pessoal
								
		system("pause");
			
		goto a;			
	}
	
	if(opcao==3)
	{
				
		system("cls");
		
		printf("\nAQUI SERÁ PROGRAMADO BUSCA DE CONTATOS");
			
	/*	for(i=0;i<=n;i++)
		{
				
			printf("\n%s",pes[i].nome);
				
		}
		*/	
		printf("\n\n\n");// Aqui é detalhe pessoal	
									
		system("pause");	
			
		goto a;
	
	}
	
	if(opcao==4)
	{
		
		system("cls");
		
		printf("\nAQUI SERÁ PROGRAMADO EDIÇÃO DE CONTATOS");
			
		printf("\n\n\n");// Aqui é detalhe pessoal
								
		system("pause");
			
		goto a;	
	
	}
	
	if(opcao==5)
	{
				
		system("cls");
			
		printf("\nFIM DO PROGRAMA");
			
		printf("\n\n\n");// Aqui é detalhe pessoal
			
		system("pause");
			
		return 0;
			
	}
	
	else
	{
				
		printf("\nOPÇÃO INVÁLIDA");
		
		printf("\n\n\n");	
			
		system("pause");
			
		goto a;
	
	}
		
	
	
return 0;
}
