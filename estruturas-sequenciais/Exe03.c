#include <stdio.h>
#include <stdlib.h>

int main() {

	double precoProduto = 0.0, quantidadesCompradas = 0.0, valorPagoCliente = 0.0, trocoDoCliente = 0.0;

	printf("Digite o preco da mercadoria: ");
	scanf("%lf",&precoProduto);
	printf("Digite a quantidades compradas: ");
	scanf("%lf",&quantidadesCompradas);
	printf("Digite o valor pago pelo cliente: ");
	scanf("%lf",&valorPagoCliente);

	trocoDoCliente = valorPagoCliente - (precoProduto * quantidadesCompradas);

	printf("Troco do cliente = %.2f",trocoDoCliente);

return 0;

}