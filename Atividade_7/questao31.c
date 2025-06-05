//[#31] Efetuar a leitura de 10 nomes de pessoas em um vetor N e apresente-os em seguida.

#include <stdio.h>

int main(void){

    char N[10][100];

    for (int i = 0; i < 10; i++){
        printf("Digite o nome da pessoa %i: ", i + 1);
        scanf("%s", N[i]);
    }

    printf("Nomes Digitados: \n");

    for (int i = 0; i < 10; i++){
        printf("%iº Nome: %s\n", i + 1, N[i]);
    }

    return 0;
}