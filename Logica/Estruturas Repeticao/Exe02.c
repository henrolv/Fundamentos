#include <stdio.h>
#include <stdlib.h>

int main() {

	int senha = 0, password = 0;

	printf("Digite uma senha de numeros inteiros positivos: ");
	scanf("%d",&senha);

	if(senha <= 0){
		printf("Erro, Formato de Senha Invalido!\n");
		return 1;
	}

	do{

		printf(".......\nDigite a senha armazenada: \n");
		scanf("%d",&password);
		
		if(password != senha){
			printf("Senha Invalida\n");
		}

	}while(password != senha);

	printf(".......\nAcesso autorizado!\n");

return 0;

}