/*Victor Seiji Nieto Morita
Tarea 2 Problema Estructuras Repetitivas 2*/

#include <stdio.h>

int main ()
{
  int num;
  int positivos = 0, negativos = 0, nulos = 0;
  int i;

  printf("Ingrese 100 numero naturales (pueden incluir el 0): ");

  for (i = 1; i <= 100; i++)
    {
     printf("Numero %d: ", i);
     scanf("%d", &num);

      if (num > 0)
       {
        positivos++;
       }
      else if (num < 0)
       {
        negativos++;
       }
      else 
       {
        nulos++;
       }
    }

  printf("\nResultados:\n");
  printf("Positivos: %d\n", positivos);
  printf("Negativos: %d\n", negativos);
  printf("Nulos (0): %d\n", nulos);

  return 0;
}
    
