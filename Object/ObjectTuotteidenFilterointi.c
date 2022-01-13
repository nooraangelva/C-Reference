#include <stdio.h>
#include <math.h>
#include <string.h>

struct kannykka
{

  char malli[11];
  float hinta;

};

struct kannykka lueTiedot();
struct kannykka lueTiedot2();
struct kannykka lueTiedot3();
struct kannykka lueTiedot4();
struct kannykka lueTiedot5();

void sopivahinta (struct kannykka tieto, int alaraja, int ylaraja);

int main()
{

  struct kannykka a = lueTiedot();
  struct kannykka p = lueTiedot2();
  struct kannykka x = lueTiedot3();
  struct kannykka y = lueTiedot4();
  struct kannykka c = lueTiedot5();

  float alaraja, ylaraja;

  printf("anna alaraja hinnalle: \n");
  scanf("%f", &alaraja);
  printf("anna ylaraja: \n");
  scanf("%f", &ylaraja);

  sopivahinta(a, alaraja, ylaraja);
  sopivahinta(p, alaraja, ylaraja);
  sopivahinta(x, alaraja, ylaraja);
  sopivahinta(y, alaraja, ylaraja);
  sopivahinta(c, alaraja, ylaraja);

  return 0;

}

struct kannykka lueTiedot()
{

  struct kannykka tieto;
  strcpy(tieto.malli, "6T");
  tieto.hinta = 599;

  return tieto;

}

struct kannykka lueTiedot2()
{

  struct kannykka tieto;
  strcpy(tieto.malli, "5T");
  tieto.hinta = 499;

  return tieto;

}

struct kannykka lueTiedot3()
{

  struct kannykka tieto;
  strcpy(tieto.malli, "3T");
  tieto.hinta = 399;

  return tieto;

}

struct kannykka lueTiedot4()
{

  struct kannykka tieto;
  strcpy(tieto.malli, "7T");
  tieto.hinta = 699;

  return tieto;

}

struct kannykka lueTiedot5()
{

  struct kannykka tieto;
  strcpy(tieto.malli, "2T");
  tieto.hinta = 299;

  return tieto;

}

void sopivahinta (struct kannykka tieto, int alaraja, int ylaraja)
{

    if (tieto.hinta >= alaraja && tieto.hinta<=ylaraja){

        printf("%s On sopiva, hinta on %.2f euroa \n",tieto.malli, tieto.hinta );

    }

    return 0;
    
}
