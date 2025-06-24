#include <stdio.h>
int main() {
    //aula 28
/*
    operador unsigned
    pode ser utilizado junto ao short ou long
    trocar o %d por %u
    limite para o tipo int: 2.147.483.647
    ele retira os valores negativos e aumenta a quantidade limite de números positivos para int
    limite para o tipo unsigned int: 4.294.967.295
*/
    int a =  2147483647;
    printf("a = %d\n", ++a);
    printf("size a = %d\n", sizeof(a));

    unsigned int b =  2147483647;
    printf("b = %u\n", ++b);
    printf("size b = %d\n", sizeof(b));

    return 0;    
}