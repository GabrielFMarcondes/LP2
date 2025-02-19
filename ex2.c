#include <stdio.h>

int main(void) {
  float Altura = 1.80 * 1.80;
  int Peso = 65;
  float IMC = Peso / Altura;
  printf("%d / %.2f =%.2f", Peso, Altura, IMC);
  return 0;
}