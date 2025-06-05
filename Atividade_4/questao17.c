//[#17] Fazer a leitura de um valor numérico inteiro qualquer e apresentá-lo caso não seja maior que 3.

#include <stdio.h>

int main (void){

    int num;

    printf("Digite o valor: ");
    scanf("%i", &num);

    if(!(num > 3)){
        printf("%i" ,num);
    }

    return 0;
}