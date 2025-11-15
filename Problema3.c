/*Vcitor Seiji Nieto Morita
Tarea 2 Problema Simple 3*/

#include <stdio.h>

int main ()
{
  float dolares;
  float pesos;
  const float TASA = 11.96;

  printf("Ingrese la cantidad de dolares: ");
  scanf("%f", &dolares);

  pesos = dolares * TASA;

  printf("La cantidad de pesos es: %.2f\n", pesos);

  return 0;
}
