#include <stdio.h>

int main()
{

    int yla;
    int i;
    int ala;
    int koko;

    printf("anna ala-arvo: \n");
    scanf("%i",&ala);
    printf("anna yla-arvo: \n");
    scanf("%i",&yla);

    i = ala;

    while ( i >= ala && i<=yla)
    {
        koko=i;
        i++;

        if (koko % 5 == 0)
        {
            if (koko % 7 == 0)
            {
                printf("luku %i on jaollinen 5:lla ja 7:lla. lopetetaan haku \n", koko);
                break;
            }
            else
            {
                printf("%i ei ole jaollinen seitsemalla, hylataan \n", koko);
                continue;
            }

        }
        else

        {
        printf("%i ei ole jaollinen viidella, hylataan \n",koko);
        continue;
        }
    }

    return 0;
    
}
