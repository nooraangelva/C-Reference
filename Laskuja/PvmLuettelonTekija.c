#include <stdio.h>
#include <math.h>

int main()
{

    int i;
    int pv;

    printf("anna paiva kerron sinulle seuraavat 10 paivaa: \n");
    scanf("%i", &pv);

    for (i=1; i<=10; i++)
    {
        ++pv;

        if (pv >= 31)
        {
            pv= pv-30;
        }
        printf("%i \n",pv);
    }

    return 0;
    
}
