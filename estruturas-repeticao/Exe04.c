#include <stdio.h>
#include <stdlib.h>

int main() {

	float nota1 = 0.0, nota2 = 0.0, mediaNotas = 0.0;

	printf("Notas devem seguir o intervalo (0.0 - 10.0)\n");
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);

	while(nota1 < 0 || nota1 > 10){
		printf("Nota digitada invalida, digite a nota novamente: ");
		scanf("%f",&nota1);
	}

	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);

	while(nota2 < 0 || nota2 > 10){
		printf("Nota digitada invalida, digite a nota novamente: ");
		scanf("%f",&nota2);
	}

	mediaNotas = (nota1 + nota2) / 2;

	printf("\nNota 1 = %.2f\n",nota1);
	printf("Nota 2 = %.2f\n",nota2);
	printf("Media = %.2f\n",mediaNotas);

return 0;

}