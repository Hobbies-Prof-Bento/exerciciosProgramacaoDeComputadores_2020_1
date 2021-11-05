#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* 2. Crie um programa com C que aloque quatro estruturas como nos slides anteriores. Com nome e idade;
Preencha os dados e imprima as duas estruturas (dados e ponteiros)
Imprima todos os endere�os das vari�veis e desenha o mapa da RAM com os endere�os reais. (dos ponteiros e das aloca��es das structs)
 */

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
	
	printf("\n\nPor gentileza digite o 1� nome: ");//mensagem de instru��es.
	scanf("%s",topo->nome); //leitura no nome digitado pelo teclado.
	printf("\nAgora digite a idade: ");//mensagem de instru��es.
	scanf("%s",topo->idade);//leitura da idade digitada.
	
	topo ->proximo = NULL;//define a estrutura CADASTRO que est� dentro da estrutura CADASTRO como sendo nulo.
	auxiliar = topo;//copia o endete�o do ponteiro topo.

	for(int i=2;i<5;i++) //inicia um la�o de repeti��o para n�o precisar digitar muitas linhas de c�digo.
	{
	
		topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //cria um novo valor (ENDERE�O) para o ponteiro topo.
		
		printf("\n\nPor gentileza digite o %d� nome: ",i);//mensagem de instru��es.
		scanf("%s",topo->nome); //leitura no nome digitado pelo teclado.
		printf("\nAgora digite a idade: ");//mensagem de instru��es.
		scanf("%s",topo->idade);//leitura da idade digitada.
	
		topo ->proximo = auxiliar;//define a estrutura CADASTRO que est� dentro da estrutura CADASTRO como sendo "auxiliar".
		auxiliar = topo;//copia o endete�o do ponteiro topo.
	
				
	
	}
	system("cls"); //limpa a tela.
	printf("OS NOMES E IDADES CADASTRADOS FORAM");//mensagem.
	
	for(int i=0;i<4;i++) //la�o de repeti��o para economizar linha de c�digo.
	{
		printf("\n\nNome: %s", topo->nome); //imprime o nome do topo atual.
		printf("\nidade: %s", topo->idade); //imprime idade do topo atual.
		printf("\nEst� alocado no endere�o: %x: ",topo); //imprime o endere�o da estrutura.
		printf("\nO pr�ximo endere�o �: %x ",topo->proximo); //imprime o endere�o da pr�xima estrutura.
	
	
		topo = topo->proximo; //topo recebe informa��es do topo anterior.
	
	}
	
	printf("\n\n\n"); //detalhe pessoal.

	system ("pause"); //detalhe pessoal.
	
	return 0; //encerra o programa.
	
	
	
}
