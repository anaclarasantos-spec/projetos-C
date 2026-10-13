#include<stdio.h>
 void main(){
    int idade;
    float altura;
    char letra_favorita[20];

    printf("Qual a sua idade?\n");
    scanf(" %i", &idade);
    printf("Qual a sua altura?\n");
    scanf(" %f", &altura);
    printf("Qual a sua letra favorita?\n");
    scanf(" %s", letra_favorita);

    printf("A sua idade é: %i\n"\
        "A sua altura é: %f\n"\
        "A sua letra favorita é: %s\n"\
        ,idade, altura, letra_favorita);
}