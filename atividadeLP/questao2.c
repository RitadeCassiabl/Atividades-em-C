/*[#2] Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. 
Antes disso, verifique se as barras estão no lugar certo, e se DD, MM e AAAA são numéricos.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    char data_str[11];
    int dia, mes, ano;
    
    printf("Digite uma data no formato DD/MM/AAAA: ");
    
    if (fgets(data_str, sizeof(data_str), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return 1;
    }

    if (strlen(data_str) != 10) {
        printf("Formato inválido. A data deve ter exatamente 10 caracteres (DD/MM/AAAA).\n");
        return 1;
    }
    
    if (data_str[2] != '/' || data_str[5] != '/') {
        printf("Formato inválido. As barras '/' não estão nas posições corretas.\n");
        return 1;
    }
    
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 2 || i == 5) {
            continue;
        }
        
        if (!isdigit(data_str[i])) {
            printf("Formato inválido. Os caracteres de dia, mês e ano devem ser numéricos.\n");
            return 1;
        }
    }
    
    sscanf(data_str, "%d/%d/%d", &dia, &mes, &ano);

    printf("\n--- Verificação Concluída com Sucesso ---\n");
    printf("String lida: %s\n", data_str);
    printf("Dia (inteiro): %d\n", dia);
    printf("Mês (inteiro): %d\n", mes);
    printf("Ano (inteiro): %d\n", ano);

    return 0;
}