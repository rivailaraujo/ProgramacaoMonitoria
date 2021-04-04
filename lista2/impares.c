#include <stdio.h>
 
int main() {
 
    int x; int i = 1;
    scanf("%d", &x);

    while (i < (x + 1))
    {
        if (i % 2 != 0){
            printf("%d\n", i);
        }
        i++;
    }
    
 
    return 0;
}