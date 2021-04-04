#include <stdio.h>
 
int main() {
 
    int n; int i;
    int tabuada[10] = {1,2,3,4,5,6,7,8,9,10};
    scanf("%d", &n);
    int tamanho = sizeof(tabuada)/sizeof(int);

    
    for (i = 0; i < tamanho; i++){
        printf("%d x %d = %d\n", tabuada[i], n, tabuada[i] * n);
    }

    return 0;
}