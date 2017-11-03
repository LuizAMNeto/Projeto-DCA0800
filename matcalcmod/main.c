#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <matcalcmod.h>
#include <windows.h>

#define DIM_MAX 20

int main(void){

    typedef struct{

        float mat [DIM_MAX][DIM_MAX];
        int r;
        int c;

    }matriz;

    matriz matA, matB, matC;
    int sair = 0;
    int opcao;

    matA.r = 0; matA.c = 0; matB.r=0; matB.c = 0; matC.r=0; matC.c = 0;

    while(sair == 0){

        printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n\n");
        printf("(1) Definir o tamanho da matriz A\n");
        printf("(2) Definir o tamanho da matriz B\n");
        printf("(3) Preencher a matriz A com valores aleatorios\n");
        printf("(4) Preencher a matriz B com valores aleatorios\n");
        printf("(5) Atribuir valor para um elemento da matriz A\n");
        printf("(6) Atribuir valor para um elemento da matriz B\n");
        printf("(7) Calcular A+B\n");
        printf("(8) Calcular A-B\n");
        printf("(9) Calcular A*B\n");
        printf("(10) Imprimir matriz A\n");
        printf("(11) Imprimir matriz B\n");
        printf("(12) Imprimir matriz C\n");
        printf("(13) Ler a matriz A de um arquivo\n");
        printf("(14) Ler a matriz B de um arquivo\n");
        printf("(15) Escrever a matriz C em um arquivo\n");
        printf("(16) Sair\n");

        printf("\nlA=%d cA=%d lB=%d cB=%d lC=%d cC=%d\n", matA.r, matA.c, matB.r, matB.c, matC.r, matC.c);

        printf("\nDigite sua opcao: ");

        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {

        case 1:

            matDim(&matA);
            break;

        case 2:

            matDim(&matB);
            break;

        case 3:

            matInit(&matA);
            break;

        case 4:

            matInit(&matB);
            break;

        case 5:

            matAtrib(&matA);
            break;

        case 6:

            matAtrib(&matB);
            break;

        case 7:

            matSum(&matA,&matB,&matC);
            break;

        case 8:

            matSub(&matA,&matB,&matC);
            break;

        case 9:

            matProd(&matA,&matB,&matC);
            break;

        case 10:

            matPrint(&matA);
            break;

        case 11:

            matPrint(&matB);
            break;

        case 12:

            matPrint(&matC);
            break;

        case 13:

            matRead(&matA, 'a');
            break;

        case 14:

            matRead(&matB, 'b');
            break;

        case 15:

            matWrite(&matC);

            break;

        case 16:

            sair = 1;
            printf("OBRIGADO POR UTILIZAR O MATCALC!\n\n");
            break;

        default:

            printf("Opcao invalida! Escolha novamente.\n");
            Sleep(3000);
            system("cls");
        }
    }
    return 0;
}
