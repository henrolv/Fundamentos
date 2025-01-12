#include <stdio.h>
#include <stdlib.h>

int main() {

	double peso = 0.0, altura = 0.0, imc = 0.0;

	printf("Digite seu peso: ");
	scanf("%lf",&peso);
	printf("Digite sua altura: ");
	scanf("%lf",&altura);

	if(peso <= 0 || altura <= 0){
		printf("Erro, os valores nao podem ser negativos ou menores que zero!\n");
		return 1;
	}

	imc = peso / (altura * altura);

	printf("\nIMC = %.2f\n",imc);

	if(imc < 18.5){
		printf("Abaixo do peso\n");
	}else if(imc >= 18.5 && imc <= 24.9){
		printf("Normal\n");
	}else if(imc >= 25.0 && imc <= 29.9){
		printf("Pre-Obesidade\n");
	}else if(imc >= 30.0 && imc <= 34.9){
		printf("Obesidade-1\n");
	}else if(imc >= 35.0 && imc <= 39.9){
		printf("Obesidade-2\n");
	}else{
		printf("Obesidade-3\n");
	}

return 0;

}