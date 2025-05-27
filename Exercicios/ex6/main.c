#include <stdio.h>
int main(){
    char sexo;
    float altura, peso;
    int idade;
    printf("Digite seu sexo, altura, peso e idade numeros: ");
    scanf("%c%f%f%d", &sexo,&altura,&peso,&idade);

    printf("\n sexo = %c, altura = %.2f, peso = %.2f e idade = %d", sexo,altura,peso,idade);
    return 0;
}