#include <stdio.h>
#include <stdlib.h>

float keskiarvo(float *luvut, float koko);

int main()
{

    float luvut[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 4.5, 6.7, 8, 5.5};
    double keskiarvo1;
    keskiarvo1 = keskiarvo(luvut, 9);
    printf("Keskiarvo on %.2f \n", keskiarvo1);

    return 0;

}
float keskiarvo(float *luvut, float koko)
{

    float summa = 0.0;
    int i;

    for(i=0; i<koko; i++)
    {

    summa = summa + luvut[i];

    }

    float tulos= summa / koko;

    return (tulos);

}

