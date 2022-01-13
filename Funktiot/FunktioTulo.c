#include <stdio.h>
#include <math.h>

float lukujentulo (float luku1, float luku2);

int main()
{

    float vastaus = 0;
    float luku1, luku2;
    printf("anna kaksi lukua: ");
    scanf("%f %f", &luku1, &luku2);
    vastaus = lukujentulo(luku1, luku2);
    printf("lukujen tulo on %.2f",vastaus);

    return 0;

}

float lukujentulo(float luku1, float luku2)
{

   float vastaus;
   vastaus = luku1 * luku2;
   
   return(vastaus);

}
