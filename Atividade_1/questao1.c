/*[#1] Leia três valores numéricos inteiros (representados pelas variáveis A, B e C) e 
apresente como resultado final o valor da soma dos quadrados dos três valores lidos.*/

#include <stdio.h>

int main(void)
{
    int A, B, C, soma;

    printf("Digite o valor de A: ");
    scanf("%i", &A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    printf("Digite o valor de C: ");
    scanf("%i", &C);

    soma = (A*A)+(B*B)+(C*C);

    printf("A soma dos quadrados dos valores é %i", soma);

    return 0;
}