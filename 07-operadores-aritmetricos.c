#include<stdio.h>

void main(){
    //operadores aritmetricos
    int a = 1, b = -2, c = 3;
    //positivos
    printf("positivo 1 é:%i\n", +a);
    printf("positivo (-2) é:%i\n", +b);
    //negativos
    printf("negativo (1) é:%i\n", -a);
    printf("negativo (-2) é:%i\n", -b);
    //adição
    printf ("adição de 1 + (-2) é:%i\n", a + b);
    //subtração
    printf("subtração de 1 - (-2) é:%i\n", a - b);
    //multiplicação
    printf("multiplicação de 2*5 =%i\n", 2*5);
    //divisão
    printf("divisão de -2/1 =%i\n", b / a);
    //modulo
    printf("modulo de 3%%2 =%i\n", c%2);
}