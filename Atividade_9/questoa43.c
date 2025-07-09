/*[#43] Elaborar um algoritmo que leia 2 vetores A e B com 10 elementos inteiros cada. Construir um vetor C de mesmo 
tipo e dimensão que seja formado pela soma dos quadrados de cada elemento correspondentes dos vetores A e B. Ordenar 
e apresentar o vetor C em ordem decrescente.*/

#include <stdio.h>
#include <math.h>

int main(void){

    int A[10], B[10];
    float C[10];
    int i, j;

    printf("Digite os 10 elementos inteiros do vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os 10 elementos inteiros do vetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 10; i++) {
        C[i] = pow(A[i], 2) + pow(B[i], 2);
    }

    printf("\nElementos do vetor C (Soma dos Quadrados de A e B) - Antes da Ordenacao:\n");
    for (i = 0; i < 10; i++) {
        printf("C[%d] = %.2f\n", i, C[i]);
    }

    for (i = 0; i < 9; i++) { 
        for (j = 0; j < 9 - i; j++) {
            if (C[j] < C[j + 1]) {
                float aux_float = C[j];
                C[j] = C[j + 1];
                C[j + 1] = aux_float;
            }
        }
    }

    printf("\nElementos do vetor C em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", C[i]);
    }
    printf("\n");

    return 0;
}