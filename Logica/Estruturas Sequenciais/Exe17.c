#include <stdio.h>
#include <stdlib.h>

int main() {

	double larguraParede = 0.0, alturaParede = 0.0, litrosTintaNecessario = 0.0, area = 0.0;

	printf("Digite a largura da parede: ");
	scanf("%lf",&larguraParede);
	printf("Digite a altura da parede: ");
	scanf("%lf",&alturaParede);

	area = (larguraParede * alturaParede);
	litrosTintaNecessario = area / 2;

	printf("\nArea = %.2f m²\n",area);
	printf("Tinta necessaria: %.2f Litros\n",litrosTintaNecessario);

return 0;

}