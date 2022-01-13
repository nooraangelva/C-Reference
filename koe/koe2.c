#include <stdio.h>
#include <math.h>

int main()

{
int paiva, yo, phinta, yhinta, maksuyht, maksupv,maksuyo, kulutusnelio, kulutus, kulutus2, kulutus3;
float nelio;
while (1)
{
printf("paljonko sahkoa on kulunut vuodessa paivalla ja yolla (kwh): ");
scanf("%i %i",&paiva, &yo);
kulutus=paiva+yo;
kulutus2=1.7*200;
kulutus3=0.3*200;
if (kulutus<kulutus2 && kulutus>kulutus3)
{
    break;
}
printf("Virhe!");
}
printf("Paljonko sahkon hinta on paivalla ja yolla (sent/kwh): ");
scanf("%i %i", &phinta, &yhinta);
printf("Montako neliötä talossa on: ");
scanf("%f",&nelio);

maksuyht=(paiva*phinta+yo*yhinta)/100;
maksupv=(paiva*phinta)/100;
maksuyo=(yo*yhinta)/100;
kulutusnelio=(paiva+yo)/nelio;


printf("kokohinta %i e \n paiva maksu %i e\n Yo maksu %i e\n sahkon kulutus vuodessa per nelio %i \n",maksuyht,maksupv,maksuyo,kulutusnelio);
if (kulutus<200)
{
    printf("kulutuksesi on keskimaaraista alempi");
}
else if (kulutus>200)
{
    printf("Kulutuksesi on keskimaaraista korkeampi");
}
else if (kulutus==200)
{
    printf("kulutuksesi on sama kuin keskimaarainen kulutus suomalaisella");
}
}
