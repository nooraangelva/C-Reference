#include <stdio.h>
#include <string.h>

void muuta(char merkit[]);

int main()
{

    char merkit [10]={"a-p-u-a"};
    muuta(merkit);

}

muuta(char merkit[])
{

    int pituus = strlen(merkit);
    int i = 0;

    while(i<pituus)
    {

        if(merkit[i] == '-')
        {

            merkit[i] = '_';

        }

        printf(" %c", merkit[i]);

        i++;
        
    }

}
