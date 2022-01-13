#include <stdio.h>
#include <math.h>

float tuotto(int myyntitulot, int menot);
float keskiarvo(int oppilaat, int liikevaihto);

int main()
{
int oppilaat = 0;
int myyntitulot = 1;
int summa = 0;
float keski;
int i=1;
int menot;
int liikevaihto;
int x=0;

printf("Anna oppilaiden lukumaara: ");
scanf("%i", &oppilaat);
printf("Menot: ");
scanf("%i",&menot);
while ( i <= oppilaat)
{
printf("Anna myyntitilo ");
scanf("%i", &myyntitulot);
if (myyntitulot<10)
{
    x++;
}
summa = summa + myyntitulot;
i++;
}
liikevaihto=tuotto(summa, menot);
keski=keskiarvo(oppilaat, liikevaihto);

printf("Tuotto oli yht %i \n",liikevaihto);
printf("Oppilaiden keskiarvo tulot olivat %.1f \n", keski);
printf("%i sai myyntituloja alle 10e",x);
}

float tuotto(int summa, int menot)
{
float liikevaihto;
liikevaihto=summa-menot;
return (liikevaihto);
}
float keskiarvo(int oppilaat, int liikevaihto)
{
float keskiarvo;
keskiarvo = liikevaihto / oppilaat;
return(keskiarvo);
}


