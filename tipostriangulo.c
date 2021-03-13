#include <stdio.h>
 
int main() {
 
    float a, b, c, aux;
    scanf("%f %f %f", &a, &b, &c);

    //Ordenando

    if (a > b && a > c){
        if (b < c){
            aux = b;
            b = c;
            c = aux;
        }
    }else if (b > a && b > c){
        aux = a;
        a = b;
        b = aux;
        if (b < c){
            aux = b;
            b = c;
            c = aux;
        }
    }else if (c > a && c > b){
        aux = a;
        a = c;
        c = aux;
        if (b < c){
            aux = b;
            b = c;
            c = aux;
        }
    }

    //Fim da ordenação

    //se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    if (a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if ((a*a) == ((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }
    //se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    if (a*a > (b*b + c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    //se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    if (a*a < ((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    //e os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    if (a == b && a == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    //se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
    if ((a == b && b != c) || (a == c && b != a) || b == c && b != a){
        printf("TRIANGULO ISOSCELES\n");
    }
    }

    //printf("Valores ordenados: %f %f %f\n", a,b,c);

    return 0;
}