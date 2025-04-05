#include <stdio.h>
#include <stdlib.h>

int main() {

	int soma = 0;

	for(int i = 1; i < 1000; i+=2){
		soma += i;
	}

	printf("%d\n", soma);

return 0;

}