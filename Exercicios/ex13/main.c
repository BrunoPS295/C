#include <stdio.h>
int main() {
    //aula 27
    int a = 0;
    //O valor de incremento dita se o valor sera incrementado antes ou dps
    printf("valor = %d\n", a++);
    printf("valor = %d\n", a);
    printf("valor = %d\n", ++a);
    // += é igual a ++ e =a+1
    a +=1;
    printf("valor = %d\n", a);

    //aula 28
    int b = 3;
    //O valor de incremento dita se o valor sera incrementado antes ou dps
    printf("valor = %d\n", b--);
    printf("valor = %d\n", b);
    printf("valor = %d\n", --b);
    // -= é igual a -- e =b-1
    b -=1;
    printf("valor = %d\n", b);
    


    return 0;    
}