#include <stdio.h>
#include <stdlib.h>

int main() {

	double grausFahrenheit = 0.0, grausCelsius = 0.0;

	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%lf",&grausFahrenheit);

	grausCelsius = (grausFahrenheit - 32) / 1.8;

	printf("Temperatura em graus celsius: %.4f\n",grausCelsius);

return 0;

}