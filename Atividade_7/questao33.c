/*[#33] Ler dois vetores A e B com 15 elementos quaisquer inteiros. Construir um vetor C, sendo este o resultado da
junção dos vetores A e B. Desta forma, o vetor C deve ter o dobro de elementos em relação aos vetores A e B, ou seja,
o vetor C deve possuir 30 elementos. Apresentar o vetor C.*/

#include <stdio.h>

int main(void){

    int a[15], b[15], c[30], i = 0;

    for (i = 0; i < 15; i++){
        printf("Digite o %iº valor do vetor um: ", i + 1);
        scanf("%i", &a[i]);
    }

    for (i = 0; i < 15; i++){
        printf("Digite o %iº valor do vetor dois: ", i + 1);
        scanf("%i", &b[i]);
    }

    for (i = 0; i < 15; i++){
        c[i] = a[i];
    }

    for (i = 15; i < 30; i++){
        c[i] = b[i - 15];
    }

    printf("Valores:\n");

    for (i = 0; i < 30; i++){
        printf("%i ", c[i]);
    }

    return 0;
}