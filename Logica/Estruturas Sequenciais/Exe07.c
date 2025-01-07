#include <stdio.h>
#include <stdlib.h>

int main() {

	double polegadas = 0.0, centimetros = 0.0;

	printf("Digite a medida em polegadas: ");
	scanf("%lf",&polegadas);

	centimetros = polegadas * 2.54;

	printf("Total de = %.2f Centimetros\n",centimetros);

return 0;

}
