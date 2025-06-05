//[#21] Faça um algoritmo, para apresentar o total da soma obtida dos cem primeiros números inteiros positivos

#include <stdio.h>

int main(void){

    int soma = 0;

    for(int i= 0; i <=100; i++){
        soma = soma + i;
    }

    printf("Resultado: %i", soma);

    return 0;
}