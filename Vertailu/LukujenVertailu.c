#include <stdio.h>
#include <math.h>

int main()
{

    int luku1;
    int luku2;

    printf("Anna kaksi lukua, kerron kumpi on suurempi ");
    scanf("%i %i", &luku1, &luku2);

    if (luku1 < luku2)
    {
        printf(" %i on suurempi", luku2);
    }
    else if (luku2 < luku1)
    {
        printf("%i on suurempi", luku1);
    }
    else if (luku1 = luku2)
    {
        printf("luvut ovat yht� suuria");
    }

    return 0;

}
