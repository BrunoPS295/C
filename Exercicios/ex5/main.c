#include <stdio.h>
int main(){
    
    char sexo = 'l ';
    printf("Digite seu sexo (M/F): ");
    scanf("%c", &sexo);
    printf("\nSexo = %c", sexo);
    
    //mesmo resultado porem de outra forma
    char c = 'l';
    
    printf("\nDigite um char: ");
    //este getc esta pegando o character digitado pelo teclado semelhante ao outro exercicio
    c = getc(stdin);
    printf("c = %c", c);
    //obs: n funciona se a outra parte do código estiver ligado tem que colocar a outra parte em comentario para funcionar
    return 0;
}