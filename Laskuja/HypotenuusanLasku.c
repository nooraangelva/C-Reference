#include <stdio.h>
#include <math.h>

int main()
{
    float kateetti1 = 0;
    float kateetti2 = 0;
    float hypotenuusa = 0;
    float kat_kat = 0;

    printf("anaa kateetin pituus");
    scanf("%f", &kateetti1);
    printf("anna toisen kateetin pituus");
    scanf("%f", &kateetti2);

    kat_kat = pow(kateetti1,2)+ pow(kateetti2,2);
    hypotenuusa = sqrt(kat_kat);

    printf("Hypotenuusa on %.2f \n", hypotenuusa);

    return 0;
}
