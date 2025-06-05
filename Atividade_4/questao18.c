/*[#18] Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D.
Apresentar apenas os valores que sejam divisíveis por 2 e 3.*/

#include <stdio.h>

int main(void)
{

    int nums[4], cont = 0;

    for (int i = 0; i < 4; i++){

        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &nums[i]);

        if (nums[i] % 2 == 0 && nums[i] % 3 == 0){
            cont++;
        }
    }

    for (int j = 0; j < cont; j++){
        
        printf("%i ", nums[j]);
    }

    return 0;
}