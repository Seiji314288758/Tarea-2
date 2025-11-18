/*Victor Seiji Nieto Morita
Tarea 2 Problema If 1*/

#include <stdio.h>

int main ()
{
  float compra, total;

  printf("Ingrese el monto de la compra: ");
  scanf("%f", &compra);

  if (compra > 2500)
   {
    total = compra - (compra * 0.08);
   }

  else
  {
   total = compra;
  }

 printf("El total a pagar es: $%.2f\n", total);

 return 0;
}
