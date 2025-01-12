#include <stdio.h>
#include <stdlib.h>

int main() {

	double salarioFuncionario = 0.0, novoSalarioFuncionario = 0.0, porcAumento = 0.0, acrescimo = 0.0;

	printf("Digite o valor do salario: ");
	scanf("%lf",&salarioFuncionario);
	
	if(salarioFuncionario < 0.00){
		printf("Erro, o salario nao pode ser negativo!\n");
		return 1;
	}

	if(salarioFuncionario <= 1000.00){
		porcAumento = 20.00;
	}else if(salarioFuncionario <= 3000.00){
		porcAumento = 15.00;
	}else if(salarioFuncionario <= 8000.00){
		porcAumento = 10.00;
	}else{
		porcAumento = 5.00;
	}

	novoSalarioFuncionario = salarioFuncionario + (salarioFuncionario * porcAumento / 100);
	acrescimo = salarioFuncionario * porcAumento / 100;

	printf("\nSalario atual = R$ %.2f\n",salarioFuncionario);
	printf("Porcentagem de aumento = %.2f%%\n",porcAumento);
	printf("Aumento de = R$ %.2f\n",acrescimo);
	printf("Novo salario = R$ %.2f\n",novoSalarioFuncionario);

return 0;

}