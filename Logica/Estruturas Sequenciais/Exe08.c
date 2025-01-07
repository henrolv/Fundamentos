#include <stdio.h>
#include <stdlib.h>

int main() {

	double precoProduto = 0.0, descontoProduto = 0.0, precoComDesconto = 0.0;

	printf("Digite o valor do produto: ");
	scanf("%lf",&precoProduto);
	printf("Digite a porcentagem de desconto: ");
	scanf("%lf",&descontoProduto);

	precoComDesconto = precoProduto - ( precoProduto * descontoProduto / 100);

	printf("Preco do produto com desconto: %.2f\n",precoComDesconto);

return 0;

}

