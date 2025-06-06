#include <stdio.h>
int main() {
    char a, b;
    printf("Declare a var: ");
    scanf("%c", &a);

    scanf("%c");
    //buffer

    //Nesta situação e obrigatorio que na hora que for declarar a segunda var de char de um espaço entre as variaveis e declare um buffer que sera usado para descartar ou simplesmente de um espaço antes do %c para o descarte de espços o enter breviamente pois se não ele contara que b = enter

    printf("Declare a var: ");
    scanf(" %c", &b);

    printf("\na = %c\n", "b = %c\n", a , b);
    return 0;
}