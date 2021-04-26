#include <stdio.h>
 
int mdc(int f1, int f2) {

    int resto;

    do {
        resto = f1 % f2;

        f1 = f2;
        f2 = resto;

    } while (resto != 0);

    return f1;
}


int main() {
    
    int n,i, f1,f2;
    scanf("%d", &n);
    int resultados[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &f1, &f2);
        resultados[i] = mdc(f1,f2);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", resultados[i]);
    }
    
    
 
    return 0;
}

