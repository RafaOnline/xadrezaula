#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int resposta;

    printf("***** Menu interativo *****\n");
    printf("Escolha qual peça movimentar\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &resposta);

    switch (resposta){

        case 1:

        void moverTorre(int casas){
            if (casas > 0){
                printf("Direita\n");
                moverTorre(casas - 1);
            }
        }

        moverTorre(5);
        break;

        case 2:

        void moverBispo (int casas){
            if (casas > 0){
                printf("Cima, direita\n");
                moverBispo(casas - 1);
            }
        }
       
        moverBispo(5);
        break;

        case 3:

        void moverRainha(int casas){
            if (casas > 0){
                printf("Esquerda\n");
                moverRainha(casas - 1);
            }
        }
        
        moverRainha(8);
        break;

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
