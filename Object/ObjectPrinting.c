#include <stdio.h>
#include <math.h>
#include <string.h>

struct kannykka {

    char valmistaja[11];
    char malli[10];
    double hinta;
    char vari[10];

};

int main (void)
{

    struct kannykka tieto;
    struct kannykka p;

    strcpy(tieto.malli, "6T");
    tieto.hinta = 599;
    strcpy(tieto.vari, "musta");
    strcpy(tieto.valmistaja, "Aki");

    p = tieto;
    printf("valmistaja: %s, malli: %s, hinta: %.2f e, vari %s\n",
    p.valmistaja, p.malli, p.hinta, p.vari);

}

