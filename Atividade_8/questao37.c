/*[#37] Elabore um algoritmo que solicite/leia dados, do tipo caractere, em dois vetores (A e B) de 10 elementos cada, simultaneamente. Gerar 
um terceiro vetor (C) de mesmo tamanho e tipo, sendo o resultado da união dos dois vetores  anteriores, isto é, cada elemento do vetor C será 
formado pela concatenação do conteúdo do elemento A e elemento B. Exemplo: A[1]=“abc” e B[1]=”def” resulta em C[1]=”abcdef” Considere que os 
vetores poderão ter caracteres repetidos.  Antes de encerrar o algoritmo mostre o conteúdo dos 3 vetores*/

#include <stdio.h>

int main(void){

    char a[10][20], b[10][20], c[10][40];

    for(int i = 0; i < 10; i++) {
        printf("Digite o elemento %d do vetor A: ", i + 1);
        scanf("%s", a[i]);
        printf("Digite o elemento %d do vetor B: ", i + 1);
        scanf("%s", b[i]);
        
        snprintf(c[i], sizeof(c[i]), "%s%s", a[i], b[i]);
    }
    
    printf("A ");

    for(int i = 0; i < 10; i++) {
        printf("%s ", a[i]);
    }

    printf("\nB ");

    for(int i = 0; i < 10; i++) {
        printf("%s ", b[i]);
    }

    printf("\nC ");

    for(int i = 0; i < 10; i++) {
        printf("%s ", c[i]);
    }
    
    return 0;
}