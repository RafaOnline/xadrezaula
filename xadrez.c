#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int resposta;

    printf("***** Menu iterativo *****\n");
    printf("Escolha qual peça movimentar\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &resposta);

    switch (resposta){
        case 1:
        for (torre; torre <= 5; torre++)
        {
            printf("Direita\n");
        }
        break;

        case 2:
        while (bispo <= 5)
        {

        printf("Cima, Direita\n");
        bispo++;

        }
        break;

        case 3:
        do {

            printf("Esquerda\n");
            rainha++;
            
        } while (rainha <= 8);

        case 4:

        int movimentoCavalo;

        for (movimentoCavalo = 1; movimentoCavalo <= 1; movimentoCavalo++ ){

            int i = 1;

            while (i <=2){
                printf("Cima\n");
                i++;
            }

            printf("Direita\n");
        }
        break;

        default:
        printf("Escolha incorreta\n");
        break;

    }
    

    return 0;
}
