/*Victor Seiji Nieto Morita
Tarea 2 Problema Estructuras Repetitivas 4*/

#include <stdio.h>

int main ()
{
  int N; 
  long long producto = 1;

  printf("Ingrese un numero N: ");
  scanf("%d", &N);

  if (N < 1)
    {
     printf("El valor de N debe ser mayor o igual a 1.\n");
     return 0;
    }

for (int i = 1; i <= N; i++)
    {
     producto = producto * i;
    }

printf("El producto de los %d primeros numeros naturales es: %lld\n", N, producto);

return 0;

}
