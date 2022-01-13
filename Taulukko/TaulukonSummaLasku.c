#include <stdio.h>

int laske_summa(int luvut[], int koko);

int main (void)
{

    int luvut[4] = {2, -3, 7, 4};
    int summa = laske_summa(luvut, 4);

    printf("Summa on %i \n", summa);

    return 0;

}

int laske_summa(int luvut[], int koko)
{

    int tulos = 0;
    int i = 0;

    while(i < koko)
    {
        
        tulos = tulos + luvut[i];

        i++;

    }
    return (tulos);

}
