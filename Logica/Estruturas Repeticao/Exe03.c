#include <stdio.h>
#include <stdlib.h>

int main() {

	long int soma = 0;

	for(int i = 1; i < 100; i+=2){
		soma += i;
	}

	printf("Soma = %ld\n",soma);

return 0;

}