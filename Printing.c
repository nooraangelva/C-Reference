#include <stdio.h>

int main ()

{
    char h1 [] = "Matti";
    char h2 [] = "Maija";
    char h3 [] = "Paavo";

    int syntymavuosi1 = 1970 ;
    int syntymavuosi2 = 1980 ;
    int syntymavuosi3 = 1990 ;

    int palkka1 = 2000 ;
    int palkka2 = 2500 ;
    int palkka3 = 1000 ;

    float veroprosentti1 = 22.8 ;
    float veroprosentti2 = 27.7 ;
    float veroprosentti3 = 19.7 ;

    printf("%-15s %-11s %-4s\n", "Nimi" , "Palkka" , "Veroprosentti");
    printf("\n");
    printf("%-15s %-11i %-4.1f\n" , h1 , palkka1 , veroprosentti1);
    printf("%-15s %-11i %-4.1f\n" , h2 , palkka2 , veroprosentti2);
    printf("%-15s %-11i %-4.1f\n" , h3 , palkka3 , veroprosentti3);

    return 0;
}
