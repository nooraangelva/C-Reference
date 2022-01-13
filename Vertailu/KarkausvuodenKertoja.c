#include <stdio.h>
#include <math.h>

int main()
{
    
    int vuosi;

    printf("Anna vuosi katson onko se karkausvuosi");
    scanf("%i", &vuosi);

    if (vuosi % 400 == 0 )
    {

        printf("vuosi on karkausvuosi");
    }
    else if (vuosi % 4 == 0 && vuosi % 100 != 0)
    {
        printf("Vuosi on karkausvuosi");
    }
    else
    {
        printf("vuosi ei ole karkausvuosi");
    }

    return 0;

}
