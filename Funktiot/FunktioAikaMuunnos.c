#include <stdio.h>
#include <math.h>
#include <conio.h>

int muunna (int sekunneiksi, int h, int min, int sek);

main ()
{

    int h, min, sek, sekunneiksi;

    printf("anna tunnit: \n");
    scanf("%i",&h);
    printf("anna minuutit: \n");
    scanf("%i",&min);
    printf("anna sekunnit: \n");
    scanf("%i",&sek);
    sekunneiksi = muunna(0, h, min, sek);
    printf("%i sekunttia",sekunneiksi);

    return 0;

}

int muunna(int sekunneiksi, int h, int min, int sek)
{
    
    sekunneiksi= +sek+ (h*60+min)*60;

    return (sekunneiksi);

}
