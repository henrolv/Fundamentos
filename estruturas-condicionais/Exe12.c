#include <stdio.h>
#include <stdlib.h>

int main() {

	int anoNascimento = 0, calculoIdade = 0, situacao = 0, anoAtual = 2025;

	printf("Digite o ano do nascimento do usuario: ");
	scanf("%d",&anoNascimento);

	if(anoNascimento < 0){
		printf("Erro, o ano nao pode ser negativo!!\n");
		return 1;
	}

	calculoIdade = anoAtual - anoNascimento;

	if(calculoIdade == 18){
		printf("O usuario ja pode se alistar!\n");
	}else if(calculoIdade > 18){
		situacao = calculoIdade - 18;
		printf("Já se passaram %d ano(s), desdo ano de alistamento!\n",situacao);
	}else{
		situacao = 18 - calculoIdade;
		printf("Falta %d ano(s), para o ano de alistamento!\n",situacao);
	}

return 0;

}