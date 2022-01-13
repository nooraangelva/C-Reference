#include <stdio.h>
#include <math.h>

int main()
{
    
    int n;
    int i;
    int n1 = 1;
    int n2 = 0;
    int numero;


    printf("monennenko  fibonaccin luvun haluat:  ");
    scanf("%i", &n);

    for (i= 1; i <= n; i++)
    {
        numero= n1 + n2;
        n1=n2;
        n2 = numero;

    }

    printf("%d. luku on %d" , n, numero);

    return 0;

}
