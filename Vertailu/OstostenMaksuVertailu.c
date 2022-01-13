#include <stdio.h>
#include <math.h>

int main()
{
    float ostokset;
    float rahat;
    float rahat2;
    float rahat3;
    float rahat4;
    float rahat5;

    printf("Kerro ostosten hinta ");
    scanf("%f", &ostokset);
    printf("Anna rahat maksuun ");
    scanf("%f", &rahat);

    if (ostokset <= rahat)
    {
        rahat2 = rahat - ostokset;
        printf("kiitos ja takaisin %.2f", rahat2);
    }
    else if (ostokset > rahat)
    {
        printf("syota lisaa rahaa ");
        scanf("%f", &rahat3);

        rahat4 = rahat3 + rahat;

        if (ostokset <= rahat4)

        {
            rahat5 = rahat4 - ostokset;

            printf("kiitos ja takaisin %.2f", rahat5);
        }
        else if (ostokset > rahat4)
        {
            printf("Olet liian koyha");
        }
    }

    return 0;
}
