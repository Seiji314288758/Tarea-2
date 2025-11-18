/*Victor Seiji Nieto Morita
Tarea 2 Problema Arreglos 4*/

#include <stdio.h>

int main ()
{
  int pares[100];
  int numero = 2;

  for (int i = 0; i < 100; i++)
   {
    pares[i] = numero;
    numero += 2;
   }

  printf("Los 100 primeros numeros pares son:\n");

  for (int i = 0; i < 100; i++)
   {
    printf("%d ", pares[i]);
   }

 printf("\n");

return 0;

}
