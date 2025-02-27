#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

//Utilizando for para mover Torre
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

//Utilizando While para mover Bispo
    while (bispo <= 5)
    {

        printf("Cima, Direita\n");
        bispo++;

    }

//Utilizando Do-While para mover Rainha
    do {

        printf("Esquerda\n");
        rainha++;
        
    } while (rainha <= 8);

    return 0;
}
