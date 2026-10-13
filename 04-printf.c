#include<stdio.h>

void main(){
    //caracteres
    char nome_da_variavel;
    nome_da_variavel = 'a'; //-127 127
    unsigned char nome_da_variavel10;  //0 255
    printf("imprimindo o variavel do tipo char: %c\n,", nome_da_variavel);

    //numeros inteiros
    short int nome_da_variavel1;
    int nome_da_variavel2;
    long int nome_da_variavel4;
    printf("short int: %i\n", nome_da_variavel1);
    printf("int: %i\n", nome_da_variavel2);
    printf("long int: %li\n", nome_da_variavel4);

    unsigned short int variavel1;
    unsigned int variavel2;
    unsigned long int variavel3;
    printf("u short int: %u\n", variavel1);
    printf("u int: %u\n", variavel2);
    printf("u long int: %lu\n", variavel3);

    //numeros reais
    float nome_da_variavel3 = 3.9f;
    double nome_da_variavel5 = 3.4;
    long double nome_da_variavel6 = 3.9e-23L;
    printf("float: %f\n", nome_da_variavel3);
    printf("double: %f\n", nome_da_variavel5);
    printf("long double: %Le\n", nome_da_variavel6);
    //demonstração de uso de uma string
    char nome [] = "Ana";
    printf("impreçãp de string: %s\n", nome);
    
    //constante nomeada
    const int MAX = 100;
    printf("constante nomeada: %i\n", MAX);

    //impressao de endereços de memoria
    int a;
    printf("endereco de memoria da variavel a: %p\n",&a);
}