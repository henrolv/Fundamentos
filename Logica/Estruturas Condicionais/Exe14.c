#include <stdio.h>
#include <stdlib.h>

int main() {

	int anosPagamento = 0;
	double valorImovel = 0.0, salarioCliente = 0.0, parcelasMensais = 0.0, limitePorceSalario = 0.30, verificaLimiteSalario = 0.0;

	printf("Digite o valor do imovel (R$) = ");
	scanf("%lf",&valorImovel);

	if(valorImovel <= 0){
		printf("Erro, o valor do imovel nao pode ser negativo ou igual a zero!\n");
		return 1;
	}

	printf("Digite o salario do cliente (R$) = ");
	scanf("%lf",&salarioCliente);

	if(salarioCliente <= 0){
		printf("Erro, o salario do cliente nao pode ser negativo ou igual a zero!\n");
		return 1;
	}

	printf("Digite quantos ano(s) deseja pagar: ");
	scanf("%d",&anosPagamento);

	if(anosPagamento <= 0){
		printf("Erro, ano(s) de pagamento invalidos!\n");
		return 1;
	}

	parcelasMensais = valorImovel / (anosPagamento * 12);
	verificaLimiteSalario = salarioCliente * limitePorceSalario;

	if(parcelasMensais > verificaLimiteSalario){
		printf("\nEmprestimo negado!\nas parcelas sao maiores que %.2f%% do salario\n",limitePorceSalario * 100);
		printf("parcelas = (R$) %.2f\n%.2f%% do salario = (R$) %.2f\n",parcelasMensais, limitePorceSalario * 100, verificaLimiteSalario);
		return 1;
	}

	printf("\nEmprestimo aprovado!\n");
	printf("Valor do Imovel = (R$) %.2f\n",valorImovel);
	printf("Parcelas Mensais = (R$) %.2f\n",parcelasMensais);
	printf("Ano(s) total a pagar = %d\n",anosPagamento);

	return 0;

}