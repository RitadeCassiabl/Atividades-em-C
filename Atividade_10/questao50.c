/*[#50] Elabore um algoritmo contendo um subprograma que apresente
 como resultado um número positivo, mesmo que a entrada tenha sido feita com um valor negativo.*/

#include <stdio.h>

int positivo(int n){
    if(n < 0){
        return -n;
    }
    return n;
}

int main(void){
    int n;

    printf("Digite um número: ");
    scanf("%i", &n);

    printf("Resultado: %i", positivo(n));
}