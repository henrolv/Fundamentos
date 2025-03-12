#include <stdio.h>
#include <stdlib.h>

int main() {

	int diasAluagadosVeiculo = 0;
	double kmPercorridos = 0.0, aluguelDiaVeiculo = 90.00, taxaPorKm = 0.20, pagamentoTotal = 0.0;

	printf("Digite a quantidade de dias de aluguel: ");
	scanf("%d",&diasAluagadosVeiculo);
	printf("Digite a quantidade de KMs percorridos: ");
	scanf("%lf",&kmPercorridos);

	pagamentoTotal = (diasAluagadosVeiculo * aluguelDiaVeiculo) + (kmPercorridos * taxaPorKm);

	printf("Pagamento Total = R$ %.2f\n",pagamentoTotal);

return 0;

}