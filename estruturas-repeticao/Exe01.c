#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	for (int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n",numero, i, i * numero);
	}
	
return 0;

}
