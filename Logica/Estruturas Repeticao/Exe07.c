#include <stdio.h>
#include <stdlib.h>

int main() {

	int opcao = 0;
	double num1 = 0, num2 = 0, resultado = 0;

	do{

		printf("1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\n0-Sair\n");
		printf("\nDigite uma opcao do menu...\n");
		scanf("%d",&opcao);

		if(opcao == 0){
			printf("\nExit...\n");
			break;
		}

		printf("\nDigite um numero:\n");
		scanf("%lf",&num1);
		printf("\nDigite outro numero:\n");
		scanf("%lf",&num2);

		switch(opcao){

			case 1:{

				resultado = num1 + num2;
				printf("\nSoma = %.2lf\n\n",resultado);

			}break;

			case 2:{

				resultado = num1 - num2;
				printf("\nSubtracao = %.2lf\n\n",resultado);

			}break;

			case 3:{

			resultado = num1 * num2;
			printf("\nMultiplicacao = %.2lf\n\n",resultado);

			}break;

			case 4:{

				while(num2 == 0){
					printf("\nO dividendo nao pode ser igual a zero\nDigite outro numero:\n");
					scanf("%lf",&num2);
				}

				resultado = num1 / num2;
				printf("\nDivisao = %.2lf\n\n",resultado);

			}

		}

	}while(opcao != 0);

return 0;

}