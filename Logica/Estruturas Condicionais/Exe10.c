#include <stdio.h>
#include <stdlib.h>

int main() {

	double velocidadeVeiculo = 0.0, multa = 0.0, taxaPorKmExcedido = 5.00, velocidadePermitida = 80.00;

	printf("Digite a velocidade do veiculo: ");
	scanf("%lf",&velocidadeVeiculo);

	if(velocidadeVeiculo < 0){
		printf("Erro, a velocidade do veiculo nao pode ser negativa!\n");
	}else if(velocidadeVeiculo > velocidadePermitida){
		multa = (velocidadeVeiculo - velocidadePermitida) * taxaPorKmExcedido;
		printf("Multado em = R$ %.2f, Por excesso de velocidade\n",multa);
	}

return 0;

}
