#include <stdio.h>

void kaanna(char merkit[]);

int main()
{

    char merkit[6]= "Aapo";
    kaanna(merkit);

    return 0;

}

void kaanna(char merkit[])
{

    int i = 4;
    merkit[i] = '\0';

    while(i>=0)
    {

        printf("%c ", merkit[i]);
        i--;

    }

    return 0;

}
