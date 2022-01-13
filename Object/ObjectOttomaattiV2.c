#include <stdio.h>
#include <math.h>
#include <string.h>

struct henkilo
{

    char kayttajatunnus[4];
    char salasana[4];
    char nimi[50];
    float saldo;

};

struct henkilo lueTiedot();
struct henkilo lueTiedot2();
//int tunnistautuminen(struct henkilo tieto);
void valikko(struct henkilo tieto);
void valinta1(struct henkilo tieto);
void valinta2(struct henkilo tieto);
void valinta3(struct henkilo tieto);

int main()
{

    struct henkilo noora = lueTiedot();
    struct henkilo iines = lueTiedot2();
    char tunnus[4];
    char sana [4];
    int luku;
    int k=1;

    while (k<=10)
    {
        printf("anna kayttajatunnus \n");
        gets(tunnus);

        if (strcmp(tunnus,noora.kayttajatunnus)==0){
            if (strcmp(noora.salasana,sana)==0){

            // luku= tunnistautuminen(noora);
            // if (luku==1)
            //{
            valikko(noora);
            }

        }

        else if (strcmp(iines.kayttajatunnus,tunnus)==0){

            //tunnistautuminen(iines);
            valikko(iines);

        }
        //else if (tunnistautuminen(noora)== -1 || tunnistautuminen(iines)== -1)
        // {
        //    printf("anna oikea kayttajatunnus ja salasana");
        // }
        else{

            printf("tunnusta ei ole");
            
        }

    }

}

struct henkilo lueTiedot()
{
    struct henkilo tieto;

    strcpy(tieto.salasana, "apua");
    strcpy(tieto.nimi, "Noora Angelva");
    tieto.saldo = 3.50;

    return(tieto);

}

struct henkilo lueTiedot2()
{

    struct henkilo tieto;
    strcpy(tieto.kayttajatunnus, "ines");
    strcpy(tieto.salasana, "aani");
    strcpy(tieto.nimi, "Iines Ankka");
    tieto.saldo = 100.55;

    return(tieto);

}

// int tunnistautuminen(struct henkilo tieto, char sana [], char tunnus[])
//{

//>if (strcmp(tieto.kayttajatunnus,tunnus)==0)
//{
    //if (strcmp(tieto.salasana,sana)==0)
    //{
      //  return(1);
    //}
//}


//}

void valikko(struct henkilo tieto)
{
    int valinta;
    printf("1. katso tilitietoja \n 2. nosta rahaa \n 3. lopeta \n");
    scanf("%i", &valinta);

    if (valinta==1){

        valinta1 (tieto);
    }

    else if (valinta == 2){

        valinta2 (tieto);

    }
    else if (valinta == 3){

        valinta3 (tieto);

    }


}

void valinta1(struct henkilo tieto)
{
    int takaisin;

    printf("Nimi: %s \n saldo: %f \n", tieto.nimi, tieto.saldo);
    printf("voit palata valikkoon painamalla 0");
    scanf("%i", &takaisin);

    if (takaisin == 0){

        valikko(tieto);

    }
    else{

      valinta3(tieto);

    }

}

void valinta2(struct henkilo tieto)
{
    float nosto;

    printf("paljonko haluat nostaa rahaa. tilillasi on %f", tieto.saldo);
    scanf("%f", &nosto);

    tieto.saldo=tieto.saldo-nosto;
    if (tieto.saldo<0){

        printf("ei tarpeeksi varoja");

    }
    else{

        printf("tilille jai %f euroa", tieto.saldo);

    }

    valinta3(tieto);

}

void valinta3(struct henkilo tieto)
{
    
  printf("hyvaa paivan jatkoa %s", tieto.nimi) ;

}
