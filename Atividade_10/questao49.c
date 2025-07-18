/*[#49] Elabore um algoritmo contendo um subprograma que leia três valores 
(A, B e C) e apresente como resultado a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>

float soma(float n1, float n2, float n3){
    return (n1 * n1)+(n2 * n2)+(n3 * n3); 
}

int main(void){
    float a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo  valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    printf("Resultado: %.2f", soma(a, b, c));

    return 0;
}