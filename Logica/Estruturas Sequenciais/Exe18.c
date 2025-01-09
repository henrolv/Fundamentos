#include <stdio.h>
#include <stdlib.h>

int main() {

	double precoProduto = 0.0, precoProdutoComDesconto = 0.0;
	int descontoPromocional = 5;

	printf("Digite o preco do produto R$ = ");
	scanf("%lf",&precoProduto);

	precoProdutoComDesconto = precoProduto - (precoProduto * descontoPromocional / 100);

	printf("Preco do produto = R$ %.2f\n",precoProdutoComDesconto);

return 0;

}