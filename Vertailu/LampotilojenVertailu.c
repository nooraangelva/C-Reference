#include <stdio.h>
#include <math.h>

int main()
{

    float aste;
    printf("Anna lampotila ");
    scanf("%f", &aste);

    if (0 <= aste && aste <= 10)
    {
        printf("Kylmaa");
    }
    else if (11<= aste && aste <= 15)
    {
        printf("Koleaa");
    }
    else if (16 <= aste && aste <= 20)
    {
        printf("Melko lamminta");
    }
    else if (21 <= aste && aste <= 25)
    {
        printf("lamminta");
    }
    else if (26 <= aste && aste <= 30)
    {
        printf("Helletta");
    }
    return 0;
    
}
