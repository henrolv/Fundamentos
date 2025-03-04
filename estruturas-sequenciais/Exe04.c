#include <stdio.h>
#include <stdlib.h>

int main() {

	double valorRaio = 0.0, areaDoCirculo = 0.0;
	
	printf("Digite o valor do raio: ");
	scanf("%lf",&valorRaio);

	areaDoCirculo = 3.14159 * (valorRaio * valorRaio);

	printf("Area do circulo = %.3f\n",areaDoCirculo);

return 0;

}