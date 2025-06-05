/*[#26] Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares
e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.*/

#include <stdio.h>

int main(void){
    int num = 0, numsPares = 0, numsImpares = 0;
    float mediaPares = 0, mediaGeral = 0;

    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%i", &num);

        if (num % 2 == 0 && num != 0){
            numsPares++;
            mediaPares = mediaPares + num;
            mediaGeral = mediaPares;
        }
        if (num % 2 != 0){
            numsImpares++;
            mediaGeral = mediaGeral + num;
        }
    } while (num > 0);

    mediaPares = mediaPares / numsPares;
    mediaGeral = mediaGeral / (numsPares + numsImpares);

    printf("Números Pares: %i\nNúmeros Ímpares: %i\nMédia dos números Pares: %.2f\nMédia Geral: %.2f", numsPares, numsImpares, mediaPares, mediaGeral);

    return 0;
}