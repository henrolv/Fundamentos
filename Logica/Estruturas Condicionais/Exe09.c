#include <stdio.h>
#include <stdlib.h>

int main() {

	double salarioFuncionario = 0.0, imposto = 0.0,salarioComImposto = 0.0, aliquotaDesconto = 0.0;

	printf("Digite o salario do funcionario: ");
	scanf("%lf",&salarioFuncionario);

	if(salarioFuncionario < 0){
		printf("Erro, o salario nao pode ser menor que zero!\n");
		return 1;
	}

	if(salarioFuncionario <= 1903.98){
		aliquotaDesconto = 0.0;
	}else if(salarioFuncionario <= 2826.65){
		aliquotaDesconto = 7.50; 
	}else if(salarioFuncionario <= 3751.05){
		aliquotaDesconto = 15.00;
	}else if(salarioFuncionario <= 4664.68){
		aliquotaDesconto = 22.50;
	}else{
		aliquotaDesconto = 27.50;
	}

	imposto = salarioFuncionario * aliquotaDesconto / 100;
	salarioComImposto = salarioFuncionario - (salarioFuncionario * aliquotaDesconto / 100);

	printf("Imposto  = R$ %.2f\n",imposto)
	printf("Salario com desconto = R$ %.2f\n",salarioComImposto);

return 0;

}