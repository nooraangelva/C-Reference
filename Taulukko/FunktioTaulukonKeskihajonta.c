#include <stdio.h>
#include <math.h>

double laske_keskihajonta(int taulu[],int koko);

int main()
{

    int taulu[5]={2,2,6,5,4};
    float keskihajonta= laske_keskihajonta(taulu,5);
    printf("keskihajonta on %2.f", keskihajonta);

    return 0;

}

double laske_keskihajonta(int taulu[],int koko)
{

    float summa = 0.0, keskiarvo, keskihajonta = 0.0;
    int i;

    for(i=0; i<koko; ++i)
    {

        summa += taulu[i];
        
    }

    keskiarvo = summa/koko;

    for(i=0; i<koko; ++i)
    {

        keskihajonta += pow(taulu[i] - keskiarvo, 2);

    }

    return sqrt(keskihajonta/(koko-1));

}

