#include <stdio.h>
#include <stdlib.h>

int main() {

	double precoProduto = 0.0, unidadesCompradas = 0.0, dinheiroPagoCliente = 0.0, trocoDoCliente = 0.0, pagamentoTotal = 0.0;

	printf("Digite o preco do produto: ");
	scanf("%lf",&precoProduto);
	printf("Digite a quantidades compradas: ");
	scanf("%lf",&unidadesCompradas);
	printf("Digite o valor pago pelo cliente R$: ");
	scanf("%lf",&dinheiroPagoCliente);

	pagamentoTotal = precoProduto * unidadesCompradas;
	trocoDoCliente = dinheiroPagoCliente - pagamentoTotal;

	if(dinheiroPagoCliente < pagamentoTotal){
		printf("Dinheiro insuficiente!, faltam = R$ %.2f\n",pagamentoTotal - dinheiroPagoCliente);
		return 1;
	}

	printf("Troco do cliente = R$ %.2f\n",trocoDoCliente);

return 0;

}