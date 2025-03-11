#include <stdio.h>
#include <stdlib.h>

int main() {

	double reais = 0.0, dolar = 0.0, taxaCambio = 0.0;

	printf("Digite a quantidade em reais R$ = ");
	scanf("%lf",&reais);

	taxaCambio = 6.10;
	dolar = reais / taxaCambio;

	printf("Voce pode comprar dolares = U$ %.2f\n", dolar);

return 0;

}