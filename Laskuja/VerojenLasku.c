#include <stdio.h>
#include <math.h>

int main()

{
    float kuukausipalkka, veroprosentti, verot, nettopalkka;

    printf(" Kerro kuukausipalkkasi ja veroprosenttisi (10 prosenttia = 0.10) ");
    scanf("%f %f" , &kuukausipalkka, &veroprosentti);

    verot = kuukausipalkka * veroprosentti;
    nettopalkka = kuukausipalkka * (1.0 - veroprosentti);

    printf(" Nettopalkkasi on %.2f ja verojen suuruus on %.2f" , nettopalkka , verot);

    return 0;
}
