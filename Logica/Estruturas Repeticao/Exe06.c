#include <stdio.h>
#include <stdlib.h>

int main() {

	int num = 0;

	printf("Digite um numero inteiro: \n");
	scanf("%d",&num);

	for(int i = 0; i <= num; i++){
		if(i % 2 == 0){
			printf("%d x %d = %d\n", i , i, i * i);
		}
	}	

return 0;

}