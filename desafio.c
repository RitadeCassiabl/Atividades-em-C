#include <stdio.h>

int main(void){

    int V = 0, contas[3], i = 0, j = 0;
    char nomes[3][10] = {"açougue", "farmácia", "padaria"};

    printf("Digite o valor que o Vô João tem disponínel: ");
    scanf("%i", &V);

    if(V >= 0 && V <= 2000 ){
        for (i = 0; i <= 2; i++){
            printf("Digite o valor da conta -> %s: ", nomes[i]);
            scanf(" %i", &contas[i]);
            if (contas[i] >= 0 && contas[i] <= 1000){
                V =  V - contas[i];
                j++;
            }
            else{
                printf("Valor inválido");
                break;
            }
        }
      printf(" %i", j);
    } else {
        printf("Valor inválido");
    }

    return 0;
}