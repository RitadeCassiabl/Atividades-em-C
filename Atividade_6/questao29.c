/*[#29] Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano. Construir um 
algoritmo que calcule iterativamente e imprima quantos anos serão necessários para que Juca seja maior que Chico.*/

#include <stdio.h>

int main(void){
    float chico = 1.50, juca = 1.10, t = 0;

    do{
        chico = chico + (chico * 2/100);
        juca = juca + (juca * 3/100);
        t++;
    }while(juca <= chico);

    printf("Serão necessários %.0f anos para que Juca ultrapasse a altura de Chico", t);

    return 0;
}