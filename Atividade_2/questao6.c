//[#6] Receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main(void)
{
    float salario, percentual, aumento, salarioComAumento;

    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    salarioComAumento = salario + aumento;

    printf("O valor do aumento é de: R$%.2f e o valor do novo salário é de: R$%.2f", aumento, salarioComAumento);
    return 0;
}