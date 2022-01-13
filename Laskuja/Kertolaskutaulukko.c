#include <stdio.h>

int main()
{

    int kertoja, kerrottava;
    int tulo;

    do
    {
    printf("Anna numero, jonka kertotaulun haluat: \n HOX! 0 lopetaa ohjelman.");
    scanf("%i", &kertoja);
    } while (kertoja < 0 || kertoja > 10);

    if (kertoja >= 1 && kertoja <= 10 && kertoja != 0)
    {

    for (kerrottava = 1; kerrottava <= 10; kerrottava++)
    {
    tulo = kerrottava * kertoja;
    printf("%i * %i = %i \n",kerrottava, kertoja, tulo);
    }
    printf("\n");
    
    }
    else
    {
        printf("Moikka!");
    }
    return 0;

}
