/*[#28] Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas.  Calcule e imprima a idade média,
o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo masculino.
O algoritmo termina quando se digita um número negativo para a idade*/

#include <stdio.h>

int main(void)
{

    int idade = 0, sexo = 0, sexoFemIdade30_45 = 0, totalSexMasc = 0, pessoas = 0;
    float idadeMedia = 0;

    do{
        printf("Digite as informações sobre idade e sexo de uma pessoa");
        printf("\nidade: ");
        scanf("%i", &idade);
        if(idade < 0){
            break; 
        } else{
            printf("sexo (0-masculino, 1-feminino): ");
            scanf("%i", &sexo);
            pessoas++;
    
            idadeMedia = idadeMedia + idade;
            
            if (sexo == 1 && idade >= 30 && idade <= 45){
                sexoFemIdade30_45++;
            }
            
            if (sexo == 0){
                totalSexMasc++;
            }
        }
        
    } while (idade > 0);
    
    idadeMedia = idadeMedia / pessoas;
    
    printf("Idade Média: %.2f\nPessoas do sexo feminino com idade entre 30-45: %i\nTotal de pessoas do sexo masculino: %i", idadeMedia, sexoFemIdade30_45, totalSexMasc);

    return 0;
}