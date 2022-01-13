#include <stdio.h>
#include <stdio.h>

int onkoPariton(int luku1);

int main()
{

    int luku1;
    int kumpi;

    printf("anna luku katson onko se parillinen vai pariton:");
    scanf("%i", &luku1);

    kumpi= onkoPariton(luku1);

    if (kumpi == 1)
        printf("%i oli pariton", luku1);
    else printf("%i oli parillinen",luku1);
    
}

int onkoPariton(int luku1)
{
    int kumpi;

   if (luku1 %2 == 0)

    return(0);
    else
        return 1;
}
