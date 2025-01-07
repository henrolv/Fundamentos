#include <stdio.h>
#include <stdlib.h>

int main() {

	double valorDespesa = 0.0, porcGorjeta = 0.0, pagamentoPorPessoa = 0.0;
	int numPagamentes = 0;

	printf("Digite o valor da despesa: ");
	scanf("%lf",&valorDespesa);
	printf("Digite a porcentagem da gorjeta: ");
	scanf("%lf",&porcGorjeta);
	printf("Digite o numero de pessoas a pagar: ");
	scanf("%d",&numPagamentes);

	pagamentoPorPessoa = (valorDespesa + (valorDespesa * porcGorjeta / 100) ) / numPagamentes;

	printf("Pagamento por pessoa: %.2lf\n",pagamentoPorPessoa);

return 0;

}