/*[#19] Leia uma nota numérica (número real) codificada entre 0  e 10. Em seguida converta essa nota para a correspondente em
conceito, segundo dados abaixo.
A = acima ou igual a 9.0
B = inferior a 9.0 e superior ou igual a 7.0
C = inferior a 7.0 e superior ou igual a 5.0
D = inferior a 5.0 e superior ou igual a 2.5
E = inferior a 2.5*/

#include <stdio.h>

int main(void)
{

    float nota = 0;
    char conceito = ' ';

    printf("Digite a  nota: ");
    scanf("%i", &nota);

    if (nota >= 9 && nota <= 10)
    {
        conceito = 'A';
    }
    else if (nota < 9 && nota >= 7)
    {
        conceito = 'B';
    }
    else if (nota < 7 && nota >= 5)
    {
        conceito = 'C';
    }
    else if (nota < 5 && nota >= 2.5)
    {
        conceito = 'D';
    }
    else if (nota < 2.5)
    {
        conceito = 'E';
    }
    else
    {
        printf("Nota inválida!");
    }

    printf("Conceito: %c \n", conceito);

    return 0;
}