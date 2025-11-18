/*Victor Seiji Nieto Morita
Tarea 2 Problema If 4*/

#include <stdio.h>

int main ()
{
  int num1, num2;

  printf("Ingrese el primer numero entero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero entero: ");
  scanf("%d", &num2);

  if (num2 != 0 && num1 % num2 == 0)
     {
      printf("%d es divisior de %d\n", num2, num1);
     }
  else if (num1 != 0 && num2 % num1 == 0)
     {
      printf("%d es divisor de %d\n", num1, num2);
     }
  else
     {
      printf("Ninguno de los numeros es divisor del otro.\n");
     }
 return 0;
}
