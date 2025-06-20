/*[#36] Elabore um algoritmo para armazenar em vetores, distintos, os números pares (vetor_pares) e ímpares (vetor_impares) contidos 
entre os números 348 e 863, inclusive. Após, mostre o conteúdo desses vetores e a soma dos números pares e ímpares contidos neles.*/

#include <stdio.h>

int main (void){
    
    int pares[258], impares[258], soma_pares = 0, soma_impares = 0, index_pares = 0, index_impares = 0;

    for(int i = 348; i <= 863; i++){
        if(i % 2 == 0){
            pares[index_pares] = i;
            soma_pares += i;
            index_pares++;
        } else {
            impares[index_impares] = i;
            soma_impares += i;
            index_impares++;
        }
    }

    printf("Números pares:\n");
    for(int i = 0; i < index_pares; i++){
        printf("%d ", pares[i]);
    }

    printf("\nSoma dos números pares: %i", soma_pares);

    printf("\nNúmeros ímpares:\n");
    for(int i = 0; i < index_impares; i++){
        printf("%d ", impares[i]);
    }

    printf("\nSoma dos números ímpares: %i", soma_impares);

    return 0;
}