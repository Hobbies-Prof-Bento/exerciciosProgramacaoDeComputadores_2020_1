#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3. Crie um programa em C com um menu de opções:
Opção 1: Aloca um nó no início;
Opção 2: Imprime todos os nós;
Opção 3: Sai do programa.
*/

struct CADASTRO
{
	
	int valor;
	struct CADASTRO *proximo;
	
};

    /* Nota de programação: Para facilitar o processo, escrevi o programa de uma forma em que ao escolher a 
    opção novo cadastro o programa automaticamente cria um valor para o novo cadastro sendo ele o número sucessor do valor do cadastro anterior.
    Para o primeiro cadastro o valor é 1 */ 


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct CADASTRO *topo = NULL;
	struct CADASTRO *auxiliar = NULL;
	struct CADASTRO *auxiliarImpressao = NULL;	
	int contador = 0;
	int opcao;
	a:
	printf("BEM VINDO AO PROGRAMA");
	printf("\n\nSelecione uma opção: ");
	printf("\n[1] novo cadastro\n[2] exibir todos cadastros\n[3] sair do programa");
	printf("\n\nOPÇÃO: ");
	scanf("%d",&opcao);
	
	
	switch(opcao)
	{
		case 1:
		
			auxiliar = topo;
			topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO));
			topo->valor = contador+1;
			topo->proximo = auxiliar;
			auxiliarImpressao = topo;
			contador ++;
			system("cls");
			fflush(stdin);
			goto a;			
		
		case 2:
		
			for(int i=1;i<=contador;i++)
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
			goto a;
		
		case 3:
		
			return 0;
		
		default:
		
			printf("\nOPÇÃO INVÁLIDA");
			
			printf("\n\n\n");	
			
			system("pause");
			
			goto a;
		
	}
	
}
