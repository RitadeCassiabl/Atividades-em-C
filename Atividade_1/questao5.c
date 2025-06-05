/*.[#5] Converter uma temperatura dada em Celsius para Farenheit e Kelvin.*/

#include <stdio.h>

int main(void){
    float celsius, farenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    farenheit = celsius * 1.8 + 32;

    kelvin = celsius + 273;

    printf("A temperatura em Farenheit é: %.1fF", farenheit);
    printf("\nA temperatura em Kelvin é: %.1fK", kelvin);

    return 0;
}