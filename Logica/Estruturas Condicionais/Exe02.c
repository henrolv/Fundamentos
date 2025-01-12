#include <stdio.h>
#include <stdlib.h>

int main(){

	int num1 = 0, num2 = 0, num3 = 0, menorNum = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d",&num1);
	printf("Digite outro numero inteiro: ");
	scanf("%d",&num2);
	printf("Digite mais um numero inteiro: ");
	scanf("%d",&num3);

	if(num1 < num2 && num1 < num3){
		menorNum = num1;
	}else if(num2 < num1 && num2 < num3){
		menorNum = num2;
	}else {
		menorNum = num3;
	}

	printf("Menor numero = %d\n",menorNum );

return 0;

}