#include <stdio.h>

int main()

{
char nimi[20];
int puh[10];
int vuosi;
float pituus;
float paino;

printf("Kirjoita nimesi: ");
scanf("%s", &nimi);
printf("\nKirjoita puhelinnumerosi: ");
scanf("%s", &puh);
printf("\nKirjoita syntymävuotesi: ");
scanf("%i", &vuosi);
printf("\nKirjoita pituutesi: ");
scanf("%f", &pituus);
printf("\nKirjoita painosi: ");
scanf("%f", &paino);

if(paino<0)
{
    printf("Virheellinen arvo\n");
    printf("%s \n puh: %s \n syntymavuosi: %i\n %.1f cm\n",nimi,puh,vuosi,pituus);
}
else if (pituus<0)
{
    printf("Virheellinen arvo\n");
    printf("%s \n puh: %s \n syntymavuosi: %i\n %.1f kg",nimi,puh,vuosi,paino);
}
else
printf("%s \n puh: %s \n syntymavuosi: %i\n %.1f cm\n %.1f kg",nimi,puh,vuosi,pituus,paino);

}
