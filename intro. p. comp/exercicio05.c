#include<stdio.h>

int main(){
    int opcao;
    printf("1-cafe, 2-chá, 3-suco: ");
    scanf(" %i", &opcao);
    switch (opcao){
        case 1: 
        printf("Café Servido\n");
        break;
        case 2: printf("Chá servido\n");
        break;
        case 3: printf("Suco servido\n");
        break;
        default: printf ("Opção inválida\n");
    }

}