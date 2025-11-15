/*Victor Seiji Nieto Morita
Tarea 2 Problema Simple 2*/

#include <stdio.h>
#define PI 3.1416

int main ()
{
  float radio;
  float area, circunferencia;

  printf("Ingrese el radio del circulo: ");
  scanf("%f", &radio);

  area = PI * radio * radio;
  circunferencia = 2 * PI * radio;

  printf("\nResultados:\n");
  printf("Area del circulo: %.4f\n", area);
  printf("Circunferencia: %.4f\n", circunferencia);

  return 0;
}
