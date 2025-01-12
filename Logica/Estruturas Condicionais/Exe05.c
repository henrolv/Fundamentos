#include <stdio.h>
#include <stdlib.h>

int main() {

	int glicose = 0;

	printf("Digite o valor de sua glicose: ");
	scanf("%d",&glicose);

	if(glicose < 0){
		printf("Erro, a glicose nao pode ser negativa!\n");
		return 1;
	}

	if(glicose <= 100){
		printf("Normal\n");
	}else if(glicose > 100 && glicose <= 140){
		printf("Elevado\n");
	}else{
		printf("Diabetes\n");
	}

return 0;

}