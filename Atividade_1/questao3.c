/*[#3] Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, 
utilizando a fórmula PRESTACAO <- VALOR +VALOR * (TAXA/100)*TEMPO_MES*/

#include <stdio.h>

int main(void){
    float valor, taxa, tempo, prestacao;

    printf("Digite o valor do bem: ");
    scanf("%f", &valor);

    printf("Digite a taxa de atraso: ");
    scanf("%f", &taxa);

    printf("Digite o tempo de atraso: ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa/100) * tempo);

    printf("O valor da prestação é: %.2f", prestacao);
    
    return 0;
}
