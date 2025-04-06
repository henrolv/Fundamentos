#include <stdio.h>
#include <stdlib.h>

int main() {

	long int n = 0, soma = 0;

	printf("Digite o valor de N positivo: ");
	scanf("%ld",&n);

	while(n < 0){
		printf("Erro, digite um numero positivo: ");
		scanf("%ld",&n);
	}

	for(int i = 1; i <= n; i ++){
		soma += i;
	}

	printf("Soma = %ld\n",soma);

return 0;

}