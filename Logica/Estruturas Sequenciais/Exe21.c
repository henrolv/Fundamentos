#include <stdio.h>
#include <stdlib.h>

int main() {

	double larguraTerreno = 0.0, comprimentoTerreno = 0.0, valorMetroQuadrado = 0.0, areaTerreno = 0.0, precoDoTerreno = 0.0;

	printf("Digite a largura do terreno: ");
	scanf("%lf",&larguraTerreno);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf",&comprimentoTerreno);
	printf("Digite o valor do metro quadrado: ");
	scanf("%lf",&valorMetroQuadrado);

	areaTerreno = larguraTerreno * comprimentoTerreno;
	precoDoTerreno = areaTerreno * valorMetroQuadrado;

	printf("Area do terreno = %.2f m²\n",areaTerreno);
	printf("Preco do terreno = R$ %.2f\n",precoDoTerreno);

return 0;

}