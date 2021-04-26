#include <stdio.h>
int cont;
int fibonacci(int n){
    cont++;
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int i, n, num;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
            scanf("%d",&num);
            cont = 0;
            printf("fib(%d) = %d calls = %d\n",num,cont-1,fibonacci(num));
    }
    return 0;
}