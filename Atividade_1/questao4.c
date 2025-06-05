/*[#4] Apresente o valor da conversão em dólar (U$) de um valor lido em real (R$). O algoritmo deve solicitar
o valor da cotação do dólar e também a quantidade de reais disponível com o usuário*/

#include <stdio.h>

int main(void){
    float cotacaoDolar, valorReal, valorDolar;

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / cotacaoDolar;

    printf("O valor em dólar é: %.2f", valorDolar);

    return 0;
}