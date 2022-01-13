#include <stdio.h>
#include <math.h>

float summa( float luku1, float luku2);
float erotus(float vahennettava, float vahentaja);
float tulo (float kerrottava, float kertoja);
float osamaara (float jaettava, float jakaja);

main ()
{

    float numero1, numero2;
    float vastaus;
    int valinta;

    printf("anna luku \n");
    scanf("%f", &numero1);
    printf("anna toinen luku \n");
    scanf("%f", &numero2);

    printf("valitse toiminto luvuille. \n 1. summa \n 2.erotus  \n 3.tulo \n 4. jako \n");
    scanf("%i",&valinta);

    if (valinta == 1)
    {
    vastaus = summa (numero1, numero2);
    printf("summa on %.2f",vastaus);
    }
    else if (valinta == 2)
    {
    vastaus = erotus(numero1, numero2);
    printf("erotus on %.2f", vastaus);
    }

    else if (valinta == 3)
            {
    vastaus =tulo(numero1, numero2);
    printf("tulo on %.2f", vastaus);
            }
    else if (valinta == 4)
    {
    if (numero2 == 0)
    {
        printf("jakaja ei voi olla 0!");
    }
    else
    {
    vastaus =  osamaara(numero1, numero2);
    printf("osamaara on %.2f",vastaus);
    }
    }

    return 0;

}


float summa (float luku1, float luku2)
{

    float vastaus1 = luku1 + luku2;

    return (vastaus1);

}

float erotus(float vahennettava, float vahentaja)
{

   float vastaus2 = vahennettava - vahentaja;

    return (vastaus2);

}

float tulo (float kerrottava, float kertoja)
{

    float vastaus3 = kerrottava * kertoja;

    return (vastaus3);

}

float osamaara (float jaettava, float jakaja)
{

    float vastaus4 = jaettava / jakaja;

    return (vastaus4);
    
}
