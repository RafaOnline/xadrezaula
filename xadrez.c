#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
/*
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    while (bispo <= 5)
    {

        printf("Cima, Direita\n");
        bispo++;

    }
*/
    do {

        printf("Esquerda\n");
        rainha++;
        
    } while (rainha <= 8);

    return 0;
}