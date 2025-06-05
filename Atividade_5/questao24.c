/*[#24] Calcular a área total em metros de uma residência com os cômodos sala, cozinha, banheiro, dois
quartos, área de serviço, quintal, garagem, entre outros que podem ser fornecidos. O algoritmo deve solicitar
a entrada do nome, da largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do
cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos.
Caso o usuário responda “NÃO”, o programa deve apresentar o valor total acumulado da área residencial.*/

#include <stdio.h>

int main(void){

    char nome[100], resp = 'S';
    float largura, comprimento, areaComodo, areaTotal = 0;

    while(resp == 'S' || resp == 's'){

        printf("Digite o nome do cômodo: ");
        scanf("%s", nome);

        printf("Digite a largura do cômodo: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do cômodo: ");
        scanf("%f", &comprimento);

        areaComodo = largura * comprimento;
        areaTotal = areaTotal + areaComodo;

        printf("A area do cômodo: %s é de: %.2fm²", nome, areaComodo);

        printf("\nDeseja continuar ?(S/N) ");
        scanf(" %c", &resp);
    }
    if(resp != 'S'){
        printf("\nA área acumulada até agora é de: %.2fm²", areaTotal);
    }

    return 0;
}
