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
	char endereco [50]; //cria��o da vari�vel endere�o
	
};


int main() //Ccome�o do programa
{
	
	setlocale(LC_ALL,"portuguese"); //defini��o do idioma para acentua��o
	
	int n=0; //n�mero de pessoas cadastradas
	int capacidade = 100; //capacidade de contatos que a agenda comporta
	int opcao=0; //variavel para as op��es do menu
	struct AGENDA pes[capacidade]; //cria��o do vetor pes que puxa informa��s da struct AGENDA, com "n" espa�os de aloca��o.
	int i=0, j=0; //Vari�veis de contagem para os la�os
	int novo_telefone=0; //vari�vel para edi��o do telefone
	int edit; //Vari�vel para op��es de edi��o
	char busca[30]; //cria��o de uma vari�vel para o usu�rio digitar o nome de busca
		
	a: //� o ponto para onde o goto a; manda
	
	if(capacidade==n){ //se a capacidade for igual ao n�mero de contatos cadastrados, dobrar o n�mero da capacidade
		
		capacidade=2*n;
	}
	
	system("cls"); //Limpar a tela do programa (NESSA PARTE AQUI � PARA O CASO DE VOLTAR AO MENU)
		
	printf("BEM VINDO � AGENDA"); //Mensagem de boas vindas
	printf("\n\nSELECIONE UMA OP��O:"); // mensagem das op��es
	printf("\n\n[1] Adicionar um novo contato"); //mensagem com informa��o da op��o 1
	printf("\n[2] Remover um contato existente"); //mensagem com informa��o da op��o 2
	printf("\n[3] Buscar um contato"); //mensagem com informa��o da op��o 3
	printf("\n[4] Editar um contato existente"); //mensagem com informa��o da op��o 4
	printf("\n[5] Sair"); //mensagem com informa��o da op��o 5
	printf("\n\nOP��O SELECIONADA: "); //mensagem que informa a op��o selecionada
	scanf("%d",&opcao); //leitura da op��o selecionada
	
	switch(opcao) //switch case � um comando para executar determinada sintaxe de acordo com a op��o desejada (AQUI PODERIA SER UTILIZADO O if else)
	{
		case 1: // caso a op��o selecionada seja 1
			
			system("cls"); //limpeza de tela
			
						
			printf("Por gentileza, digite o nome do novo contato: "); 
			scanf("%s",&pes[n].nome);
			printf("Digite o n�mero de telefone: ");
			scanf("%d",&pes[n].telefone);
			printf("Digite o email: ");
			scanf("%s",&pes[n].email);
			printf("Digite o endere�o: ");
			scanf("%s",&pes[n].endereco);
						
			n=n+1; //aqui aumenta a posi��o no vetor para o cadastro de novos contatos
			
						
			printf("\n\n\n"); // Aqui � detalhe pessoal
			printf("CONTATO CADASTRADO COM SUCESSO \n%d %d",n,capacidade); //mensagem final e controle sutil das vari�veis n e capacidade
			system("pause"); // pausa o programa antes de voltar para o menu
			
			goto a; //comando goto label, serve para fazer a leitura do programa voltar � determinado ponto, nesse caso ponta a:
			
						
		case 2:
		
			system("cls"); //limpeza de tela
			
			char contato[30]; //cria��o de uma vari�vel para o usu�rio digitar o nome de busca
			
			printf("\nDigite o nome do contato que pretende apagar: ");
			scanf("%s",&contato);
			
			for(i=0;i<n+1;i++) //la�o que passa por todos os contatos cadastrados
			{
				if(strcmp(contato,pes[i].nome)==0) //condicional que compara as strings cadastradas com a string de busca, escolhendo seguir se tiver alguma igual
				{
					
					for(j=i+1;j<n+1;j++) //la�o que passa por todos os contatos que est�o alocados depois do contado encontrado
					{
						
						strcpy(pes[j-1].nome,pes[j].nome); //mundan�a de aloca��o no vetor, trazendo todos os vetores uma casa para baixo. (NOTA: aqui esta copiando as informa��o para a casa anterior)
						pes[j-1].telefone=pes[j].telefone;
						strcpy(pes[j-1].email,pes[j].email);
						strcpy(pes[j-1].endereco,pes[j].endereco);
						
						printf("\n\nCONTATO APAGADO COM SUSCESSO");
						
					}
					n--; //remo��o das informa��es alocadas na ultima posi��o cadastradas
					i=n; //aqui serve para encerrar o primeiro la�o do case 2:
				}				
			}
						
			printf("\n\n\n");// Aqui � detalhe pessoal
								
			system("pause");
			
			goto a;			
		
		case 3:
			
			system("cls"); //limpeza de tela	
						
			printf("\nDigite o nome do contato que est� procurando: ");
			scanf("%s",&busca);
			printf("\n\n");
			
			for(i=0;i<n+1;i++) //la�o que passa por todos os contatos cadastrados
			{
				if(strcmp(busca,pes[i].nome)==0) //aqui est� comparando as strings com o mesmo nome e imprimindo as informa��es
				{
					printf("NOME: %s",pes[i].nome);
					printf("\nTELEFONE: %d",pes[i].telefone);
					printf("\nE-MAIL: %s",pes[i].email);
					printf("\nENDERE�O: %s",pes[i].endereco);
				}
			}
			
			printf("\nFIM DA CONSULTA \nAPERTE ENTER PARA CONTINUAR");
			
			printf("\n\n\n");// Aqui � detalhe pessoal	
									
			system("pause");	
			
			goto a;
				
		case 4:
			
			system("cls"); //limpeza de tela
									
			printf("\nDigite o nome do contato que pretende editar: ");
			scanf("%s",&busca);
			printf("\n\n");
			
			for(i=0;i<n+1;i++) //la�o que passa por todos os contatos cadastrados
			{
				if(strcmp(busca,pes[i].nome)==0) //condicional que compara as strings cadastradas com a string de busca, escolhendo seguir se tiver alguma igual
				{
					printf("NOME: %s",pes[i].nome);
					printf("\nTELEFONE: %d",pes[i].telefone);
					printf("\nE-MAIL: %s",pes[i].email);
					printf("\nENDERE�O: %s",pes[i].endereco);
					
					printf("\n\nESCOLHA UMA OP��O"); //aqui depois de imprimir as informa��es da agenda apresenta um menu de op��es para altera��od de cadastro
					printf("\n\n[1] Alterar nome");
					printf("\n[2] Alterar telefone");
					printf("\n[3] Alterar e-mail");
					printf("\n[4] Alterar endere�o");
					printf("\n[5] Voltar ao menu inicial");
					
					printf("\n\nESCOLHA: ");
					scanf("%d",&edit);
					
					switch(edit) //os casos aqui apresentados s�o para substitui��o das informa��es de um contato j� cadastrado, quando � string utiliza-se o comando strcpy e quanto � n�mero basta substituir direto
					{
						case 1:
							
							system("cls"); //limpeza de tela
														
							char novo_nome[30];
							
							printf("Digite o novo nome: ");
							scanf("%s",&novo_nome);
							
							strcpy(pes[i].nome,novo_nome);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui � detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 2:
						
							system("cls");	//limpeza de tela													
							
							
							printf("Digite o novo telefone: ");
							scanf("%d",&novo_telefone);
							
							pes[i].telefone=novo_telefone;
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui � detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 3:
							
							system("cls"); //limpeza de tela
														
							char novo_email[30];
							
							printf("Digite o novo e-mail: ");
							scanf("%s",&novo_email);
							
							strcpy(pes[i].email,novo_email);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui � detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 4:
							
							system("cls"); //limpeza de tela
														
							char novo_endereco[50];
							
							printf("Digite o novo endere�o: ");
							scanf("%s",&novo_endereco);
							
							strcpy(pes[i].endereco,novo_endereco);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui � detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 5:
							
							goto a;
							
						default:
							
							printf("\nOP��O INV�LIDA");
			
							printf("\n\n\n"); 	
			
							system("pause");
			
							goto a;
					}
					
				}
			}
			
			printf("\n\n\n");// Aqui � detalhe pessoal
								
			system("pause");
			
			goto a;	
			
		case 5:
			
			system("cls"); //limpeza de tela
			
			printf("\nFIM DO PROGRAMA");
			
			printf("\n\n\n");// Aqui � detalhe pessoal
			
			system("pause");
			
			return 0;
			
					
		default:
			
			printf("\nOP��O INV�LIDA");
			
			printf("\n\n\n");	
			
			system("pause");
			
			goto a;
			
		
	}
	

}
