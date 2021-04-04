#include <stdio.h>

int main() {
 
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int horaJogo = 0, minutoJogo = 0;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    
    if (horaFinal == horaInicial && minutoFinal == minutoInicial){
        printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if ((horaFinal - horaInicial) > 0){
        horaJogo =  (horaFinal - horaInicial);
        if (minutoFinal - minutoInicial >= 0){
            minutoJogo = minutoFinal - minutoInicial;
        }else{
            minutoJogo = 60 + (minutoFinal - minutoInicial);
            horaJogo--;
        }
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaJogo, minutoJogo);


    }else if ((horaFinal - horaInicial) == 0){
        horaJogo =  24 + (horaFinal - horaInicial);
        if (minutoFinal - minutoInicial > 0){
            minutoJogo = minutoFinal - minutoInicial;
            horaJogo = 0;
        }else{
            minutoJogo = 60 + (minutoFinal - minutoInicial);
            horaJogo--;
        }
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaJogo, minutoJogo);
    }
    
    else if((horaFinal - horaInicial) < 0){
        horaJogo = 24 + (horaFinal - horaInicial);
        if (minutoFinal - minutoInicial >= 0){
            minutoJogo = minutoFinal - minutoInicial;
        }else{
            minutoJogo = 60 + (minutoFinal - minutoInicial);
            horaJogo--;
        }
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaJogo, minutoJogo);
    }
    
    return 0;
}

