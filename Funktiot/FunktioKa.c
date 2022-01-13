#include <stdio.h>

float keskiArvo(float luku1, float luku2);

int main()
{

    float vastaus = 0;
    float luku1, luku2;

    printf("Anna kaksi lukua: ");
    scanf("%f %f", &luku1, &luku2);
    vastaus = keskiArvo(luku1, luku2);
    printf("Keskiarvo on %.2f\n", vastaus);

    return 0;

}

float keskiArvo(float luku1, float luku2)
{

    float vastaus;
    vastaus= (luku1+luku2)/2;

    return (vastaus);
    
}
