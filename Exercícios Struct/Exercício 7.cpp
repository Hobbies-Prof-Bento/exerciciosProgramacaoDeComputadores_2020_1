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
	char endereco [50]; //criação da variável endereço
	
};


int main() //Ccomeço do programa
{
	
	setlocale(LC_ALL,"portuguese"); //definição do idioma para acentuação
	
	int n=0; //número de pessoas cadastradas
	int capacidade = 100; //capacidade de contatos que a agenda comporta
	int opcao=0; //variavel para as opções do menu
	struct AGENDA pes[capacidade]; //criação do vetor pes que puxa informaçõs da struct AGENDA, com "n" espaços de alocação.
	int i=0, j=0; //Variáveis de contagem para os laços
	int novo_telefone=0; //variável para edição do telefone
	int edit; //Variável para opções de edição
	char busca[30]; //criação de uma variável para o usuário digitar o nome de busca
		
	a: //é o ponto para onde o goto a; manda
	
	if(capacidade==n){ //se a capacidade for igual ao número de contatos cadastrados, dobrar o número da capacidade
		
		capacidade=2*n;
	}
	
	system("cls"); //Limpar a tela do programa (NESSA PARTE AQUI É PARA O CASO DE VOLTAR AO MENU)
		
	printf("BEM VINDO À AGENDA"); //Mensagem de boas vindas
	printf("\n\nSELECIONE UMA OPÇÃO:"); // mensagem das opções
	printf("\n\n[1] Adicionar um novo contato"); //mensagem com informação da opção 1
	printf("\n[2] Remover um contato existente"); //mensagem com informação da opção 2
	printf("\n[3] Buscar um contato"); //mensagem com informação da opção 3
	printf("\n[4] Editar um contato existente"); //mensagem com informação da opção 4
	printf("\n[5] Sair"); //mensagem com informação da opção 5
	printf("\n\nOPÇÃO SELECIONADA: "); //mensagem que informa a opção selecionada
	scanf("%d",&opcao); //leitura da opção selecionada
	
	switch(opcao) //switch case é um comando para executar determinada sintaxe de acordo com a opção desejada (AQUI PODERIA SER UTILIZADO O if else)
	{
		case 1: // caso a opção selecionada seja 1
			
			system("cls"); //limpeza de tela
			
						
			printf("Por gentileza, digite o nome do novo contato: "); 
			scanf("%s",&pes[n].nome);
			printf("Digite o número de telefone: ");
			scanf("%d",&pes[n].telefone);
			printf("Digite o email: ");
			scanf("%s",&pes[n].email);
			printf("Digite o endereço: ");
			scanf("%s",&pes[n].endereco);
						
			n=n+1; //aqui aumenta a posição no vetor para o cadastro de novos contatos
			
						
			printf("\n\n\n"); // Aqui é detalhe pessoal
			printf("CONTATO CADASTRADO COM SUCESSO \n%d %d",n,capacidade); //mensagem final e controle sutil das variáveis n e capacidade
			system("pause"); // pausa o programa antes de voltar para o menu
			
			goto a; //comando goto label, serve para fazer a leitura do programa voltar à determinado ponto, nesse caso ponta a:
			
						
		case 2:
		
			system("cls"); //limpeza de tela
			
			char contato[30]; //criação de uma variável para o usuário digitar o nome de busca
			
			printf("\nDigite o nome do contato que pretende apagar: ");
			scanf("%s",&contato);
			
			for(i=0;i<n+1;i++) //laço que passa por todos os contatos cadastrados
			{
				if(strcmp(contato,pes[i].nome)==0) //condicional que compara as strings cadastradas com a string de busca, escolhendo seguir se tiver alguma igual
				{
					
					for(j=i+1;j<n+1;j++) //laço que passa por todos os contatos que estão alocados depois do contado encontrado
					{
						
						strcpy(pes[j-1].nome,pes[j].nome); //mundança de alocação no vetor, trazendo todos os vetores uma casa para baixo. (NOTA: aqui esta copiando as informação para a casa anterior)
						pes[j-1].telefone=pes[j].telefone;
						strcpy(pes[j-1].email,pes[j].email);
						strcpy(pes[j-1].endereco,pes[j].endereco);
						
						printf("\n\nCONTATO APAGADO COM SUSCESSO");
						
					}
					n--; //remoção das informações alocadas na ultima posição cadastradas
					i=n; //aqui serve para encerrar o primeiro laço do case 2:
				}				
			}
						
			printf("\n\n\n");// Aqui é detalhe pessoal
								
			system("pause");
			
			goto a;			
		
		case 3:
			
			system("cls"); //limpeza de tela	
						
			printf("\nDigite o nome do contato que está procurando: ");
			scanf("%s",&busca);
			printf("\n\n");
			
			for(i=0;i<n+1;i++) //laço que passa por todos os contatos cadastrados
			{
				if(strcmp(busca,pes[i].nome)==0) //aqui está comparando as strings com o mesmo nome e imprimindo as informações
				{
					printf("NOME: %s",pes[i].nome);
					printf("\nTELEFONE: %d",pes[i].telefone);
					printf("\nE-MAIL: %s",pes[i].email);
					printf("\nENDEREÇO: %s",pes[i].endereco);
				}
			}
			
			printf("\nFIM DA CONSULTA \nAPERTE ENTER PARA CONTINUAR");
			
			printf("\n\n\n");// Aqui é detalhe pessoal	
									
			system("pause");	
			
			goto a;
				
		case 4:
			
			system("cls"); //limpeza de tela
									
			printf("\nDigite o nome do contato que pretende editar: ");
			scanf("%s",&busca);
			printf("\n\n");
			
			for(i=0;i<n+1;i++) //laço que passa por todos os contatos cadastrados
			{
				if(strcmp(busca,pes[i].nome)==0) //condicional que compara as strings cadastradas com a string de busca, escolhendo seguir se tiver alguma igual
				{
					printf("NOME: %s",pes[i].nome);
					printf("\nTELEFONE: %d",pes[i].telefone);
					printf("\nE-MAIL: %s",pes[i].email);
					printf("\nENDEREÇO: %s",pes[i].endereco);
					
					printf("\n\nESCOLHA UMA OPÇÃO"); //aqui depois de imprimir as informações da agenda apresenta um menu de opções para alteraçãod de cadastro
					printf("\n\n[1] Alterar nome");
					printf("\n[2] Alterar telefone");
					printf("\n[3] Alterar e-mail");
					printf("\n[4] Alterar endereço");
					printf("\n[5] Voltar ao menu inicial");
					
					printf("\n\nESCOLHA: ");
					scanf("%d",&edit);
					
					switch(edit) //os casos aqui apresentados são para substituição das informações de um contato já cadastrado, quando é string utiliza-se o comando strcpy e quanto é número basta substituir direto
					{
						case 1:
							
							system("cls"); //limpeza de tela
														
							char novo_nome[30];
							
							printf("Digite o novo nome: ");
							scanf("%s",&novo_nome);
							
							strcpy(pes[i].nome,novo_nome);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui é detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 2:
						
							system("cls");	//limpeza de tela													
							
							
							printf("Digite o novo telefone: ");
							scanf("%d",&novo_telefone);
							
							pes[i].telefone=novo_telefone;
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui é detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 3:
							
							system("cls"); //limpeza de tela
														
							char novo_email[30];
							
							printf("Digite o novo e-mail: ");
							scanf("%s",&novo_email);
							
							strcpy(pes[i].email,novo_email);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui é detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 4:
							
							system("cls"); //limpeza de tela
														
							char novo_endereco[50];
							
							printf("Digite o novo endereço: ");
							scanf("%s",&novo_endereco);
							
							strcpy(pes[i].endereco,novo_endereco);
							
							printf("\n\nCONTATO ALTERADO");
							
							printf("\n\n\n");// Aqui é detalhe pessoal	
									
							system("pause");	
			
							goto a;
							
						case 5:
							
							goto a;
							
						default:
							
							printf("\nOPÇÃO INVÁLIDA");
			
							printf("\n\n\n"); 	
			
							system("pause");
			
							goto a;
					}
					
				}
			}
			
			printf("\n\n\n");// Aqui é detalhe pessoal
								
			system("pause");
			
			goto a;	
			
		case 5:
			
			system("cls"); //limpeza de tela
			
			printf("\nFIM DO PROGRAMA");
			
			printf("\n\n\n");// Aqui é detalhe pessoal
			
			system("pause");
			
			return 0;
			
					
		default:
			
			printf("\nOPÇÃO INVÁLIDA");
			
			printf("\n\n\n");	
			
			system("pause");
			
			goto a;
			
		
	}
	

}
