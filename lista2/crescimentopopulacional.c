#include <stdio.h>
 
int main() {
    // declarações de váriaveis conforme o problema do URI.
    int t; 
    int PA, PB, sum = 0;
    float G1, G2;

    // pegando o numero de entradas
    scanf("%d", &t);

    if (t >= 1 && t <= 3000){ //verifica se a entrada é válida conforme o URI.
        int resultados[t]; // vetor de resultados para guardar a soma dos anos de cada entrada
        int i;
        for (i = 0; i < t; i++){ //laço para coleta de dados das cidades
            sum = 0;
            scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
            while (PA <= PB){ // fazer loop enquanto a população da cidade A for menor que a B
                PA += (G1 * PA)/100; // Matematica pura
                PB += (G2 * PB)/100;
                sum++; // toda vez que os calculos forem feitos somar 1 ano
                if (sum > 100){
                    resultados[i] = sum; // O problema diz pra parar o loop se passar de 100
                    break; // força o loop a quebrar
                }
            }
            resultados[i] = sum;  //guardando a soma dos anos no vetor de resultados  
        }
        for (i = 0; i < t; i++){ // laço para imprimir os resultados
            if (resultados[i] > 100){ // print deve ser diferente se passar de 100 conforme o problema
                printf("Mais de 1 seculo.\n");
            }else{
                printf("%d anos.\n", resultados[i]);
            }
        }
        
    }
    return 0;
}