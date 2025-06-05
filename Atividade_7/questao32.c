/*[#32] Ler 15 elementos inteiros de um vetor X. Construir um vetor Y de mesmo tipo, observando a seguinte lei de formação: “todo 
elemento do vetor Y deve ser o quadrado do elemento do vetor X correspondente”. Apresentar os elementos dos vetores X e Y.*/

#include <stdio.h>

int main(void){

    int x[15], y[15];

    for(int i=0; i<15; i++){
        printf("Digite o %iº valor: ", i+1);
        scanf("%i", &x[i]);

        y[i] = x[i] * x[i];
    }

    printf("Valores:\n");

    for(int i=0; i<15; i++){
        printf("%i ", y[i]);
    }

    return 0;
}