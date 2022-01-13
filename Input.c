#include <stdio.h>

int main()

{

    int rahamaara;
    int snt_50 ;
    int snt_20 ;
    int snt_10 ;
    int snt_5 ;
    int snt_2 ;
    int snt_1 ;

    printf("Anna raha maara 1-100 senttia");
    scanf("%i", &rahamaara);

    snt_50 = rahamaara / 50;
    rahamaara = rahamaara % 50;
    snt_20 = rahamaara / 20;
    rahamaara = rahamaara % 20;
    snt_10 = rahamaara / 10;
    rahamaara = rahamaara % 10;
    snt_5 = rahamaara / 5;
    rahamaara = rahamaara % 5;
    snt_2 = rahamaara / 2;
    rahamaara = rahamaara %2;
    snt_1 = rahamaara / 1;

    printf("%i kpl 50snt /n", snt_50);
    printf("%i kpl 20snt /n", snt_20);
    printf("%i kpl 10snt /n", snt_10);
    printf("%i kpl 5snt /n", snt_5);
    printf("%i kpl 2snt /n", snt_2);
    printf("%i kpl 1snt /n", snt_1);

    return 0;
}
