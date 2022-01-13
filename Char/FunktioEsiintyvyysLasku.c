#include <string.h>
#include <stdio.h>

void laskeLukumaarat(char merkkijono[], int* a_lkm, int* u_lkm);

int main()
{

    char merkkijono[15];
    int x, y;
    x=0;
    y=0;

    printf("Anna merkkeja. Lasken monestikko a  ja u esiintyy ");
    gets(merkkijono);

    laskeLukumaarat(merkkijono[15], &x, &y);
    printf(" a esiintyi %d kertaa ja u %d kertaa", x, y);

    return 0;

}

void laskeLukumaarat(char merkkijono[15], int* a_lkm, int* u_lkm)
{

    char merkki = 'a';
    char merkki2 = 'u';
    int i=0;

    while (merkkijono[i] != '\0'){

        if (merkkijono[i] == merkki){

            *a_lkm++;

        }
        else if (merkkijono[i]==merkki2){

            *u_lkm++;

        }

        i++;

    }

    return (*a_lkm, u_lkm);

}

