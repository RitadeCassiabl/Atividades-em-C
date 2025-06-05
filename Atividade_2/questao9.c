//[#9] Receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa
#include <stdio.h>
#include <math.h>

int main(void)
{
    int cateto1, cateto2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%i", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%i", &cateto2);

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("O valor da hipotenusa é %i", hipotenusa);

    return 0;
}