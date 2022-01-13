#include <stdio.h>
#include <math.h>
#include <string.h>

struct kannykka {
    char valmistaja[11];
    char malli[10];
    float hinta;
    char vari[10];
};

struct kannykka lueTiedot();
void tulosta (struct kannykka tieto);

int main (void)
{

    struct kannykka yksi = lueTiedot();
    struct kannykka kaksi = lueTiedot();
    struct kannykka kolme = lueTiedot();
    struct kannykka nelja = lueTiedot();
    struct kannykka viisi = lueTiedot();

    tulosta(yksi);
    tulosta(kaksi);
    tulosta(kolme);
    tulosta(nelja);
    tulosta(viisi);

    return 0;

}

struct kannykka lueTiedot()
{

    struct kannykka tieto;

    printf("\n");
    printf("Sy�t� valmistaja: ");
    gets(tieto.valmistaja);
    printf("Syot malli: ");
    gets(tieto.malli);
    printf("Syota hinta: ");
    scanf("%f", &tieto.hinta);
    fflush(stdin);
    printf("Syota vari: ");
    gets(tieto.vari);

    return tieto;

}

void tulosta (struct kannykka tieto)
{

    printf("puhelin 1 \n valmistaja: %s  malli: %s  hinta: %.2f vari: %s \n", tieto.valmistaja, tieto.malli, tieto.hinta, tieto.vari);

    return 0;
    
}
