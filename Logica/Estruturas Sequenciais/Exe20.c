#include <stdio.h>
#include <stdlib.h>

int main() {

	double a = 0.0, b = 0.0, c = 0.0, areaQuadrado = 0.0, areaTriangulo = 0.0, areaTrapezio = 0.0;

	printf("Digite o valor de A: ");
	scanf("%lf",&a);
	printf("Digite o valor de B: ");
	scanf("%lf",&b);
	printf("Digite o valor de C: ");
	scanf("%lf",&c);

	areaQuadrado = a * a;
	areaTriangulo = b * a / 2;
	areaTrapezio = ((a + b) * c ) / 2;

	printf("Area do quadrado = %.2f\n",areaQuadrado);
	printf("Area do triangulo = %.2f\n",areaTriangulo);
	printf("Area trapezio = %.2f\n",areaTrapezio);

return 0;

}