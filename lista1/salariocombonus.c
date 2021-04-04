#include <stdio.h>
 
int main() {
 
    char nome;
    double salariototal, salariofixo, salariovendas;
    scanf("%s %lf %lf", &nome, &salariofixo, &salariovendas);
    salariototal = salariofixo + (salariovendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salariototal);
    return 0;
}