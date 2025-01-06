#include <stdio.h>
#include <stdlib.h>

int main() {

	double distanciaPercorridaKm = 0.0, combustivelGasto = 0.0, consumoMedioCombustivel = 0.0;

	printf("Digite a distancia percorrida pelo veiculo: ");
	scanf("%lf",&distanciaPercorridaKm);
	printf("Digite o total de combustivel gasto: ");
	scanf("%lf",&combustivelGasto);

	consumoMedioCombustivel = distanciaPercorridaKm / combustivelGasto;

	printf("Consumo medio de combustivel = %.3f km/l\n",consumoMedioCombustivel);

return 0;

}