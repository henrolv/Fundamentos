#include <stdio.h>
#include <stdlib.h>

int main() {

	int num = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d",&num);

	if(num % 2 != 0){
		printf("Numero impar = %d\n",num);
	}else{
		printf("Numero par = %d\n",num);
	}

return 0;

}