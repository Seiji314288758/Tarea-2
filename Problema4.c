/*Victor Seiji Nieto Morita
Tarea 2 Problema Simple 4*/

#include <stdio.h>

int main()
{
  float capital, montoFinal;
  float tasa = 0.05;

  printf("Ingres la cantidad de dinero a invertir: ");
  scanf("%f", &capital);

  montoFinal = capital + (capital * tasa);

  printf("El monto obtenido al finalizar el mes es: %.2f\n", montoFinal);

  return 0;
}
