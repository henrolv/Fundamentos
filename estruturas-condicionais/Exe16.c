#include <stdio.h>
#include <stdlib.h>

int main() {

	double distanciaViagem = 0.0, taxaPorKm = 0.0, pagamento = 0.0;

	printf("Digite a distancia a percorrer: ");
	scanf("%lf",&distanciaViagem);

	if(distanciaViagem <= 0){
		printf("Erro, a distancia percorrida nao pode ser menor ou igual a zero\n");
		return 1;
	}

	if(distanciaViagem <= 200){
		taxaPorKm = 0.50;
	}else{
		taxaPorKm = 0.45;
	}

	pagamento = distanciaViagem * taxaPorKm;

	printf("A viagem custara = R$ %.2f\n",pagamento);

return 0;

}