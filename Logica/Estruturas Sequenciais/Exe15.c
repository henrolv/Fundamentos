#include <stdio.h>
#include <stdlib.h>

int main() {

	int diasTrabalhadados = 0, horasTrabalhadasDiaria = 8;
	double valorHora = 0.0, salarioFuncionario = 0.0;

	printf("Digite a quantidade de dias trabalhados: ");
	scanf("%d",&diasTrabalhadados);
	printf("Digite o valor recebido por hora: ");
	scanf("%lf",&valorHora);

	salarioFuncionario = diasTrabalhadados * (valorHora * horasTrabalhadasDiaria);

	printf("\nSalario do funcionario = R$ %.2f\n",salarioFuncionario);

return 0;

}