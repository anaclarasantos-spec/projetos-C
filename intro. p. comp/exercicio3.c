#include<stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf(" %i", &numero);
    if (numero % 2 == 0){
        printf("par\n");
    }
    else {
        printf("Impar\n");
    }
    return 0;
}