#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5. Crie um programa em C com um menu de op��es:
Op��o 1: Aloca um n� no in�cio;
Op��o 2: Aloca um n� no fim;
Op��o 3: Imprime todos os n�s;
Op��o 4: Localiza um n� e imprime;
Op��o 5: Sai do programa.

*/
struct CADASTRO
{
	
	int valor;
	struct CADASTRO *proximo;
	
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct CADASTRO *topo = NULL;
	struct CADASTRO *auxiliar = NULL;
	struct CADASTRO *auxiliarImpressao = NULL;
	struct CADASTRO *cadastro;
	struct CADASTRO *fim = NULL;	
	int contador = 1;
	int contadorBusca;
	int opcao, busca;
	
    /* Nota de programa��o: Para facilitar o processo, escrevi o programa de uma forma em que ao escolher a 
    op��o novo cadastro o programa automaticamente cria um valor para o novo cadastro sendo ele o n�mero sucessor do valor do cadastro anterior.
    Para o primeiro cadastro o valor � 1 */ 

	
	a:
	printf("BEM VINDO AO PROGRAMA");
	printf("\n\nSelecione uma op��o: ");
	printf("\n[1] novo cadastro inicio\n[2] novo cadastro inicio\n[3] Pesquisar valor\n[4] exibir todos cadastros\n[5] sair do programa");
	printf("\n\nOP��O: ");
	scanf("%d",&opcao);
	
	
	switch(opcao)
	{
		case 1:
			b:
			auxiliar = topo;
			topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
			topo->valor = contador;
			topo->proximo = auxiliar;
			auxiliarImpressao = topo;
			contador ++;
			printf("CADASTRO REALIZADO COM SUCESSO!!");
			system("cls");
			fflush(stdin);
			goto a;			
		
		case 2:
			cadastro = NULL;
			cadastro = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
			fim = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
									
			if(topo == NULL)
			{
				goto b;
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
			goto a;	
		
		case 3:
			
			contadorBusca=0;
			
			printf("\n\nPor gentileza digite o valor que procura: ");
			scanf("%d",&busca);
			
			for(int i=1;i<contador;i++)
			{
			
				if(busca == topo->valor)
				{
				
				printf("O endere�o do valor %i �: %x",busca,topo);
				printf("\nE o pr�ximo endere�o �: %x\n\n",topo->proximo);
				
				contadorBusca++;	
				}	
				
				topo = topo->proximo;
									
			}
			topo = auxiliarImpressao;
			
			printf("\nFIM  DA  CONSULTA %i RESULTADOS ENCONTRADOS \nAPERTE  ENTER  PARA CONTINUAR",contadorBusca);
			printf("\n\n\n");// Aqui � detalhe pessoal 
			system("pause"); 
			goto a;
		
		
		case 4:
		
			for(int i=1;i<contador;i++)
			{
				printf("O endere�o %i �: %x",i,topo);
				printf("\nSeu valor �: %i",topo->valor);
				printf("\nO pr�ximo endere�o �: %x\n\n",topo->proximo);
		
				topo = topo->proximo;
			}
			topo = auxiliarImpressao;
			printf("\n\n\n");
			system("pause");
			system("cls");
			fflush(stdin);
			goto a;
		
		case 5:
		
			return 0;
		
		default:
		
			printf("\nOP��O INV�LIDA");
			
			printf("\n\n\n");	
			
			system("pause");
			
			goto a;
		
	}
	
}
