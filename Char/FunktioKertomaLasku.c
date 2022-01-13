#include <stdio.h>

int kertoma(int n);

int main()
{

  int numero;
  long fact = 1;

  printf("anna luku lasken sen kertoman \n");
  scanf("%d", &numero);

  if (numero<0)
  {

      printf("ohjelma loppuu");

  }
  else
  {

    printf("%d! = %ld\n", numero, kertoma(numero));

  }

  return 0;

}

int kertoma(int n)
{

  int i;
  int vastaus = 1;

  for (i = 1; i <= n; i++)
    vastaus = vastaus * i;

  return (vastaus);

}
