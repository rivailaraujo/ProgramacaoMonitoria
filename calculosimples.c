#include <stdio.h>
 
int main() {
    int pc1, numpc1;
    int pc2, numpc2;
    float valorpc1, valorpc2, calculo;

    scanf("%d %d %f", &pc1, &numpc1, &valorpc1);
    scanf("%d %d %f", &pc2, &numpc2, &valorpc2);

    calculo = (numpc1 * valorpc1) + (numpc2 * valorpc2);

    printf("VALOR A PAGAR: R$ %.2f\n", calculo);

    
    return 0;
}