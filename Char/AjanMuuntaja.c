#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    char syote[15];
    char *tunti;
    char *minuutti;
    int pp;
    int pp2;
    int h;
    int min;
    char erotin[] = ":";

    printf("Anna aika muodossa h:min-> ");
    gets(syote);
    
    tunti = strtok( syote, erotin );
    minuutti = strtok( NULL, erotin );
    pp = atoi(tunti);
    pp2 = atoi(minuutti);

    min = pp*60+pp2;

    printf("aikaa kului %i minuuttia", min);

    return 0;

}
