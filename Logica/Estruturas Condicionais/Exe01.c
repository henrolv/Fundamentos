#include <stdio.h>
#include <stdlib.h>

int main(){

	double nota1 = 0.0, nota2 = 0.0, mediaNotas = 0.0;

	printf("Digite a primeira nota: ");
	scanf("%lf",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%lf",&nota2);

	mediaNotas = (nota1 + nota2) / 2;

	if(mediaNotas >= 7.00){
		printf("Aprovado, media = %.2f\n",mediaNotas);
	}else if(mediaNotas >= 5.00 && mediaNotas < 7.00){
		printf("Exame Final, media = %.2f\n",mediaNotas);
	}else{
		printf("Reprovado, media = %.2f\n",mediaNotas);
	}

return 0;	

}