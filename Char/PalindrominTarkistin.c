#include <stdio.h>
#include <string.h>

void palindromi(char merkit[]);

int main()
{

    palindromi("saippuakauppias");
    return 0;

}

void palindromi(char merkit[])
{

    int l = 0;
    int h = strlen(merkit) - 1;

    while (h > l)
    {

        if (merkit[l++] != merkit[h--])
        {

            printf("%s ei ole Palindromi", merkit);
            return;
            
        }

    }

    printf("%s on palindromi", merkit);

}
