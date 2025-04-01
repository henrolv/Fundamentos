#include <stdio.h>
#include <stdlib.h>

int main() {

	double valorKwh = 0.75, consumoRegistrado = 0.0, tarifaMinima = 65.00, pagamento = 0.0;

	printf("Digite o valor consumido em kwh: ");
	scanf("%lf",&consumoRegistrado);

	pagamento = (consumoRegistrado * valorKwh < tarifaMinima) ? tarifaMinima : consumoRegistrado * valorKwh;

	printf("Valor da conta de energia = R$ %.2f\n",pagamento);

return 0;

}
