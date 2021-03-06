#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <matcalc.h>
#include <windows.h>

#define DIM_MAX 20
#define DELAY 2500

int main(void){

    typedef struct{

        float mat [DIM_MAX][DIM_MAX];
        int r;
        int c;
        char d;

    }matriz;

    matriz matA, matB, matC;
    int sair = 0;
    int opcao;

    matA.r = 0; matA.c = 0; matB.r=0; matB.c = 0; matC.r=0; matC.c = 0;
    matA.d = 'A'; matB.d = 'B'; matC.d = 'C';

    while(sair == 0){

        menu();

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

            matRead(&matA);
            break;

        case 14:

            matRead(&matB);
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
            Sleep(DELAY);
            system("cls");
        }
    }
    return 0;
}
