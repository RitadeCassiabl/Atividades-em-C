/*[#45] Escrever um algoritmo que leia 15 elementos do tipo inteiro em um vetor A. Depois solicitar
um valor qualquer e verificar se este valor está contido no vetor A, realizando uma pesquisa BINÁRIA.*/

#include <stdio.h>

#define TAMANHO_VETOR 15

int main(void){

    int A[TAMANHO_VETOR], i, j, temp, valorPesquisar;

    printf("Digite 15 elementos inteiros para o vetor A:\n");
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < TAMANHO_VETOR - 1; i++){
        for (j = 0; j < TAMANHO_VETOR - 1 - i; j++){
            if (A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("\nElementos do vetor A (ordenado em ordem crescente):\n");
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("\nDigite o valor que deseja pesquisar no vetor: ");
    scanf("%d", &valorPesquisar);

    int inicio = 0, fim = TAMANHO_VETOR - 1, meio, encontrado = 0, posicao = -1;

    while (inicio <= fim){
        meio = (inicio + fim) / 2;

        if (A[meio] == valorPesquisar){
            encontrado = 1;
            posicao = meio;
            break;
        } else if (A[meio] < valorPesquisar){
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (encontrado){
        printf("Valor %d encontrado na posicao A[%d] (indice %d) do vetor.\n", valorPesquisar, posicao, posicao);
    } else {
        printf("Valor %d nao encontrado no vetor.\n", valorPesquisar);
    }

    return 0;
}