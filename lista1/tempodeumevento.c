#include <stdio.h>
 
int main() {
 
    int dia1, hora1, minuto1, segundo1;
    int dia2, hora2, minuto2, segundo2;
    int w,x,y,z;

    printf("Dia ");
    scanf("%d", &dia1);
    scanf("%d : %d : %d", &hora1, &minuto1, &segundo1);

    printf("Dia ");
    scanf("%d", &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

    z = segundo2 - segundo1;
    y = minuto2 - minuto1;
    x = hora2 - hora1;
    w = dia2 - dia1;

    if (z <= 0){
        z = 60 + z;
        if (y > 0){
            y--;
        }
    }

    if (y <= 0){
        y = 60 + y;
        if(y == 60){
            y = 0;
            x++;
        }else{
            x--;
        }
        if (x > 0){
            x--;
        }      
    }

    if (x <= 0){
        x = 24 + x;
        if(x == 24){
            x = 0;
            w++;
        }else{
            w--;
        }
        if (w > 0){
            w--;
        }
        
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", w,x,y,z);
    
    

 
    return 0;
}