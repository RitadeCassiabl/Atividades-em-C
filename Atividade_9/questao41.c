/*[#41] Elaborar um algoritmo que leia 8 elementos inteiros em um vetor. Coloque-os em ordem
decrescente e apresente os elementos ordenados;*/

#include <stdio.h>

int main(void){

    int n[8], aux;

    for (int i = 0; i < 8; i++){
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &n[i]);
    }

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7 - i; j++){
            if (n[j] < n[j + 1]){
                aux = n[j];
                n[j] = n[j + 1];
                n[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 8; i++){
        printf("%i ", n[i]);
    }

    return 0;
}