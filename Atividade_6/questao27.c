/*[#27] Fazer um algoritmo para ler uma quantidade N de alunos. Ler a nota de cada um dos N alunos e calcular
a média aritmética das notas. Contar quantos alunos estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0,
imprimir mensagem: “Não há nenhum aluno com nota acima de 5.”*/

#include <stdio.h>

int main(void){

    int alunos = 0, nota = 0, alunosNotaMaior5 = 0, resp = 0;
    float mediaNotas = 0;

    do{
        printf("Digite a nota do aluno: ");
        scanf("%i", &nota);
        alunos++;

        mediaNotas = mediaNotas + nota;

        if (nota > 5){
            alunosNotaMaior5++;
        }

        printf("Deseja continuar? (1 - Sim ; 0 - Não) ");
        scanf("%i", &resp);

    } while (resp == 1);

    mediaNotas = mediaNotas / alunos;
    
    printf("Média das notas: %.2f", mediaNotas);
    if (alunosNotaMaior5 == 0){
        printf("\nNão há nenhum aluno com nota acima de 5.");
    }
    else{
        printf("\nNúmero de alunos com nota maior que 5: %i", alunosNotaMaior5);
    }

    return 0;
}