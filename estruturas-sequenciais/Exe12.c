#include <stdio.h>
#include <stdlib.h>

int main() {

	int diasTrabalhados = 0;
	double valorDiaFuncionario = 0.0, pagamentoFuncionario = 0.0, pagamentoComDesconto = 0.0;

	printf("Digite o valor dia do funcionario: ");
	scanf("%lf",&valorDiaFuncionario);
	printf("Digite a quantidade de dias trabalhados: ");
	scanf("%d",&diasTrabalhados);

	pagamentoFuncionario = valorDiaFuncionario * diasTrabalhados;
	pagamentoComDesconto = pagamentoFuncionario - (pagamentoFuncionario * 0.08);

	printf("Pagamento do funcionario com desconto: %.2f\n",pagamentoComDesconto);

return 0;

}