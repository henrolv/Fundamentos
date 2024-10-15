#include <stdio.h>
#include <stdlib.h>

  int main(){

    int cigarrosPorDia = 0, anosFumando = 0, minutosPerdidoPorFumar = 0, totalCigarrosFumados = 0;
    double diasPerdidosPorFumar = 0;

    printf("Digite quantos cigarros fuma por dia: ");
    scanf("%d",&cigarrosPorDia);
    printf("Digite a quantidade de anos fumando: ");
    scanf("%d",&anosFumando);

    totalCigarrosFumados = cigarrosPorDia * (anosFumando * 365);
    minutosPerdidoPorFumar = totalCigarrosFumados * 10;
    diasPerdidosPorFumar = minutosPerdidoPorFumar / (60 * 24);

    printf("Total de dias perdidos por fumar = %.2lf\n",diasPerdidosPorFumar);

  return 0;
  }