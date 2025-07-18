/*[#47] Desenvolver um algoritmo que calcule e apresente o valor de uma potência inteira de um número qualquer elevado 
a um expoente qualquer. Ao informar para o subprograma o número da base e do expoente, deve apresentar o seu resultado 
da potência. Por exemplo, se for usado no programa principal o subprograma POTÊNCIA(2,3), deve ser apresentado o 
valor 8. Resolva a exponenciação com uso de laço. Não use o operador de exponenciação.*/

#include <stdio.h>

int potencia(int base, int expoente){
    int resultado = 1;

    for(int i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    return resultado;
}


int main(void){

    int base, expoente;

    printf("Digite a base: ");
    scanf("%i", &base);

    printf("Digite o expoente: ");
    scanf("%i", &expoente);

    printf("Resultado: %i", potencia(base, expoente));

    return 0;
}