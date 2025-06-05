//[#11] Receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

#include <stdio.h>

int main(void)
{

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("Parabéns! Você é maior de idade");
    }
    else
    {
        printf("Você ainda é menor de idade");
    }

    return 0;
}