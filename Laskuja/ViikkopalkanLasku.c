#include <stdio.h>
#include <math.h>

int main()

{
    float tunnit = 0;
    float tuntipalkka;
    float palkka;
    float ylityolisa;
    float koko_palkka;

    printf("Anna tuntipalkkasi");
    scanf("%f", &tuntipalkka);
    printf("Kerro tuntisi");
    scanf("%f", &tunnit);
    if (tunnit <= 40)
    {
        palkka = tunnit * tuntipalkka;
        printf("palkkasi on %.2f euroa", palkka);
    }

    else if (tunnit > 40)
    {
    palkka = tunnit * tuntipalkka;
    ylityolisa  = (tunnit - 40) * tuntipalkka / 2;
    koko_palkka = ylityolisa + palkka;

    printf(" Viikkopalkkasi on %.2f euroa", koko_palkka);
    }

    return 0;
}
