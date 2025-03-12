#include <stdio.h>
#include <stdlib.h>

int main() {

	double dinheiroNaCarteira = 0.0, dolar = 3.45, conversorRealParaDolar = 0.0;

	printf("Digite a quatidade de dinheiro: ");
	scanf("%lf",&dinheiroNaCarteira);

	conversorRealParaDolar = dinheiroNaCarteira / dolar;

	printf("Voce pode comprar = U$ %.2f\n",conversorRealParaDolar);

return 0;

}