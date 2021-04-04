#include <stdio.h>
 
int main() {
 
    int n; 
    int totalR = 0,totalS = 0,totalC = 0;
    int total;

    scanf("%d", &n);

    int quantidade[n];
    char tipo[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &quantidade[i], &tipo[i]);
        if(tipo[i] == 'R'){
            totalR += quantidade[i];
        }else if(tipo[i] == 'S'){
            totalS += quantidade[i];
        }else if (tipo[i] == 'C'){
            totalC += quantidade[i];
        }
    }
    total = totalR + totalC + totalS;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);

    printf("Percentual de coelhos: %.2f %%\n", 100 * (float)totalC/total);
    printf("Percentual de ratos: %.2f %%\n", 100 *(float)totalR/total);
    printf("Percentual de sapos: %.2f %%\n", 100 * (float)totalS/total);

    return 0;
}