/*[#44]Elaborar um algoritmo que leia um vetor A com 10 elementos do tipo cadeia. Construir um vetor B de mesma dimensão
e tipo que o vetor A. O último elemento do vetor A deve ser o primeiro elemento do vetor B, o penúltimo elemento do
vetor A deve ser o segundo do vetor B até que o primeiro elemento do vetor A seja o último do vetor B. Ordenar e
apresentar os elementos do vetor B de forma crescente.*/

#include <stdio.h>
#include <string.h>

#define TAMANHO_VETOR 10
#define MAX_CARACTERES 50

int main(void){

    char A[TAMANHO_VETOR][MAX_CARACTERES], B[TAMANHO_VETOR][MAX_CARACTERES], temp[MAX_CARACTERES];             
    int i, j;       

    printf("Digite 10 elementos (palavras/frases curtas) para o vetor A:\n");
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("A[%d]: ", i);
        fgets(A[i], MAX_CARACTERES, stdin);
        A[i][strcspn(A[i], "\n")] = '\0';
    }

    for (i = 0; i < TAMANHO_VETOR; i++){
        strcpy(B[i], A[TAMANHO_VETOR - 1 - i]);
    }

    printf("\nElementos do vetor B (Inversao de A) - Antes da Ordenacao:\n");
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("B[%d]: %s\n", i, B[i]);
    }

    for (i = 0; i < TAMANHO_VETOR - 1; i++){
        for (j = 0; j < TAMANHO_VETOR - 1 - i; j++){
            if (strcmp(B[j], B[j + 1]) > 0){
                strcpy(temp, B[j]);
                strcpy(B[j], B[j + 1]);
                strcpy(B[j + 1], temp);
            }
        }
    }

    printf("\nElementos do vetor B em ordem crescente:\n");
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("%s\n", B[i]);
    }

    return 0;
}