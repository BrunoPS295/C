#include <stdio.h>
int main() {
    //aula 20
    float x = 32767;
    printf("Tamanho de x = %d bytes\n", sizeof x);
    printf("Tamanho de uma var float = %d bytes\n", sizeof(float));

    //aula 21
    double y = 3.1415926535897932384626433832795028841971693993751058209749445923078164062;
    printf("Tamanho de uma var double = %d bytes\n", sizeof(double));
    printf("Valor de y = %.10lf\n", y);

    //aula 22
    long double z = 3.1415926535897932384626433832795028841971693993751058209749445923078164062;
    printf("Tamanho de uma var long double = %d bytes\n", sizeof(long double));
    //forma para contornar a limitação do windows
    printf("Valor de y = %.10Lf\n", z);
    __mingw_printf("Valor de y = %.10Lf\n", z);

    return 0;    
}