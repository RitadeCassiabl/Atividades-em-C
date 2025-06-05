/*[#20] Permitir ao usuário escolher entre a conversão de medida de centímetros em polegadas, de polegadas em centímetros,
de quilômetros em milhas e de milhas em quilômetros. As fórmulas para conversão são as seguintes:
a) Centímetros/polegadas: valor em centímetros x 0.3937
b) Polegadas/centímetros: valor em polegadas x 2.54
c) Quilômetros/milhas: valor em quilômetros x 0.6214
d) Milhas/quilômetros: valor em milhas x 1.6093*/

int main(void)
{

    char op;
    float valor, valorConvertido;

    printf("\nEscolha uma das opções de conversão abaixo: \n");
    printf("a) centímetros -> polegadas\n");
    printf("b) polegadas -> centímetros\n");
    printf("c) quilômetros -> milhas\n");
    printf("d) milhas -> quilômetros\n");
    scanf("%c", &op);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (op)
    {
    case 'a':
        valorConvertido = valor * 0.3937;

        break;
    case 'b':
        valorConvertido = valor * 2.54;

        break;
    case 'c':
        valorConvertido = valor * 0.6214;

        break;
    case 'd':
        valorConvertido = valor * 1.6093;
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    printf("\nValor convertido: %f", valorConvertido);
    
    return 0;
}