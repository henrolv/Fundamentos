#include <stdio.h>
#include <stdlib.h>

int main() {

	int generoSexual = 0, anosDeEmpresa = 0;
	double salarioAtual = 0.0, novoSalario = 0.0, porcAumento = 0.0;

	printf("Digite o genero sexual do funcionario\n1-Masculino\n2-Feminino\n");
	scanf("%d",&generoSexual);

	if(generoSexual != 1 && generoSexual != 2){
		printf("Erro, voce digitou uma opcao diferente do menu!\n");
		return 1;
	}

	printf("Digite o salario atual: ");
	scanf("%lf",&salarioAtual);
	printf("Digite ha quantos anos o funcionario trabalha na empresa: ");
	scanf("%d",&anosDeEmpresa);

	if(generoSexual == 1){

		if(anosDeEmpresa < 20){
			porcAumento = 0.03;
		}else if(anosDeEmpresa <= 30){
			porcAumento = 0.13;
		}else{
			porcAumento = 0.25;
		}

	}else if(generoSexual == 2){

		if(anosDeEmpresa < 15){
			porcAumento = 0.05;
		}else if(anosDeEmpresa <= 20){
			porcAumento = 0.12;
		}else{
			porcAumento = 0.23;
		}

	}

	novoSalario = salarioAtual + (salarioAtual * porcAumento);

	printf("Salario Atual = R$ %.2f\n",salarioAtual);
	printf("Anos de empresa: %d\n",anosDeEmpresa);
	printf("Porcentagem de aumento = %.2f%%\n",porcAumento * 100);
	printf("Novo salario = %.2f\n",novoSalario);

return 0;

}