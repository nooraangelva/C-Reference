#include <stdio.h>
#include <math.h>

const float PII = 3.14;

int main()
{

    float sade = 0;
    float tilavuus;

    printf("Anna pallon sade: ");
    scanf("%f", &sade);
    tilavuus = 4.0/3*PII * pow(sade,3);
    printf("Tilavuus on %.2f \n", tilavuus);
    
    return 0;

}
