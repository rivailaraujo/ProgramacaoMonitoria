#include <stdio.h>
 
int main() {
 
    int numeroFuncionario, qtdHoras;
    float valorHora, salario;

    scanf("%d %d %f", &numeroFuncionario, &qtdHoras, &valorHora);

    salario = qtdHoras * valorHora;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numeroFuncionario, salario);

    return 0;
}