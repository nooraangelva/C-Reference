#include <stdio.h>
#include <math.h>

float kolmaspotenssi (float luku1);

int main()
{

    float vastaus = 0;
    float luku1;
    
    printf("anna luku korotan sen kolmanteen potenssiin:");
    scanf("%f", &luku1);
    vastaus = kolmaspotenssi(luku1);
    printf("3.potenssi on: %.2f",vastaus);

    return 0;

}

float kolmaspotenssi (float luku1)
{
    float vastaus;

    vastaus = luku1 * luku1 * luku1;

    return (vastaus);

}
