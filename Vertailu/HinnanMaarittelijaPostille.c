#include <stdio.h>
#include <math.h>

int main ()
{

    int tyyppi;
    int kpaino;
    int koko;
    int khinta1;
    int khinta2;
    int khinta3;
    int paketti;
    int phinta1;
    int phinta2;
    int lismaksu = 250;

    printf("valitse lahetettavan muoto kirje -> 1 tai paketti -> 2 ");
    scanf("%i", &tyyppi);

    if (tyyppi = 1 && tyyppi != 2)
    {
        printf("Anna kirjeen paino grammoina ");
        scanf ("%i", &kpaino);

        if (kpaino < 200)
        {
            printf("hinta: 50snt");
        }
        else if (kpaino >= 200 && kpaino <= 500)
        {
            khinta1 = (kpaino/100) * 4 + 50 ;
            printf("Hinta: %i  snt", khinta1);
        }
        else if (kpaino > 500)
        {
            printf("Mahtuuko kirje postilaatikosta kylla -> 1 vai ei -> 2 ");
            scanf ("%i", &koko);

            if (koko = 1 && koko != 2)
            {
            khinta2 = 50 + kpaino/100 * 7;

            printf("hinta on: %i snt", khinta2);
            }
            else if (koko = 2)
            {
                khinta3 = kpaino/100 * 7 + lismaksu;

                printf("Hinta on: %i snt", khinta3);
            }
        }
    }
        else if ( tyyppi = 2)
        {
            printf(" Anna paketin paino grammoina ");
            scanf("%i", &paketti);

            if ( paketti < 200)
            {
                printf("Hinta on: 200 snt");
            }
            else if (paketti >= 200 && paketti <= 500)
            {

                phinta1 = 200 + paketti/100 * 8;
                printf("Hinta on %i snt", phinta1);
            }
            else if (paketti > 500)
            {
                phinta2 = 200 + paketti / 100 * 14;
                printf("Hinta on: %i snt", phinta2);
            }
        }

    return 0;

}
