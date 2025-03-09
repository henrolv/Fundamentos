#include <stdio.h>
#include <stdlib.h>

int main() {

	int x = 0, y = 0, troca = 0;

	printf("Digite o valor de X: ");
	scanf("%d",&x);
	printf("Digite o valor de Y: ");
	scanf("%d",&y);

	troca = x;
	x = y;
	y = troca;

	printf("Valor de X: %d\n",x);
	printf("Valor de Y: %d\n",y);

return 0;

}