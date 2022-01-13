#include <stdio.h>
#include <time.h>

int paivienero (int pv1,int kk1,int pv2);

main ()
{

    int kk1, pv1, pv2, paivaa;

    printf("anna paiva. lasken montako paivaa jouluun \n");
    scanf("%i", &pv1);
    printf("anna kuukausi \n");
    scanf("%i", &kk1);
    pv2= 358;
    paivaa= paivienero(pv1, kk1, pv2);
    printf("jouluun on %i paivaa", paivaa);

    return 0;

}

int paivienero (int pv1,int kk1,int pv2)
{

    if (kk1==1)
    {
        int paivaa;
        paivaa = pv2 - pv1;
        return (paivaa);
    }
    else if (kk1==2)
    {
        int paivaa;
        int kk3=31;
        paivaa = pv2 - (pv1+kk3);
        return (paivaa);
    }
    else if (kk1==3)
    {
        int paivaa;
        kk1=59;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==4)
    {
        int paivaa;
        kk1=90;
        paivaa=pv2-(pv1+kk1);
        return (paivaa);
    }
    else if (kk1==5)
    {
        int paivaa;
        kk1=120;
        paivaa=pv2-(pv1+kk1);
        return (paivaa);
    }
    else if (kk1==6)
    {
        int paivaa;
        kk1=151;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==7)
    {
        int paivaa;
        kk1=181;
         paivaa=pv2-(pv1+kk1);
         return(paivaa);
    }
    else if (kk1==8)
    {
         int paivaa;
        kk1=212;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==9)
    {
         int paivaa;
        kk1=243;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==10)
    {
        int paivaa;
        kk1=273;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==11)
    {
         int paivaa;
        kk1=304;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    else if (kk1==12)
    {
        int paivaa;
        kk1=334;
        paivaa=pv2-(pv1+kk1);
        return(paivaa);
    }
    
}
