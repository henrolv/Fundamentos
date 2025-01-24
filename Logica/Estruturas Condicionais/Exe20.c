#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1 = 0, num2 = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d",&num1);

	printf("Digite outro numero inteiro: ");
	scanf("%d",&num2);

	if(num1 == num2){
		printf(".......\nNao existe um maior numero, eles sao iguais!\n");
		return 0;
	}else if(num1 > num2){
		printf(".......\nMaior numero digitado e: %d\n", num1);
	}else{
		printf(".......\nMaior numero digitado e: %d\n", num2);
	}

return 0;

}