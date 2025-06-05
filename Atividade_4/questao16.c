/*[#16] Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado
da multiplicação somente se o resultado for maior que 30 e menor que 100.*/

#include <stdio.h>

int main(void){
    
    int num, result;

    printf("Digite o valor: ");
    scanf("%i", &num);

    result = num * 2;

    if (result > 30 && result < 100)
    {
        printf("Resultado: %i", result);
    }

    return 0;
}