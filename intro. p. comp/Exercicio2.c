#include<stdio.h>

int main(){
    float base, altura, area;
    printf("Qual a base?\n ");
    scanf(" %f", &base);
    printf("Qual a altura?\n ");
    scanf(" %f", &altura);
    area = (base * altura) / 2;
    printf("Área do triangulo: %.2f\n", area);
    return 0;
}
