/*Victor Seiji Nieto Morits
Tarea 2 Problema If 3*/

#include <stdio.h>

int main ()
{
  float distancia_ida, distancia_total, precio, total;
  int dias;

  printf("Ingrese la distancia de ida (km): ");
  scanf("%f", &distancia_ida);

  printf("Ingrese los dias de estancia: ");
  scanf("%d", &dias);

  distancia_total = distancia_ida * 2;
  precio = distancia_total * 0.23;

  if (dias > 7 && distancia_total > 800)
   {
    total = precio - (precio * 0.30);
   }

  else
   {
    total = precio;
   }

  printf("El precio final del ticket es: $%.2f\n", total);

  return 0;
}
