#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int getDano(char magia[]){
    if (strcmp(magia, "fire") == 0)
        {
            return (200);
        }
        else if (strcmp(magia, "water") == 0)
        {
            return (300);
        }
        else if (strcmp(magia, "earth") == 0)
        {
            return (400);
        }
        else if (strcmp(magia, "air") == 0)
        {
            return (100);
        }  
}

int getRaio(char magia[], int nivel){
    if (strcmp(magia, "fire") == 0)
        {
            if(nivel == 1){
                return (20);
            }else if(nivel == 2){
                return (30);
            }else{
                return (50);
            }
        }
        else if (strcmp(magia, "water") == 0)
        {
            if(nivel == 1){
                return (10);
            }else if(nivel == 2){
                return (25);
            }else{
                return (40);
            }
        }
        else if (strcmp(magia, "earth") == 0)
        {
            if(nivel == 1){
                return (25);
            }else if(nivel == 2){
                return (55);
            }else{
                return (70);
            }
        }
        else if (strcmp(magia, "air") == 0)
        {
            if(nivel == 1){
                return (18);
            }else if(nivel == 2){
                return (38);
            }else{
                return (60);
            }
        }  
}


int main()
{

    const float PI = 3.14;
    int t;
    int w, h;
    char magia[10];
    int nivel;
    int coordenadasCirculo[2] = {0, 0};
    int pontosRetangulo[4][2];
    int raio;
    int dano;

    scanf("%d", &t);
    int resultados[t];
    int i;
    for (i = 0; i < t; i++)
    {
        //scanf("%d %d %d %d", &w, &h, &pontosRetangulo[0][0], &pontosRetangulo[0][1]);
        //scanf("%s %d %d %d", magia, &nivel, &coordenadasCirculo[0], &coordenadasCirculo[1]);
        scanf("%s %d", magia, &nivel);
        dano = getDano(magia);
        raio = getRaio(magia, nivel);
        printf("Dano = %d\nRaio = %d\n", dano, raio);
        
    }
    return 0;
}


