/*[#12] Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e 
apresentar o resultado da diferença do maior valor pelo menor valor*/

#include <stdio.h>

int main (void){

    int A, B, diferenca;

    printf("Digite o primeiro valor: ");
    scanf("%i", &A);

    printf("Digite o segundo valor: ");
    scanf("%i", &B);

    if(A > B){
        diferenca = A - B;
        printf("A diferença entre os dois números é: %i", diferenca);
    } else if (B > A) {
        diferenca = B - A;
        printf("A diferença entre os dois números é: %i", diferenca);
    } else if (A == B){
        printf("Os valores são iguais!");
    }

    return 0;
}