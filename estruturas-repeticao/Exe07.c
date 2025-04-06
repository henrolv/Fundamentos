#include <stdio.h>
#include <stdlib.h>

int main() {

	int operacao = 0;
	long double numero1 = 0.0, numero2 = 0.0, calculo = 0.0;

	do{

	printf("1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n0-Sair\n");
	printf("\nDigite uma operacao do menu: ");
	scanf("%d",&operacao);

	while(operacao < 0 || operacao > 4){
		printf("Opcao invalida, digite uma opcao do menu: ");
		scanf("%d",&operacao);
	}

	if(operacao == 0){
		break;
	}

	printf("\nDigite um numero: ");
	scanf("%Lf",&numero1);
	printf("Digite outro numero: ");
	scanf("%Lf",&numero2);

	switch(operacao){

	case 1:{
		calculo = numero1 + numero2;
	}break;

	case 2:{
		calculo = numero1 - numero2;
	}break;

	case 3:{
		calculo = numero1 * numero2;
	}break;

	case 4:{
		while(numero2 == 0){
			printf("\nDivisor igual a zero, digite outro numero: ");
			scanf("%Lf",&numero2);
		}
		calculo = numero1 / numero2;
	}break;

	}

	printf("\n= %.2Lf\n\n",calculo);

	}while(operacao != 0);

	printf("\nExit...\n");

return 0;

}