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

void muutaHintaa(struct kannykka tieto, char puhelin[]);

int main()
{

  struct kannykka a = lueTiedot();
  struct kannykka p = lueTiedot2();
  struct kannykka x = lueTiedot3();
  struct kannykka y = lueTiedot4();
  struct kannykka c = lueTiedot5();

  char puhelin [2];

  printf("anna malli jonka hintaa haluat muuttaa \n (2T, 3T, 5T, 6T, 7T) -> ");
  scanf("%s", &puhelin);

  muutaHintaa(a, puhelin);
  muutaHintaa(p, puhelin);
  muutaHintaa(x, puhelin);
  muutaHintaa(y, puhelin);
  muutaHintaa(c, puhelin);

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

void muutaHintaa(struct kannykka tieto, char puhelin[])
{

  if (strcmp(tieto.malli,puhelin)==0)
  {
    int uusihinta;
    printf("%s hinta on %.2f euroa \n", tieto.malli, tieto.hinta);
    printf("ilmoita uusi hinta: ");
    scanf("%i", &uusihinta);

    tieto.hinta=uusihinta;

    printf("%s uusi hinta on %.2f euroa \n", tieto.malli, tieto.hinta);

 }

  return 0;

}
