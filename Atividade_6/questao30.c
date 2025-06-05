/*[#30] Os alunos de informática tiveram cinco provas (uma de cada matéria/disciplina): 1, 2, 3, 4 e 5. Considere aprovado o aluno
com nota igual ou superior a 7.0. Criar um algoritmo que leia o Nome dos alunos e as suas respectivas cinco notas. Inicialmente o
algoritmo deve perguntar quantos alunos existem na turma e deve também imprimir:
- Nome dos que foram aprovados em todas as matérias;
- Nome dos alunos aprovados nas matérias 1 e 4;
- A porcentagem dos aprovados na matéria 3.*/

#include <stdio.h>
#include <string.h>

int main(void){

    int numAlunos = 0, i = 0, j = 0, aprovacoes = 0, condi1 = 0, condi2 = 0;

    printf("Quantos alunos existem na sala?: ");
    scanf("%i", &numAlunos);

    char nomes[numAlunos][25], aprovadosTodas[numAlunos][25], aprovados1_4[numAlunos][25];
    float notas[numAlunos][5], porcentagemAprovados3 = 0, aprovados3 = 0;

    for (i = 0; i < numAlunos; i++){

        printf("Digite o nome do aluno: ");
        scanf("%s", nomes[i]);
        aprovacoes = 0;
        for (j = 0; j < 5; j++){
            printf("Digite a nota %i do aluno: ", j + 1);
            scanf(" %f", &notas[i][j]);
            if (notas[i][j] >= 7){
                aprovacoes++;
            }
        }
        printf("\n");

        if (aprovacoes == 5){
            strcpy(aprovadosTodas[condi1], nomes[i]);
            condi1++;
        }

        if (notas[i][0] >= 7 && notas[i][3] >= 7){
            strcpy(aprovados1_4[condi2], nomes[i]);
            condi2++;
        }

        if (notas[i][2] >= 7){
            aprovados3++;
        }
    }

    porcentagemAprovados3 = (numAlunos * aprovados3) / 100;

    printf("Alunos aprovados em todas as matérias: ");
    for (int f = 0; f < condi1; f++){
        printf("\n%s", aprovadosTodas[f]);
    }

    printf("\nAlunos aprovados nas matérias 1 e 4: ");
    for (int f = 0; f < condi2; f++){
        printf("\n%s", aprovados1_4[f]);
    }

    printf("\nPorcentagem de alunos aprovados na matéria 3: %.1f%%", porcentagemAprovados3);

    return 0;
}