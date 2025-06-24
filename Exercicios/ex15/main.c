#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    //aula 28
/*
    tabela ascii e acentuação
    1 byte (8 bits) -> -128 até 127
    unsigned 1 byte -> 0 até 255

    9 é o caractere de tabulação \t.
    10 é o caractere de nova linha \n (enter).
    65 é a letra A maiúscula.
    66 é a letra B maiúscula
    90 é a letra Z maiúscula.

    1ᵃ = setlocale (LC_ALL, NULL);// padrão da linguagem C
    2ᵃ = setlocale (LC_ALL, "");// padrão do sistema operacional
    3ᵃ = setlocale (LC_ALL, "Portuguese") ;// português brasileiro
*/ 
    printf("Coração\n");
    setlocale(LC_ALL, "Portuguese");
    printf("Coração\n");

    return 0;    
}