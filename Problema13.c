/*Victor Seiji Nieto Morita
Tarea 2 Problema Arreglos 1*/

#include <stdio.h>

int main()
{
  int n;

  printf("Ingrese la cantidad de elementos del arreglo: ");
  scanf("%d", &n);

  int arreglo[n];
  int suma = 0;

  for (int i = 0; i < n; i++)
      {
       printf("Ingrese el elemento %d: ", i + 1);
       scanf("%d", &arreglo[i]);
      }

  for (int i = 0; i < n; i++)
      {
       suma += arreglo[i];
      }

  printf("\nLa suma de los elementos del arreglo es: %d\n", suma);

  return 0;
}
