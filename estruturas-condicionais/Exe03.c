#include <stdio.h>
#include <stdlib.h>

int main() {

	int minutosPlanoBasico = 100, minutosConsumido = 0;
	double planoBasico = 50.00, pagamentoTotal = 0.0, taxaExcederMinutos = 2.00;

	printf("Digite a quantidade de minutos consumidos: ");
	scanf("%d",&minutosConsumido);

	if(minutosConsumido < 0){
		printf("Erro, o numero de minutos consumidos nao pode ser negativo!\n");
		return 1;
	}else if(minutosConsumido > minutosPlanoBasico){
		pagamentoTotal = planoBasico + ((minutosConsumido - minutosPlanoBasico) * taxaExcederMinutos); 
	}else{
		pagamentoTotal = planoBasico;
	}

	printf("Pagamento da conta telefonica = R$ %.2f\n",pagamentoTotal);

return 0;

}