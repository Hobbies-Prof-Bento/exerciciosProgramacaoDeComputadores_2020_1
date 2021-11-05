#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa em C com um menu de opções:

Opção 1: Aloca um nó no início;

Opção 2: Aloca um nó no fim;

Opção 3: Imprime todos os nós;

Opção 4: Localiza um nó e imprime;

Opção 5: Sai do programa.

- O programa deve usar listas simplesmente Encadeadas;

- O programa deve usar Malloc e Free;

- O programa de ser feito em C.

- O programa deve estar corretamente identado

Ao termino do programa você deverá enviar seu código com a extensão C ou CPP em um único arquivo nesta atividade.

*/

struct CADASTRO
{
	
	int valor;
	struct CADASTRO *proximo;
	
};

struct CADASTRO *topo = NULL;
struct CADASTRO *auxiliar = NULL;
struct CADASTRO *auxiliarImpressao = NULL;
struct CADASTRO *cadastro;
struct CADASTRO *fim = NULL;	
int contador = 1;
int contadorBusca;
int opcao, busca;

    /* Nota de programação: Para facilitar o processo, escrevi o programa de uma forma em que ao escolher a 
    opção novo cadastro o programa automaticamente cria um valor para o novo cadastro sendo ele o número sucessor do valor do cadastro anterior.
    Para o primeiro cadastro o valor é 1 */ 

void cadastroInicio(){
	
	auxiliar = topo;
	topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
	topo->valor = contador;
	topo->proximo = auxiliar;
	auxiliarImpressao = topo;
	contador ++;
	printf("CADASTRO REALIZADO COM SUCESSO!!");
	system("cls");
	fflush(stdin);
	
}

void cadastroFinal(){
	
	cadastro = NULL;
	cadastro = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
	fim = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
									
	if(topo == NULL)
	{
		cadastroInicio();
	}
	else
	{
		fim = topo;
		
		while(fim->proximo != NULL)
		{
			fim = fim->proximo;
		}
				
		cadastro->valor = contador;
		cadastro->proximo = NULL;
		fim->proximo = cadastro;
	
	}
			
	contador ++;
	printf("CADASTRO REALIZADO COM SUCESSO!!");
	system("cls");
	fflush(stdin);
}
void pesquisarValor(){
	
	contadorBusca=0;
			
		printf("\n\nPor gentileza digite o valor que procura: ");
		scanf("%d",&busca);
			
		for(int i=1;i<contador;i++)
		{
			
			if(busca == topo->valor)
			{
				
				printf("O endereço do valor %i é: %x",busca,topo);
				printf("\nE o próximo endereço é: %x\n\n",topo->proximo);
				
				contadorBusca++;	
			}	
				
			topo = topo->proximo;
									
		}
			
		topo = auxiliarImpressao;
		fflush(stdin);	
		printf("\nFIM  DA  CONSULTA %i RESULTADOS ENCONTRADOS \nAPERTE  ENTER  PARA CONTINUAR",contadorBusca);
		printf("\n\n\n");// Aqui é detalhe pessoal 
		system("pause"); 
}

void imprimirInformacoes(){
	
	for(int i=1;i<contador;i++)
		{
			printf("O endereço %i é: %x",i,topo);
			printf("\nSeu valor é: %i",topo->valor);
			printf("\nO próximo endereço é: %x\n\n",topo->proximo);
		
			topo = topo->proximo;
		}
			
	topo = auxiliarImpressao;
	printf("\n\n\n");
	system("pause");
	system("cls");
	fflush(stdin);
	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	

  
	a:
	printf("BEM VINDO AO PROGRAMA");
	printf("\n\nSelecione uma opção: ");
	printf("\n[1] novo cadastro inicio\n[2] novo cadastro inicio\n[3] Pesquisar valor\n[4] exibir todos cadastros\n[5] sair do programa");
	printf("\n\nOPÇÃO: ");
	scanf("%d",&opcao);
		
	switch(opcao)
	{
		case 1:
			
			cadastroInicio();
			goto a;			
		
		case 2:
			
			cadastroFinal();
			goto a;	
		
		case 3:
			
			pesquisarValor();
			goto a;
		
		
		case 4:
		
			imprimirInformacoes();
			goto a;
		
		case 5:
			
			free(topo);
    		free(auxiliar);
    		free(auxiliarImpressao);
    		free(cadastro);
    		free(fim);
			
			return 0;
		
		default:
		
			printf("\nOPÇÃO INVÁLIDA");
			
			printf("\n\n\n");	
			
			system("pause");
			
			goto a;
		
	}
	
}

