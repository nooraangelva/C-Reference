#include <stdio.h>
#include <math.h>

const float PII = 3.14;

int main()
{

    float sade = 0;
    float ala = 0;
    char vastaus;

    do
    {
    printf("Anna ympyran sade: ");
    scanf("%f", &sade);
    ala = PII * sade*sade;
    printf("Ala on %.2f \n", ala);
    printf ("Jatketaanko (k/e): ");
    vastaus = getche();
    }while (vastaus != 'e');

    return 0;
}
