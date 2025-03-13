#include <stdio.h>
#include <stdlib.h>

int main() {

	int porcentagemAumento = 15;
	double salarioFuncionario = 0.0, novoSalarioFuncionario = 0.0;

	printf("Digite o salario atual do funcionario R$ = ");
	scanf("%lf",&salarioFuncionario);

	novoSalarioFuncionario = salarioFuncionario + (salarioFuncionario * porcentagemAumento / 100);

	printf("Novo salario com aumento = R$ %.2f\n",novoSalarioFuncionario);

return 0;

}