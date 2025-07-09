/*[#42] Elaborar um algoritmo que leia 2 vetores A e B com 12 elementos reais cada. Construir um vetor C de mesmo tipo que seja 
formado pelo produto de cada elemento correspondente aos vetores A e B. Montar o trecho de pesquisa SEQUENCIAL para pesquisar 
os elementos existentes no vetor C.*/

#include <stdio.h>

int main(void){

    float A[12], B[12], C[12], elementoPesquisar; 
    int i, encontrado = 0;      

    printf("Digite os 12 elementos do vetor A:\n");
    for (i = 0; i < 12; i++) {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nDigite os 12 elementos do vetor B:\n");
    for (i = 0; i < 12; i++) {
        printf("B[%d]: ", i);
        scanf("%f", &B[i]);
    }

    for (i = 0; i < 12; i++) {
        C[i] = A[i] * B[i];
    }

    printf("\nElementos do vetor C (Produto de A e B):\n");
    for (i = 0; i < 12; i++) {
        printf("C[%d] = %.2f\n", i, C[i]); 
    }

    printf("\n--- Pesquisa Sequencial no Vetor C ---\n");
    printf("Digite o elemento que deseja pesquisar no vetor C: ");
    scanf("%f", &elementoPesquisar);

    for (i = 0; i < 12; i++) {
        if (C[i] == elementoPesquisar) {
            printf("Elemento %.2f encontrado na posicao C[%d].\n", elementoPesquisar, i);
            encontrado = 1;
            break;         
        }
    }

    if (encontrado == 0) {
        printf("Elemento %.2f nao encontrado no vetor C.\n", elementoPesquisar);
    }

    return 0;
}