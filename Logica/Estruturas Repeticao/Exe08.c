#include <stdio.h>
#include <stdlib.h>

int main() {

	long int numero = 0, soma = 0;

	printf("Digite um numero inteiro maior que zero: ");
	scanf("%ld",&numero);

	while(numero < 0){
		printf("Numero invalido, digite um numero maior que zero:\n");
		scanf("%ld",&numero);
	}

	for(int i = 1; i <= numero; i++){
		soma += i;
	}

	printf("Soma = %ld\n",soma);

return 0;

}