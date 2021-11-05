#include <stdio.h> //biblioteca b�sica
#include <stdlib.h> //biblioteca b�sica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentua��o

/* 6. Fa�a um programa em C que preencha um vetor de struc com a seguinte estrutura:
Nome
Cargo
Telefone
e-mail
Sal�rio

O programa devera:
a) Cadastrar 5 funcion�rios, um ap�s o outro.
b) Imprimir o total dos sal�rios de todos os funcion�rios
c) Informar qual o funcion�rio que possui o maior sal�rio
d) Informar se algum funcion�rio est� com o numero de telefone em branco
 */

struct FUNCIONARIO //cria��o da strict
{
	
	char nome [30]; //cria��o da vari�vel nome
	char cargo [30]; //cria��o da vari�vel cargo
	int telefone=0; //cria��o da vari�vel telefone
	char email[30]; //cria��o da vari�vel email
	float salario=0; //cria��o da vari�vel sal�rio
	
};

struct FUNCIONARIO fun[5]; //cria��o do vetor fun que puxa informa��s da struct FUNCION�RIOS, com cinco espa�os de aloca��o. 

int main() //Ccome�o do programa
{
	
	setlocale(LC_ALL,"portuguese"); //defini��o do idioma para acentua��o
	
	float soma_salario=0; //cria��o de uma variavel formada pelos n�meros reais com valor inicial zero, que servir� para a soma de todos os sal�rios cadastrados
	int i=0,j=0,k=0; //cria��o de vari�veis inteiras que servir�o como contadores nos loopings
	float maior=0; // cria��o de vari�vel formada pelos n�meros reais para computar qual o maior sal�rio entre os funcion�rios, com valor inicial em zero
	
	printf("BEM VINDO AO CADASTRO DE FUNCION�RIOS"); //mensagem de boas vindas
	printf("NESSE PROGRAGA VOC� PODER� CADASTRAR CINCO FUNCION�RIO E RECEBER INFORMA��ES RELEVANTES SOBRE ELES"); //breve instru��o de como funciona o programa
	
	
	for(i=0;i<5;i++) //declara��o do la�o de repeti��o (loop) chamado for, que inicia em 0 e vai repetindo toda a instru��o do bloco at� i chegar em 4
	{
		printf("\n\nCADASTRO [%d]\n\n",i+1); //mensagem que informa qual a posi��o do fincion�rio cadastrado, obs: o i+1 representa � para que a contagem apare�a a partir do 1, pois o i inicia em zero
		printf("Por gentileza digite o nome do funcion�rio: "); //daqui at� o final do bloco ser�o coletas de informa��es
		scanf("%s",&fun[i].nome);
		printf("\nDigite o cargo do funcion�rio: ");
		scanf("%s",&fun[i].cargo);
		printf("\nDigite o n�mero do telefone: ");
		scanf("%d",&fun[i].telefone);
		printf("\nDigite o e-mail: ");
		scanf("%s",&fun[i].email);
		printf("\nDigite o sal�rio em R$: ");
		scanf("%f",&fun[i].salario);
		
		soma_salario=soma_salario+fun[i].salario; //aqui � feito o c�lculo da soma de todos os sal�rios
		
		if(fun[i].salario>maior) //aqui � feito a compara��o entre os sal�rio para verificar qual � o maior
		{
			maior=fun[i].salario; //aqui a variavel "maior" recebe o valor do sal�rio caso o salpario seja superior
		}
		
			
	}
	
	system("cls"); //essa fun��o limpa a tela de impress�o
	
	printf("A soma de todos os sal�rios � igual a R$%.2f",soma_salario); //aqui esta sendo impresso a soma dos sal�rios, note que tem a express�o "%.2f" isso significa que eu quero que imprima apenas duas casas depois da v�rgula

	//OBS: note que a soma est� sendo impressa fora do la�o de repeti��o, isso � devido ao fato de que se fosse dentro do la�o, a vari�vel seria impressa para cada valor de i
	
	printf("\n\nO(s) funcion�rio(s) que possui(em) o maior(es) sal�rio(s) �(s�o):\n");
	for(j=0;j<5;j++) //aqui � outro la�o, agora utilizando o contador j
	{
		if(fun[j].salario==maior) //essa condicional verifica quais funcion�rios que possuem o maior sal�rio
		{
			
			printf("%s que recebe R$ %.2f\n",fun[j].nome,fun[j].salario); //aqui imprime o nome e o sal�rio do funcion�rio com maior sal�rio
			
		}
		
				
	}
	
	for(k=0;k<5;k++) //aqui � outro la�o, agora utilizando o contador k
	{
		
		if(fun[k].telefone==0) //essa condicional identifica qual dos n�meros telef�nicos est�o com o valor inicial da vari�vel. NOTA: n�o estou satisfeito ainda com como fiz essa parte.
		{
			
			printf("\nO funcion�rio %s deixou o n�mero de telefone em branco.",fun[k].nome); //aqui imprime o nome de quem n�o tem o telefone preenchido
			
		}
	}

printf("\n\n\n");// Aqui � detalhe pessoal

system("pause"); //Aqui � um comando para o sistema parar antes de fechar o programa, no compilador n�o precisa, mas se for usar o executavel precisa.


return 0; //encerra o programa
}
