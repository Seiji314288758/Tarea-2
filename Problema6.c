/*Victor Seiji Nieto Morita
Tarea 2 Problema If 2*/

#include <stdio.h>

int main ()
{
  float sueldo, nuevo_sueldo;

  printf("Ingrese el sueldo del trabajador: ");
  scanf("%f", &sueldo);

  if (sueldo < 1000) 
   {
    nuevo_sueldo = sueldo + (sueldo * 0.15);
   }

  else
   {
    nuevo_sueldo = sueldo + (sueldo * 0.12);
   }

  printf("El sueldo con aumento es: $%.2f\n", nuevo_sueldo);

  return 0;
}
