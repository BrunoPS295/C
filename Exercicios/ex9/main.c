#include <stdio.h>
int main() {
    // aula 17

    // o operador short para o tipo int serve para reduzir os bytes de uma memória num intervalo de: -32.768 até 32.767 utilizando %hi ou %hd sendo %hd só para decimais e %hi para decimais, octal e hexadecimal
   
    short int y = 32767;
    printf("Tamanho de y = %d bytes\n", sizeof y);
    printf("Tamanho de uma var int = %d bytes", sizeof(int));

    //aula 18
    /*
        Uma variavel de tipo int suporta números num intervalo de: -2.147.483.648 até 2.147.483.647
        Se o valor maximo for excedido (isto serve tanto para int como para short e outros operadores de memória) o número ficara negativo pois o primeiro número em um código binario dita se o número sera positivo ou negativo
    */
    int x = 2147483647;
    printf("Tamanho de x = %d\n", x);
    x++; //operador para incrementar +1 a variavel
    printf("Tamanho de x = %d\n", x);

    //aula 19
    /*O operador long serve para aumentar a memória de uma variavel int podendo ser atribuida a ela mesma ex: long long int, utilizando ld ou li para long int, lld ou lli para long long int*/
    
    long long int z = 2147483647;
    printf("Tamanho de z = %lld bytes\n", sizeof z);
    printf("Tamanho de z = %lld\n", z);
    z++; //operador para incrementar +1 a variavel
    printf("Tamanho de z = %lld\n", z);
     
    return 0;
}