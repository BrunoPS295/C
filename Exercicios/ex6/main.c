#include <stdio.h>
int main(){
    char sexo;
    float altura, peso;
    int idade;
    printf("Digite seu sexo, altura, peso e idade numeros: ");
    scanf(" %c%f%f%d", &sexo,&altura,&peso,&idade);

    //obs: quando for perguntar um caracter ao usuario, no momento que o resultado for preencher  a variavel char se certifique que  ha um espaco antes do %c para desconsiderar espaçoes e limpar o buffer do teclado a não ser que de fato haja espaços no resultado da variavel

    printf("\n sexo = %c, altura = %.2f, peso = %.2f e idade = %d", sexo,altura,peso,idade);
    return 0;
}