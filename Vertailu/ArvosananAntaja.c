#include <stdio.h>
#include <math.h>

int main()
{

    float numero;

    printf("Anna pistemaarasi niin kerron arvosanasi");
    scanf("%f", &numero);

    if(numero <= 50)
    {
    printf("0");
    }
    else if(numero >= 51 && numero <= 60)
    {
    printf("1 \n");
    }
    else if(numero >= 61 && numero <= 70)
    {
    printf("2\n");
    }
    else if(numero >= 71 && numero <= 80)
    {
    printf("3\n");
    }
    else if (numero >= 81 && numero <= 90)
    {
    printf("4 \n");
    }
    else if (numero >= 91 && numero <= 100)
    {
        printf("5 \n");
    }
    
    return 0;

}
