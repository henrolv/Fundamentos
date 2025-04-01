#include <stdio.h>
#include <stdlib.h>

int main() {

	int opcao = 0;
	double valorMercadoria = 0.0, porcDesconto = 0.0, pagamento = 0.0;

	printf("(1) Homem\n(2) Mulher\nDigite uma opcao do menu\n");
	scanf("%d",&opcao);

	if(opcao != 1 && opcao != 2){
		printf("Erro, opcao invalida!\n");
		return 1;
	}

	printf("Digite o valor da mercadoria: ");
	scanf("%lf",&valorMercadoria);

	if(opcao == 1){
		porcDesconto = 0.05;
	}else{
		porcDesconto = 0.13;
	}

	pagamento = valorMercadoria - (valorMercadoria * porcDesconto);

	if(opcao == 2) {
		printf("\nParabens!\nPromocao dia da mulher, voce ganhou %.2f %% de desconto\n",porcDesconto * 100);
		printf("Preco com desconto = R$ %.2f\n",pagamento);
		return 0;
	}

	printf("\nPreco com desconto = R$ %.2f\n",pagamento);

return 0;

}