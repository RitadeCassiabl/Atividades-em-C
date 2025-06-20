//[#34] Calcule a tabuada de um valor qualquer de 1 até 10 e armazene os resultados em um vetor T. Apresentar os elementos do vetor T.

#include <stdio.h>

int main(void){

    float n, t[10];
    int i=0;

    printf("Digite um valor qualquer: ");
    scanf("%f", &n);

    for(i=1; i<11; i++){
        t[i] = n * i;
    }

    printf("Resultados:\n");

    for(i=1; i<11; i++){
        printf("%.0f\n", t[i]);
    }

    return 0;
}