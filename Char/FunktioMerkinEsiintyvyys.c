#include <string.h>
#include <stdio.h>

int laskeEsiintymiskerrat(char merkki, char lause[]);

int main()
{

    char lause[15];
    char merkki = 'a';
    int kerta;

    printf("Anna merkkeja. Lasken monestikko a esiintyy ");
    gets(lause);

    kerta= laskeEsiintymiskerrat(merkki, lause);

    printf(" a esiintyi %i kertaa", kerta);

    return 0;

}

int laskeEsiintymiskerrat(char merkki, char lause[])
{

    int i=0;
    int x=0;
    while (lause[i] != '\0')
    {

        if (lause[i] == merkki){

            x++;

        }

        i++;

    }

    return (x);

}
