/*[#46] Elaborar um algoritmo contendo um subprograma (função ou procedimento) que calcule o valor de uma prestação em atraso. 
Para tanto, utilize a fórmula PREST = VALOR + (VALOR*(TAXA/100)*TEMPO). Apresentar o valor da prestação;*/

#include <stdio.h>

float prestacao(float valor, float taxa, float tempo){
    return valor + (valor *(taxa/100) * tempo);
}

int main(void){

    float valor, taxa, tempo;

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o tempo em meses: ");
    scanf("%f", &tempo);

    printf("\nValor da prestação R$%2.f", prestacao(valor, taxa, tempo));

    return 0;
}