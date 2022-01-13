#include <stdio.h>

int main()
{

    float ala = 0;
    float leveys = 0;
    float pituus = 0;

    printf(" kerro pituus: ");
    scanf("%f", &pituus);
    printf("kerro leveys:");
    scanf("%f", &leveys);

    ala = leveys*pituus;
    printf(" pinta-ala on %1.f \n", ala);

    return 0;
    
}
