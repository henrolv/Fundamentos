#include <stdio.h>
#include <stdlib.h>

int main() {

	int num = 0;

	printf("Digite o numero da tabuada: ");
	scanf("%d",&num);

	for(int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", num, i, num * i);
	}

return 0;

}