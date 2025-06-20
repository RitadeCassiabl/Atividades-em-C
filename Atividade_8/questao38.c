/*[#38] Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.*/

#include <stdio.h>

int main(void){

    int c[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %i do vetor: ", i+1);
        scanf("%i", &c[i]);

        if(c[i] < 0){
            c[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%i ", c[i]);
    }

    return 0;
}