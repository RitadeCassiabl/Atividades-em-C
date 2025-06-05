/*[#13] Efetuar a leitura de 3 valores inteiros desconhecidos representados pelas variáveis A, B e C. Somar os
valores fornecidos e apresentar o resultado somente se for maior ou igual a 100.*/

#include <stdio.h>

int main(void)
{

    int A, B, C, soma;

    printf("Digite o primeiro valor: ");
    scanf("%i", &A);

    printf("Digite o segundo valor: ");
    scanf("%i", &B);

    printf("Digite o terceiro valor: ");
    scanf("%i", &C);

    soma = A + B + C;

    if (soma >= 100)
    {
        printf("O resultado da soma dos três números é igual a: %i", soma);
    }

    return 0;
}