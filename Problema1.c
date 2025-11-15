/*Victor Seiji Nieto Morita
Tarea 2 Problema Simple 1*/

#include <stdio.h>

int main()
{
  float a, b;
  float suma, resta, multiplicacion;

  printf("Ingrese el primer numero: ");
  scanf("%f", &a);

  printf("Ingrese el segundo numero: ");
  scanf("%f", &b);

  suma = a + b;
  resta = a - b;
  multiplicacion = a * b;

 printf("\nResultados:\n");
 printf("Suma: %.0f\n", suma);
 printf("Resta: %.0f\n", resta);
 printf("Multiplicacion: %.0f\n", multiplicacion);

 return 0;
}
