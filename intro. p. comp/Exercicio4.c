#include<stdio.h>

int main(){
    float nota1, nota2, media;
    printf("Qual a primeira nota? ");
    scanf(" %f", &nota1);
    printf("Qual a segunda nota? ");
    scanf(" %f", &nota2);
    media = (nota1 + nota2) / 2;
    if (media >= 7){
        printf("Aprovado\n");}
    else if (media >= 5) {
        printf("Recuperação\n");
    }
    else {
        printf("Reprovado\n");
    }
}