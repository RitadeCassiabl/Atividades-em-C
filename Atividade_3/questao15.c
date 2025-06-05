/*[#15] Solicite o ano de casamento, o ano atual e escreva as seguintes mensagens, para os seguintes casos: 25 anos - "Bodas de Prata";
50 anos - "Bodas de Ouro" e 75 anos - "Bodas de Diamante". Nos casos restantes escrever apenas o número de anos de casados*/

#include <stdio.h>

int main(void)
{

    int anoCasamento, anoAtual, anosCasados;

    printf("Digite o ano do casamento: ");
    scanf("%i", &anoCasamento);

    printf("Digite o ano atual: ");
    scanf("%i", &anoAtual);

    anosCasados = anoAtual - anoCasamento;

    if (anosCasados == 25)
    {
        printf("Feliz Bodas de Prata ao casal!");
    }
    else if (anosCasados == 50)
    {
        printf("Feliz Bodas de Ouro ao casal!");
    }
    else if (anosCasados == 75)
    {
        printf("Feliz Bodas de Diamante ao casal!");
    }
    else
    {
        printf("Feliz %i anos de casados!", anosCasados);
    }

    return 0;
}