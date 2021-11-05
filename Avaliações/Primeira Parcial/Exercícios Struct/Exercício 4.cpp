#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 4. Crie duas structs CORRESPONDECIA (com CEP, rua, numero, bairro, cidade, estado, uma será chamada de A e outra de B. Preencha os dados da A,
 copie os dados para a struct B e imprima a struct B. */



struct CORRESPONDENCIA //struct
{
	char rua [50]; //variável que vai receber o nome da rua
	int numero=0; //variável que vai receber o número da rua
	char bairro[50];
	char cidade[20];
	char estado[15];
	int cep=0;
};

struct CORRESPONDENCIA A;
struct CORRESPONDENCIA B;

int main()
{
	setlocale(LC_ALL,"portuguese"); //coloca idioma
	
	
	
	printf("BEM VINDO AO CADASTRO DE ENDEREÇOS\n"); // mensagem de boas vindas
	printf("NESSE PROGRAMA VOCÊ PODE CADASTRAR SEU ENDEREÇO\n\n");
	
	printf("Por gentileza, digite a rua: ");
	scanf("%s",&A.rua); 
	printf("\n Agora o número: ");
	scanf("%d",&A.numero);
	printf("\n Digite o bairro: "); 
	scanf("%s",&A.bairro); 
	printf("\n Digite o nome da cidade: ");
	scanf("%s",&A.cidade); 
	printf("\n Digite o nome do estado: ");
	scanf("%s",&A.estado); 
	printf("\n Agora digite o CEP: ");
	scanf("%d",&A.cep);
	
	
	strcpy(B.rua,A.rua);
	B.numero=A.numero;
	strcpy(B.bairro,A.bairro);
	strcpy(B.cidade,A.cidade);
	strcpy(B.estado,A.estado);
	B.cep=A.cep;
	
	
	
	system("cls"); // limpa a tela
	
	/*impressão das informações */
	
	printf("SEGUE ABAIXO ENDEREÇO CASASTRADO");
	printf("\nrUA: %s, %d - %s - %s / %s",B.rua,B.numero,B.bairro,B.cidade,B.estado); 
	printf("\nCEP: %d",B.cep);	
	
	printf("\n\n\n");
	
	system("pause"); //pausa o programa
	return 0;	
	
}

