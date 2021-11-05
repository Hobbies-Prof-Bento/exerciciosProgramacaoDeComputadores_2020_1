#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct CADASTRO
{
	char nome [30];
	int	idade =0;
};



int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	struct CADASTRO usuario;
	
	printf("Seja bem vindo ao cadasto de usuários");
	printf("\n\nPor gentileza digite seu nome: ");
	scanf("%s", &usuario.nome);
	printf("\nAgora sua idade: ");
	scanf("%s", &usuario.idade);
	
	//system(cls);
	
	printf("Você se chama %s e tem %s anos", usuario.nome, usuario.idade);
	
	
	printf("O endereço da struct é %x", &usuario.nome);
	
	return 0;
	
	
	
	


}
