/*[#35] Leia um vetor A com 6 elementos do tipo real. Construir um vetor B, em que cada posição de índice ímpar do vetor B deve ser
 atribuída com um elemento de índice par existente no vetor A e cada posição de índice par do vetor B deve ser atribuída com um 
 elemento de índice ímpar existente no vetor A. Apresentar os elementos dos dois vetores.*/

#include <stdio.h>

int main(void){

    float a[6], b[6];
    int i=0, j=0;

    for(i=0; i<6; i++){
        printf("Digite o %iº valor: ", i+1);
        scanf("%f", &a[i]);
    }

    printf("vetor 'A' :\n");

    for(i=0; i<6; i++){
        printf("Valor %iº do vetor: %.0f\n", i+1, a[i]);
    }

    printf("\nvetor 'B' :\n");

    for(i=5; i>=0; i--){
        b[5-i] = a[i];
        printf("Valor %iº do vetor: %.0f\n", j+1, b[5-i]);
        j++;
    }

    return 0;
}