#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int numeroAleatorio = rand() % 5 + 1, numeroSorteado = 0;

	printf("Numeros sorteados de (1-5)\n");
	printf("Digite o numero sorteado: ");
	scanf("%d",&numeroSorteado);

	if(numeroSorteado < 1 || numeroSorteado > 5){
		printf("Erro, o numero digitado nao esta no intervalo de (1-5)\n");
		return 1;
	}

	if(numeroSorteado == numeroAleatorio){
		printf("\nAcertou!\nNumero Aleatorio = %d\nNumero Adivinhado = %d\n",numeroAleatorio,numeroSorteado);
		return 0;
	}

	printf("\nErrou!\nNumero Aleatorio = %d\nNumero Adivinhado = %d\n",numeroAleatorio,numeroSorteado);

return 0;

}

