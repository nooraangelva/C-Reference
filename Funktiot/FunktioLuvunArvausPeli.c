#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arvaaLuku(int luku);

int main(void)
{
    int luku = 0;
    int arvottuLuku = 0;
    int max = 10;

    srand(time(NULL));
    arvottuLuku = rand() % max + 1;

    arvaaLuku(arvottuLuku);

    return 0;

}

void arvaaLuku(int luku)
{

    int arvaus, kerta;
    int i = 1;
    
    printf("Arvaa luku valilta 0-10: ");
    scanf("%i", &arvaus);

    while(arvaus != luku )
    {

        i++;
        printf("Vaarin. Arvaa uudelleen: ");
        scanf("%i", &arvaus);

    }

    printf("Arvasit oikein!. \nLuku oli %i \n", luku);
    printf("arvasit %i kertaa", i);

}
