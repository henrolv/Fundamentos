#include <stdio.h>
#include <stdlib.h>

int main() {

	int codigoProduto = 0;
	double precoProduto = 0, pagamentoTotal = 0.0, quantidadeProdutos = 0.0;

	printf("Digite o codigo do produto: ");
	scanf("%d",&codigoProduto);

	switch (codigoProduto) {

	case 1: {

		precoProduto = 5.00;

	}break;

	case 2: {

		precoProduto = 3.50;

	}break;

	case 3: {

		precoProduto = 4.80;

	}break;

	case 4: {

		precoProduto = 8.90;

	}break;

	case 5: {

		precoProduto = 7.32;

	}break;

	default: {
		printf("Codigo do produto invalido!\n");
		return 1;
	}

	}

	printf("Digite a quantidade de produtos: ");
	scanf("%lf",&quantidadeProdutos);

	pagamentoTotal = precoProduto * quantidadeProdutos;

	printf("Pagamento total = R$ %.2f\n",pagamentoTotal);

return 0;

}