/*[#39] Ler um vetor W de 10 elementos, depois ler um valor V. Contar e escrever quantas vezes o valor
V ocorre no vetor W e escrever também em que posições (índices) do vetor W o valor V aparece. Caso o valor 
V não ocorra nenhuma vez no vetor W, escrever uma mensagem informando isto.*/

#include <stdio.h>

int main(void) {
    int w[10], v, j=0;

    for(int i; i < 10; i++) {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &w[i]);
    }

    printf("\nDigite o valor v: ");
    scanf("%i", &v);

    printf("\n");
    for(int i = 0; i < 10; i++) {
        if(w[i] == v) {
            j++;
            printf("O valor %i aparece na posição %i\n", v, i);
        }
    }

    if(j == 0){
        printf("\nO valor %i não aparece no vetor w\n", v);
    } else {
        printf("\nO valor %i aparece %i vezes no vetor w\n", v, j);
    }

    return 0;
}