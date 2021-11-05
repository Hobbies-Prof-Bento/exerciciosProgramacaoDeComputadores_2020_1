#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* 1. Crie um programa com C que aloque duas estruturas como nos slides anteriores. Com nome e idade;
Preencha os dados e imprima as duas estruturas (dados e ponteiros)
Imprima todos os endereços das variáveis e desenha o mapa da RAM com os endereços reais. (dos ponteiros e das alocações das structs) */

struct CADASTRO // Cria uma estrutura chamada cadastro.
{
	
	char nome[30]; //cria uma variável nome dentro do CADASTRO.
	char idade[30]; //cria uma variável idade dentro do CADASTRO.
	struct CADASTRO *proximo; //cria um ponteiro chamado próximo que chama a estrutura CADASTRO novamente (é um CADASTRO  dentro de outro CADASTRO usando a mesma estrutura).
};

int main() //inicia o programa.
{
	setlocale(LC_ALL,"portuguese"); //define idioma para acentuação.
	struct CADASTRO *topo = NULL; //cria um ponteiro chamado topo com nenhuma informação.
	struct CADASTRO *auxiliar = NULL; //cria um ponteiro auxiliar para salvar informações que serão perdidas no ponteiro topo.
	topo = (struct CADASTRO*) malloc(sizeof(struct CADASTRO)); //cria um valor (endereço) para o ponteiro.
	auxiliar = (struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //cria um valor (endereço) para o ponteiro.
	
	printf("BEM VINDO AO CADASTRO DE NOME E IDADE");//mensagem de boas vindas.
	printf("\n\nPor gentileza digite seu nome: ");//mensagem de instruções.
	scanf("%s",topo->nome); //leitura no nome digitado pelo teclado.
	printf("\nAgora digite sua idade: ");//mensagem de instruções.
	scanf("%s",topo->idade);//leitura da idade digitada.
	
	topo ->proximo = NULL;//define a estrutura CADASTRO que está dentro da estrutura CADASTRO como sendo nulo.
	auxiliar = topo;//copia o endeteço do ponteiro topo.
	
	topo = (struct CADASTRO*)malloc(sizeof(struct CADASTRO)); //cria um novo valor (ENDEREÇO) para o ponteiro topo.
	
	printf("\n\n-------------------------------------------\n\n"); //Apenas um separador.
	printf("Por gentileza, agora digite o nome de um conhecido: "); //mensagem de orientação.
	scanf("%s",topo->nome); //leitura do novo nome.
	printf("\nAgora digite a idade desse conhecido: "); //mensagem de orientação;
	scanf("%s",topo->idade); //leitura da nova idade.
	
	topo->proximo=auxiliar;//define a estrutura CADASTRO que esta dentro da estrutura CADASTRO como "auxiliar".
	auxiliar = topo; //copia o novo endereço do ponteiro topo.
	
	system("cls"); //limpa a tela.
	
	printf("OS NOMES E IDADES CADASTRADOS FORAM");//mensagem.
	printf("\n\nNome: %s", topo->nome); //imprime o nome do topo atual.
	printf("\nIdade: %s", topo->idade); //imprime idade do topo atual.
	printf("\nEstá alocado no endereço: %x: ",topo); //imprime o endereço da estrutura.
	printf("\nO próximo endereço é: %x ",topo->proximo); //imprime o endereço da próxima estrutura.
	
	topo = topo->proximo; //topo recebe informações do topo anterior.
	
	printf("\n\nNome: %s", topo->nome); //imprime nome do topo anterior.
	printf("\nidade: %s", topo->idade); //imprime idade do topo anterior.
	printf("\nEstá alocado no endereço: %x: ",topo); //imprime o endereço da estrutura.
	printf("\nO próximo endereço é: %x ",topo->proximo); //imprime o endereço da próxima estrutura.
	

	printf("\n\n\n"); //detalhe pessoal.

	system ("pause"); //detalhe pessoal.
	
	return 0; //encerra o programa.
	
	
	
	
	
}

