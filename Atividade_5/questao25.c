/*[#25] Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7000000 de 
habitantes e uma taxa de natalidade de 2% ao ano, escrever um algoritmo que seja capaz de calcular e iterativamente 
e no fim imprimir o tempo necessário para que a população do país A ultrapasse a população do país B.*/

#include <stdio.h>

int main (void){

    int pA=5000000 ,pB=7000000 , t=0;

		do{
			pA = pA + (pA*3/100);
			pB = pB + (pB*2/100);
			t++;
		}while(pA<=pB);

		printf("O tempo que a população A, irá precisar para ultrapassar a população B, é de: %i anos.", t);

    return 0;
}