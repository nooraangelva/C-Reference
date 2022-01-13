#include <stdio.h>

 int kaanteinen(int luvut[]);

int main(void)
{

    int luvut[11] = {1,2,3,4,5,6,7,8,9,10,11};
    kaanteinen(luvut);

    return 0;

}

int kaanteinen(int luvut[])
{

    int i = 10;
    
    while(i>=0)
    {
        printf("%i ", luvut[i]);
        i--;
    }

 return 0;

}
