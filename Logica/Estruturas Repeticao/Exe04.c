#include <stdio.h>
#include <stdlib.h>

int main() {

	float nota1 = 0.0, nota2 = 0.0, mediaNotas = 0.0;

	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);

	while(nota1 < 0 || nota1 > 10){
		printf(".......\nErro, as notas devem estar no intervalo (0-10)\n");
		printf(".......\nDigite a primeira nota\n");
		scanf("%f",&nota1);
	}

	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);

	while(nota2 < 0 || nota2 > 10){
		printf(".......\nErro, as notas devem estar no intervalo (0-10)\n");
		printf(".......\nDigite a segunda nota\n");
		scanf("%f",&nota2);
	}

	mediaNotas = (nota1 + nota2) / 2;

	printf("Media Notas = %.2f\n",mediaNotas);

return 0;

}
