/*Victor Seiji Nieto Morita
Tarea 2 Problema Estructuras Repetitivas 3*/

#include <stdio.h>

int main ()
{
  int suma = 0;
  int i;

  for (i = 10; i <= 50; i++)
    {
     if (i % 2 == 0)
      {
       suma = suma + i;
      }
    }

 printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

  return 0;
}
