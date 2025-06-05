/*[#14] Colocar em MAIOR o maior de A, B e C e em MENOR o menor deles, sendo que A, B e C devem ser lidos.
Imprimir os valores lidos e os determinados.*/

#include <stdio.h>

int main(void)
{

    int A, B, C, maior, menor;

    printf("Digite o primeiro valor: ");
    scanf("%i", &A);

    printf("Digite o segundo valor: ");
    scanf("%i", &B);

    printf("Digite o terceiro valor: ");
    scanf("%i", &C);

    maior = A;
    menor = A;
    
    if (B > maior)
    {
        maior = B;
    }
    if (C > maior)
    {
        maior = C;
    }

    if (B < menor)
    {
        menor = B;
    }
    if (C < menor)
    {
        menor = C;
    }

    printf("O maior valor é: %i\nE o menor valor é: %i", maior, menor);

    return 0;
}