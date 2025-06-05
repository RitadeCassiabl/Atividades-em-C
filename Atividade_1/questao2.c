/*[#2] Obter e atribuir um valor randômico a uma variável inteira...utiliza-se a função randômica da
 ferramenta de pseudocódigo (u.sorteia(valor_inicial, valor_final) no Studio).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int limiteInicial, limiteFinal, numeroSorteado;

    printf("Digite o limite inicial: ");
    scanf("%i", &limiteInicial);

    printf("Digite o limite final: ");
    scanf("%i", &limiteFinal);

    if (limiteInicial < limiteFinal){
        srand(time(NULL));
        numeroSorteado = rand() % limiteFinal + limiteInicial;

        printf("O número sorteado é: %i", numeroSorteado);
    } else {
        printf("O limite inicial não pode ser maior que o limite final.");
    }

    return 0;
}