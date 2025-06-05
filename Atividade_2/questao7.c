/*[#7] Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre
a idade dessa pessoa e quantos anos ela será em 2050.*/
#include <stdio.h>

int main(void)
{

    int anoNascimento, anoAtual, idadeAtual, idade2050;

    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);

    printf("Digite seu ano de nascimento: ");
    scanf("%i", &anoNascimento);

    if (anoNascimento >= anoAtual)
    {
        printf("O ano de nascimento não pode ser maior ou igual ao ano atual!");
    }
    else
    {
        idadeAtual = anoAtual - anoNascimento;
        idade2050 = 2050 - anoNascimento;
        printf("A sua idade atual é: %i anos e, a sua idade em 2050 será de: %i anos", idadeAtual, idade2050);
    }

    return 0;
}