#include <stdio.h>
#include <stdlib.h>

int main(){

	int password = 123456, senha = 0;

	printf("Digite a senha de acesso:\n");
	scanf("%d",&senha);

	while(senha != password){
		printf("Senha invalida, digite a senha novamente: ");
		scanf("%d",&senha);
	}

	printf("\nAcesso autorizado!");

return 0;

}