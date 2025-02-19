#include <stdio.h>

void main(void) {
  int Peso;
  float Altura;
  float IMC;

  printf("Digite o Seu Peso: ");
  scanf("%d", &Peso);
  printf("Digite a sua Altura: ");
  scanf("%f", &Altura);
  
IMC = Peso / (Altura * Altura);
  printf("O seu IMC será %f", IMC);
}