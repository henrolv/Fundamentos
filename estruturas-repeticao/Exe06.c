#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	for(int i = 1; i <= numero; i++){

		if(i%2 ==0){
			printf("%d\n",i*i);
		}

	}

return 0;

}