/*[#40] Ler um vetor G de 6 elementos contendo o gabarito da Mega Sena. A seguir, ler um vetor A de 
10 elementos contendo uma aposta. Escrever quantos pontos fez o apostador.*/

#include <stdio.h>

int main(void){
    int gabarito[6], aposta[10], pontos = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o %iº número do gabarito: ", i+1);
        scanf("%i", &gabarito[i]);
    }

    printf("\n");

    for(int i = 0; i < 10 ; i++){
        printf("Digite o %iº número da aposta: ", i+1);
        scanf("%i", &aposta[i]);
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 10; j++){
            if(gabarito[i] == aposta[j]){
                pontos++;
            }
        }
    }

    printf("\nO apostador fez %i pontos", pontos);

    return 0;
}