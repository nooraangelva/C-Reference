#include <stdio.h>
#include <math.h>

int main()

{
    float mbensa = 0.051;
    float kbensa = 0.075;
    float kaupunki_km ;
    float matka_km;
    float mkulutus;
    float kkulutus;
    float kulutus;

    printf(" Kerro matka-ajosi ");
    scanf("%f", &matka_km);
    printf("Kerro kaupunkiajosi ");
    scanf("%f", &kaupunki_km);

    mkulutus = matka_km * mbensa;
    kkulutus = kaupunki_km * kbensa;
    kulutus = mkulutus + kkulutus;

    printf("matkaan kuluu polttoainetta yhteens� %.1f litraa \n", kulutus);

    return 0;

}
