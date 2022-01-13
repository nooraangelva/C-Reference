#include <stdio.h>
#include <math.h>

int main()
{

    float summa = 0;
    float keskiarvo;
    float max, x;
    int i = 0;

    do
    {
        printf("anna luku tai lopeta -1:");
        scanf("%f", &x);
    if (x>=0)
    {
        summa += x;
        i++;
    }

    if (max < x)
            {
                max = x;
                }

    }
    while (i < 15 && x != -1);



    keskiarvo = summa / i;

    printf(" keskiarvo on: %.2f", keskiarvo);
    printf("\nSuurin luku = %.2f", max);


    return 0 ;
    
}

