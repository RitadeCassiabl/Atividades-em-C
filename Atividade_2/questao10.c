//[#10] Receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo

#include <stdio.h>

int main(void)
{
    int angulo1, angulo2, angulo3;

    printf("Digite o valor do primeiro ângulo: ");
    scanf("%i", &angulo1);

    printf("Digite o valor do segundo ângulo: ");
    scanf("%i", &angulo2);

    if ((angulo1 + angulo2) >= 180)
    {
        printf("Os valores são inválidos!");
    }
    else
    {
        angulo3 = 180 - (angulo1 + angulo2);
        printf("O valor do terceiro ângulo é: %i", angulo3);
    }

    return 0;
}