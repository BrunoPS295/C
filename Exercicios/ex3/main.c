#include <stdio.h>
int main(){
    //criei uma variavel para um valor tipo inteiro
    int x;
    //atribui x = 20
    x = 20;
    //atribui a x um valor que o usuario escolheu alterando o 20
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("x = %d", x);
    //varias variaveis
    
    int y, z;
    printf("\nDigite um numero: ");
    scanf("%d", &y);
    printf("\nDigite outro numero: ");
    scanf("%d", &z);
    printf(
            "\nPrimeiro valor: %d\nSegundo valor: %d\nSoma dos valores: ", y, z
        );

    return 0;
}