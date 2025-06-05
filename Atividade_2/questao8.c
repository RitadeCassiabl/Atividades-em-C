/*[#8] Receba o peso de uma pessoa, calcule e mostre dois novos pesos, se a 
pessoa engordar 15% e se emagrecer 20% sobre o peso digitado.*/

#include <stdio.h>

int main(void){

    float pesoAtual, peso15Mais, peso20Menos;

    printf("Digite o seu peso atual: ");
    scanf("%f", &pesoAtual);

    peso15Mais = pesoAtual + (pesoAtual*0.15);
    peso20Menos = pesoAtual - (pesoAtual*0.20);

    printf("Valor do peso com 15 por cento a mais: %f\nValor do peso com 20 por cento a menos: %f", peso15Mais, peso20Menos);

    return 0;
}