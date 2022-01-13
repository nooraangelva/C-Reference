#include <stdio.h>
#include <string.h>

struct asiakas
{

    int kayttajatunnus;
    int salasana;
    char nimi[80];
    int saldo;

};

void arvot(struct asiakas tieto[]);
int kirjautuminen(struct asiakas tieto[], int numero1, int numero2);
void otto(struct asiakas tieto[], int indeksi, int nosto);

int main()
{
    struct asiakas tieto[80];
    int nosto, valinta, indeksi, numero1, numero2;

    while (valinta !=5)
    {

        arvot(tieto);
        printf("Anna kayttajatunnus : ");
        scanf("%d", &numero1);
        printf("Anna salasana : ");
        scanf("%d", &numero2);
        indeksi = kirjautuminen(tieto, numero1, numero2);
        
        if (indeksi ==  - 1){

            printf("Tilia ei loydetty : ");

        }
        else{

            while (valinta!=3)
            {

                printf("\nMenu :\n");
                printf("Paina 1 nayta tiedot.\n");
                printf("Paina 2 nostaaksesi rahaa.\n");
                printf("Paina 3 lopettaaksesi.\n");
                printf("\n Valitse(1-3) : ");
                scanf("%d", &valinta);

                switch (valinta)
                {
                    case 1:
                    {
                        printf("\nNimi: %s\nSaldo: %d\n",
                        tieto[indeksi].nimi,
                        tieto[indeksi].saldo);
                        break;
                    }  
                    case 2:
                    {
                        printf("ilmoita noston suuruus : ");
                        scanf("%d", &nosto);
                         otto(tieto, indeksi, nosto);
                        break;
                    }
                    case 3:
                    {
                        printf("Hyvaa paivan jatkoa \n");
                        break;
                    }

                }

            }

        }

    }

    return 0;

}

void arvot(struct asiakas tieto[80])
{

    int i=1;

    tieto[i].kayttajatunnus = 1234;
    tieto[i].salasana = 1111;
    strcpy(tieto[i].nimi, "Noora Angelva");
    tieto[i].saldo = 50;
    fflush(stdin);

    i++;

    tieto[i].kayttajatunnus = 5678;
    tieto[i].salasana = 1234;
    strcpy(tieto[i].nimi, "Iines Ankka");
    tieto[i].saldo = 100;
    fflush(stdin);

}


int kirjautuminen(struct asiakas tieto[80], int numero1, int numero2)
{
    int i;

    for (i = 0; i < 3; i++){

        if (tieto[i].kayttajatunnus == numero1){

            if (tieto[i].salasana == numero2){

                return i;

            }
            else{

                return -1;

            }

        }

    }

    return  - 1;

}

void otto(struct asiakas tieto[], int indeksi, int nosto)
{

    int i = indeksi;

    if (tieto[i].saldo < nosto){

        printf("Ei riittavasti varoja\n");

    }
    else{

        tieto[i].saldo -= nosto;

    }
    
}
