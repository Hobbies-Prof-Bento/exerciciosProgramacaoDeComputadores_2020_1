#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* 1. Crie um programa com C que aloque duas estruturas como nos slides anteriores. Com nome e idade;
Preencha os dados e imprima as duas estruturas (dados e ponteiros)
Imprima todos os endere�os das vari�veis e desenha o mapa da RAM com os endere�os reais. (dos ponteiros e das aloca��es das structs) */

struct CADASTRO // Cria uma estrutura chamada cadastro.
{
	
	char nome[30]; //cria uma vari�vel nome dentro do CADASTRO.
	char idade[30]; //cria uma vari�vel idade dentro do CADASTRO.
	struct CADASTRO *proximo; //cria um ponteiro chamado pr�ximo que chama a estrutura CADASTRO novamente (� um CADASTRO  dentro de outro CADASTRO usando a mesma estrutura).
};

int main() //inicia o programa.
{
	setlocale(LC_ALL,"portuguese"); //define idioma para acentua��o.
	struct CADASTRO *topo = NULL; //cria um ponteiro chamado topo com nenhuma informa��o.
	struct CADASTRO *auxiliar = NULL; //cria um ponteiro auxiliar para salvar informa��es que ser�o perdidas no ponteiro topo.
	topo = (struct CADASTRO*) malloc(sizeof(struct CADASTRO)); //cria um valor (endere�o) para o ponteiro.
	auxiliar = (struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //cria um valor (endere�o) para o ponteiro.
	
	printf("BEM VINDO AO CADASTRO DE NOME E IDADE");//mensagem de boas vindas.
		
	for(int i=0;i<4;i++)
	{
	
		
		
		printf("\n\nPor gentileza digite o nome: ");//mensagem de instru��es.
		scanf("%s",topo->nome); //leitura no nome digitado pelo teclado.
		printf("\nAgora digite sua idade: ");//mensagem de instru��es.
		scanf("%d",topo->idade);//leitura da idade digitada.
	
		topo ->proximo = auxiliar;//define a estrutura CADASTRO que est� dentro da estrutura CADASTRO como sendo nulo.
		auxiliar = topo;//copia o endete�o do ponteiro topo.
		
		topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //cria um novo valor (ENDERE�O) para o ponteiro topo.
	
				
	
	}
	system("cls"); //limpa a tela.
	printf("OS NOMES E IDADES CADASTRADOS FORAM");//mensagem.
	
	for(int i=0;i<4;i++)
	{
		printf("\n\nNome: %s", topo->nome); //imprime o nome do topo atual.
		printf("\nidade: %s", topo->idade); //imprime idade do topo atual.
	
		topo = topo->proximo; //topo recebe informa��es do topo anterior.
	
	}
	
	printf("\n\n\n"); //detalhe pessoal.

	system ("pause"); //detalhe pessoal.
	
	return 0; //encerra o programa.
	
	
	
}
