#include <stdio.h>
#include <stdlib.h>

int main() {

	double precoDaGasolina = 0.0, novoPrecoGasolina = 0.0, porcAumentoGasolina = 0.0;

	printf("Digite o preco atual da gasolina: ");
	scanf("%lf",&precoDaGasolina);
	printf("Digite a porcentagem de aumento: ");
	scanf("%lf",&porcAumentoGasolina);

	novoPrecoGasolina = precoDaGasolina + (precoDaGasolina * porcAumentoGasolina / 100);

	printf("Novo preco da gasolina = %.2f\n",novoPrecoGasolina);

return 0;

}