/*[#22] Ler valores positivos inteiros até que um valor negativo seja informado. 
Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.*/

#include <stdio.h>

int main(void){

    int num, maior = 0, menor = 100000000;

    do{
        printf("\nDigite um valor inteiro qualquer: ");
        scanf("%i", &num);
        
        if(num < menor){
            menor = num;
        }
        
        if(num > maior){
            maior = num;
        }
        
    } while (num >= 0);
    
    printf("Maior valor: %i\nMenor valor: %i", maior, menor);

    return 0;
}