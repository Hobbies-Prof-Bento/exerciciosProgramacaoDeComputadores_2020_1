#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 5. Crie um vetor com 5 structs CADASTRO (com nome e idade), cadastre os dados em um loop,
 em um segundo loop busque a sctruct que tem a maior idade e imprima. */



struct CADASTRO //struct
{
	char nome[50]; 
	int idade=0; 
	
};

struct CADASTRO cad[5];

int main()
{
	setlocale(LC_ALL,"portuguese"); //coloca idioma
	
	int maior=0;
	int i=0, j=0, posicao=0;
	
	printf("BEM VINDO AO CADASTRO DE NOME E IDADE\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOCÊ PODE CADASTRAR NOMES E IDADES\n\n");
	printf("O PROGRAMA IRÁ ANALISAR QUEM TEM A MAIOR IDADE E REVELAR O NOME\n\n");	
	
for(i=0;i<5;i++)
	{
		
		printf("\n\nCADASTRO [%d]\nPor gentileza, digite o nome: ",i+1);
		scanf("%s",&cad[i].nome);
		printf("\n Por gentileza digite a idade: ");
		scanf("%d",&cad[i].idade);
		
		if(cad[i].idade>maior)
		{
			
			maior = cad[i].idade;
			
		}
		
		
	}
	


	/*impressão das informações */

printf("O(S) NOME(S) QUE POSSUE(M) A(S) MAIOR(ES) IDADE(S) É(SÃO): \n");
	
for(j=0;j<5;j++)

	{
	
		if(cad[j].idade==maior)
		{
			
			printf("\n%s com %d anos.",cad[j].nome,cad[j].idade);
			
		}
	
	}
	
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

