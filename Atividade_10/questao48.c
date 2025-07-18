/*[#48] Elabore um algoritmo contendo um subprograma que leia um número inteiro 
e apresente uma mensagem informando se o número é par ou ímpar.*/

#include <stdio.h>

void parImpar(int n){
    if(n%2 == 0){
        printf("O número é par");
    }else{
        printf("O número é ímpar");
    }
}

int main(void){

    int n;

    printf("Digite um número para saber se ele é ímpar ou par: ");
    scanf("%i", &n);

    parImpar(n);

    return 0;
}
