#include<stdio.h>

void main(){
    int a = 5, b = 5, c = 5, d = 5;
    //pre incremento
        //a = a + 1
    printf("Pre-incremento %d\n", ++a);

    //pos incremento
    printf("Pos-incremento %d\n", b++);
        //a = a + 1
    
    //pre decremento
        //a = a - 1
    printf("Pre-decremento %d\n", --c);

    //pos decremento
    printf("Pos-decremento %d\n", d--);
    // c = c - 1
    printf("Valores finais %i %d %i %d\n", a,b,c,d);
}