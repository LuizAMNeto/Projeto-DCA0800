#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <matcalc.h>

#define DIM_MAX 20

int main(void){

    float matA[DIM_MAX][DIM_MAX];
    float matB[DIM_MAX][DIM_MAX];
    float matC[DIM_MAX][DIM_MAX];

    int lA=0, cA=0;
    int lB=0, cB=0;
    int lC, cC;
    int sair = 0;
    int opcao;

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
        printf("(13) Sair\n");

        printf("\nlA=%d cA=%d lB=%d cB=%d\n", lA, cA, lB, cB);

        printf("\nDigite sua opcao: ");

        scanf("%d", &opcao);

        system("cls");

        switch (opcao) {

        case 1:

            matDim(&lA, &cA);

            break;

        case 2:

            matDim(&lB, &cB);

            break;

        case 3:

            matInit(lA, cA, matA);

            break;

        case 4:

            matInit(lB, cB, matB);

            break;

        case 5:

            matAtrib(lA, cA, matA);
            system("cls");

            break;

        case 6:

            matAtrib(lB, cB, matB);
            system("cls");

            break;

        case 7:

            if(lA == lB && cA == cB){

                lC = lA;
                cC = cA;

                matSum(matA,matB,matC,lC,cC);

            }

            else{

                printf("As matrizes nao podem ser somadas pois suas dimensoes sao diferentes!\n");

                system("pause");
                system("cls");

            }

            break;

        case 8:

            if(lA == lB && cA == cB){

                lC = lA;
                cC = cA;

                matSub(matA,matB,matC,lC,cC);

            }

            else{

                printf("As matrizes nao podem ser subtraidas pois suas dimensoes sao diferentes!\n");

                system("pause");
                system("cls");

            }

            break;

        case 9:

            if(cA == lB){

                lC = lA;
                cC = cB;

                matProd(matA,matB,matC,lC,cC,cA);

            }

            else{

                printf("As matrizes nao podem ser multiplicadas pois o numero de colunas da primeira e diferente do numero de linhas da segunda!\n");
                system("pause");
                system("cls");

            }

            break;

        case 10:

            matPrint(lA, cA, matA);
            system("pause");
            system("cls");

            break;

        case 11:

            matPrint(lB, cB, matB);
            system("pause");
            system("cls");

            break;

        case 12:

            matPrint(lC, cC, matC);
            system("pause");
            system("cls");

            break;

        case 13:

            sair = 1;
            break;

        default:

            printf("Opcao invalida! Escolha novamente.\n");
            system("pause");
            system("cls");

        }

    }

    return 0;

}
