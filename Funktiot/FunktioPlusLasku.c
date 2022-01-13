#include <stdio.h>

void foo1(int luku);
void foo2(int *luku);

int main ()
{

    int luku1, luku2, *luku;

    printf("anna luku: ");
    scanf("%d", &luku1);

    luku2=foo1(luku1);
    *luku=foo2(&luku1);

    printf("%d", luku);
    printf("%d", *luku);

}

void foo1(int luku)
{

    luku = luku +10;

    return (luku);

}


void foo2(int *luku)
{

    *luku = *luku + 10;

}
