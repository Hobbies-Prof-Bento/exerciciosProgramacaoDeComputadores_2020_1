#include <stdio.h> //biblioteca básica
#include <stdlib.h> //biblioteca básica
#include <string.h> //biblioteca para operar strings
#include <locale.h> //biblioteca de idiomas para acentuação

/* 8. Desafio. Usando o programa do item 6 tente salvar os dados em arquivo
Imprima o vetor de struct em um arquivo txt
Pesquise sobre fopen(), fwrite(), fread()

 */

struct FUNCIONARIO //criação da strict
{
	
	char nome [30]; //criação da variável nome
	char cargo [30]; //criação da variável cargo
	int telefone=0; //criação da variável telefone
	char email[30]; //criação da variável email
	float salario=0; //criação da variável salário
	
};

struct FUNCIONARIO fun[5]; //criação do vetor fun que puxa informaçõs da struct FUNCIONÁRIOS, com cinco espaços de alocação. 

int main() //Ccomeço do programa
{
	
	setlocale(LC_ALL,"portuguese"); //definição do idioma para acentuação
	
	FILE *save_cadastro; //ponteiro padrão utilizado para salvar em arquivo de txt ou código com o nome save_contatos	
	save_cadastro=fopen("cadastro_funcionarios.txt","r"); //comando para abrir o arquivo com o nome do arquivo na primeira opção e o na segunda opção é o tipo de operação, nesse caso é a leitura
	
	float soma_salario=0; //criação de uma variavel formada pelos números reais com valor inicial zero, que servirá para a soma de todos os salários cadastrados
	int i=0,j=0,k=0,l=0; //criação de variáveis inteiras que servirão como contadores nos loopings
	float maior=0; // criação de variável formada pelos números reais para computar qual o maior salário entre os funcionários, com valor inicial em zero

	if(save_cadastro==NULL){ //condicional para verificar a existencia do arquivo a ser aberto, se não exitir o arquivo exibir uma mensagem
		
		printf("ARQUIVO NÃO ENCONTRADO");
		
		printf("\n\n\n");
		
		system("pause");
		
	
	}
	
	else //caso contrário ler o documento já existente
	{
		
		fread(fun,sizeof(struct FUNCIONARIO),5,save_cadastro); //esse aqui é um comando de leitura do arquivo aberto.
		
		fclose(save_cadastro); //Esse daqui serve para fechar o arquivo que foi aberto pelo fopen
		
	}
	
	
	printf("INFORMAÇÕES SOBRE FUNCIONÁRIOS JÁ CADASTRADOS"); //Nesse bloco até o final do for é para verificar se tem informações no arquivo
	
	for(l=0;l<5;l++)
	{
		if(fun[l].nome!=NULL)
		{
			
			printf("\n\nNOME: %S",fun[l].nome);
			printf("\nCARGO: %S",fun[l].cargo);
			printf("\nTELEFONE: %d",fun[l].telefone);
			printf("\nE-MAIL: %S",fun[l].email);
			printf("\nSALÁRIO: %.2f",fun[l].salario);
			
		}
		
		else
		{
			
			printf("\n\nNENHUM FUNCIONÁRIO CADASTRADO");
			
		}
		
	}
	
	printf("\n\n\n");
	system("pause");
	system("cls");
	
	//Aqui começa o programa de cadastro de funcionários
	
	
	printf("BEM VINDO AO CADASTRO DE FUNCIONÁRIOS"); //mensagem de boas vindas
	printf("NESSE PROGRAGA VOCÊ PODERÁ CADASTRAR CINCO FUNCIONÁRIO E RECEBER INFORMAÇÕES RELEVANTES SOBRE ELES"); //breve instrução de como funciona o programa
	
	
	for(i=0;i<5;i++) //declaração do laço de repetição (loop) chamado for, que inicia em 0 e vai repetindo toda a instrução do bloco até i chegar em 4
	{
		printf("\n\nCADASTRO [%d]\n\n",i+1); //mensagem que informa qual a posição do fincionário cadastrado, obs: o i+1 representa é para que a contagem apareça a partir do 1, pois o i inicia em zero
		printf("Por gentileza digite o nome do funcionário: "); //daqui até o final do bloco serão coletas de informações
		scanf("%s",&fun[i].nome);
		printf("\nDigite o cargo do funcionário: ");
		scanf("%s",&fun[i].cargo);
		printf("\nDigite o número do telefone: ");
		scanf("%d",&fun[i].telefone);
		printf("\nDigite o e-mail: ");
		scanf("%s",&fun[i].email);
		printf("\nDigite o salário em R$: ");
		scanf("%f",&fun[i].salario);
		
		soma_salario=soma_salario+fun[i].salario; //aqui é feito o cálculo da soma de todos os salários
		
		if(fun[i].salario>maior) //aqui é feito a comparação entre os salário para verificar qual é o maior
		{
			maior=fun[i].salario; //aqui a variavel "maior" recebe o valor do salário caso o salpario seja superior
		}
		
			
	}
	
	system("cls"); //essa função limpa a tela de impressão
	
	printf("A soma de todos os salários é igual a R$%.2f",soma_salario); //aqui esta sendo impresso a soma dos salários, note que tem a expressão "%.2f" isso significa que eu quero que imprima apenas duas casas depois da vírgula

	//OBS: note que a soma está sendo impressa fora do laço de repetição, isso é devido ao fato de que se fosse dentro do laço, a variável seria impressa para cada valor de i
	
	printf("\n\nO(s) funcionário(s) que possui(em) o maior(es) salário(s) é(são):\n");
	for(j=0;j<5;j++) //aqui é outro laço, agora utilizando o contador j
	{
		if(fun[j].salario==maior) //essa condicional verifica quais funcionários que possuem o maior salário
		{
			
			printf("%s que recebe R$ %.2f\n",fun[j].nome,fun[j].salario); //aqui imprime o nome e o salário do funcionário com maior salário
			
		}
		
				
	}
	
	for(k=0;k<5;k++) //aqui é outro laço, agora utilizando o contador k
	{
		
		if(fun[k].telefone==0) //essa condicional identifica qual dos números telefônicos estão com o valor inicial da variável. NOTA: não estou satisfeito ainda com como fiz essa parte.
		{
			
			printf("\nO funcionário %s deixou o número de telefone em branco.",fun[k].nome); //aqui imprime o nome de quem não tem o telefone preenchido
			
		}
	}
	
	save_cadastro=fopen("cadastro_funcionarios.txt","w"); //essa parte aqui serve para abrir/criar documento para escrita
	fwrite(fun,sizeof(struct FUNCIONARIO),5,save_cadastro); //essa parte aqui serve para escrever as informações no documento
	fclose(save_cadastro); //essa parte aqui serve para fechar o documento aberto em fopen

printf("\n\n\n");// Aqui é detalhe pessoal

system("pause"); //Aqui é um comando para o sistema parar antes de fechar o programa, no compilador não precisa, mas se for usar o executavel precisa.


return 0; //encerra o programa
}
