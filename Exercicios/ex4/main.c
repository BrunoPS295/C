#include <stdio.h>
int main(){
    float x = 3.12345;
    // o %f serve para exibir numeros float(reais) e ponto que dentro dele esta inserido serve para determinar quantos numeros serão exibidos após o ponto
    printf("x = %.2f", x);
    printf("\ndigite um numero real: ");
    scanf("%f", &x);
    printf("\nx = %f", x);

    return 0;
}