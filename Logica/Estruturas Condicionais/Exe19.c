#include <stdio.h>
#include <stdlib.h>

int main() {

	int tipoVeiculo = 0, diasAlugadoVeiculo;
	double kmPercorridos = 0.0, precoAluguelVeiculo = 0.0, taxaPorKm = 0.0, pagamentoTotal = 0.0;

	printf("(1) Carro Popular | R$ 90.00 / Dia\n(2) Carro Luxo | R$ 150.00 / Dia\n");
	printf(".......\nDigite uma opcao do menu: ");
	scanf("%d",&tipoVeiculo);

	if(tipoVeiculo != 1 && tipoVeiculo != 2){
		printf("Erro, digite uma opcao do menu!\n");
		return 1;
	}

	printf("Digite quantos dias o veiculo foi alugado: ");
	scanf("%d",&diasAlugadoVeiculo);

	if(diasAlugadoVeiculo <= 0){
		printf("Erro, os dias de aluguel do veiculo nao podem ser negativos ou igual a zero!\n");
		return 1;
	}

	printf("Digite a distancia percorrida em KM: ");
	scanf("%lf",&kmPercorridos);	

	if(kmPercorridos < 0){
		printf("Erro, quilometragem percorrida nao pode ser negativa\n");
		return 1;
	}

	switch (tipoVeiculo){

	case 1: {

		precoAluguelVeiculo = diasAlugadoVeiculo * 90.00;

		if(kmPercorridos <= 100){
			taxaPorKm = kmPercorridos * 0.20;
		}else{
			taxaPorKm = kmPercorridos * 0.10;
		}

	}break;

	case 2: {

		precoAluguelVeiculo = diasAlugadoVeiculo * 150.00;
		
		if(kmPercorridos <= 200){
			taxaPorKm = kmPercorridos * 0.30;
		}else{
			taxaPorKm = kmPercorridos * 0.25;
		}

	}break;

	}

	pagamentoTotal = precoAluguelVeiculo + taxaPorKm;

	printf("Pagamento total = R$ %.2f\n",pagamentoTotal);

return 0;

}