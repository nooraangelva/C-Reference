#include <stdio.h>

int main()
{
    int numero;
    int i=0;
    int x;
    int n;
    char * sana [6];

  printf ("anna kokonaisluku: \n");
  scanf ("%i", &numero);

  while (numero)
  {
    n = numero %10;
    numero = numero /10;
    switch(n)
    {
      case 0: sana[i++] = "nolla";
      break;
      case 1: sana[i++] = "yksi";
      break;
      case 2: sana[i++] = "kaksi";
      break;
      case 3: sana[i++] = "kolme";
      break;
      case 4: sana[i++] = "nelja";
      break;
      case 5: sana[i++] = "viisi";
      break;
      case 6: sana[i++] = "kuusi";
      break;
      case 7: sana[i++] = "seitseman";
      break;
      case 8: sana[i++] = "kahdeksan";
      break;
      case 9: sana[i++] = "yhdeksan";
      break;
    }
  }
  for(x=i-1; x>=0; x--)
  {
    printf ("%s ",sana[x]);
  }

    return 0;
}
