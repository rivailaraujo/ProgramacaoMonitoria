#include <stdio.h>

int main(){
    // declaração de variaveis
    // - i para controle do for
    // - sum para somar a sequencia entre os numeros
    // m e n são os valores de entrada
    int i = 0, sum = 0;
    int m, n;

    scanf("%d %d", &m, &n);
    if (m > 0 && n > 0){ // verifica se os valores de m e n são válidos
        do{
            //laço de repetição para scanear a entrada enquanto m e n forem válidos
            if (m >= n){ 
                for (i = n; i < m + 1; i++){ //laço for caso m seja maior que n
                sum += i; // somando os valores da sequencia
                printf("%d ", i); // i vai ser sempre o menor valor e vai ser acrescentado de 1 em 1
                }
                printf("Sum=%d\n", sum);
                sum = 0; //resetar o valor de sum
            }
            else if (m <= n){ //laço for caso m seja maior que n
                for (i = m; i < n + 1; i++){
                sum += i; // somando os valores da sequencia
                printf("%d ", i); // i vai ser sempre o maior valor e vai ser acrescentado de 1 em 1
                }
                printf("Sum=%d\n", sum);
                sum = 0; //resetar o valor de sum
            }
            scanf("%d %d", &m, &n); // ler a proxima entrada
        }while (m > 0 && n > 0);
    }
    return 0;
}