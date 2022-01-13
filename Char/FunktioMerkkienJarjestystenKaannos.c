#include <stdio.h>

void kaanna(char merkit[],int indeksi);

int main()
{

    int pituus = 6;
    int x=0;
    char merkit[6]= "Aapo";

    while (x<=5)
    {

        kaanna(merkit, pituus-1);
        ++x;
        pituus--;

    }

    return 0;

}

void kaanna(char merkit[],int indeksi)
{

    int i = indeksi;

    printf("%c ", merkit[i]);

    return 0;

}
