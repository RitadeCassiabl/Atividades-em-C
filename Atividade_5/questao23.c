/*[#23] Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima todos os
números pares no intervalo aberto e seu somatório. Suponha que os dados digitados são para um intervalo
crescente, ou seja, o primeiro valor é menor que o segundo.*/

#include <stdio.h>

int main(void){

    int limiteInferior, limiteSuperior, soma = 0;

    printf("Digite o limite inferior do intervalo: ");
    scanf("%i", &limiteInferior);

    printf("Digite o limite superior do intervalo: ");
    scanf("%i", &limiteSuperior);

    if (limiteInferior < limiteSuperior){
        for (int i = limiteInferior; i <= limiteSuperior; i++){
            if (i % 2 == 0){
                soma = soma + i;
                printf("%i ", i);
            }
        }
        printf("\nSomatório: %i", soma);
    } else {
        printf("Valores inválidos!");
    }

    return 0;
}