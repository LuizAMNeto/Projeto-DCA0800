#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <matcalcmod.h>

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

        printf("\nlA=%d cA=%d lB=%d cB=%d\n", matA.r, matA.c, matB.r, matB.c);

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
            system("cls");

            break;

        case 6:

            matAtrib(&matB);
            system("cls");

            break;

        case 7:

            if(matA.r == matB.r && matA.c == matB.c){

                matSum(&matA,&matB,&matC);

            }

            else{

                printf("As matrizes nao podem ser somadas pois suas dimensoes sao diferentes!\n");

                system("pause");
                system("cls");

            }

            break;

        case 8:

            if(matA.r == matB.r && matA.c == matB.c){

                matSub(&matA,&matB,&matC);

            }

            else{

                printf("As matrizes nao podem ser subtraidas pois suas dimensoes sao diferentes!\n");

                system("pause");
                system("cls");

            }

            break;

        case 9:

            if(matA.c == matB.r){

                matProd(&matA,&matB,&matC);

            }

            else{

                printf("As matrizes nao podem ser multiplicadas pois o numero de colunas da primeira e diferente do numero de linhas da segunda!\n");
                system("pause");
                system("cls");

            }

            break;

        case 10:

            if (matA.r != 0 || matA.c != 0){

                matPrint(&matA);
                system("pause");
                system("cls");

            }

            else{

                printf("Primeiro defina as dimensoes da matriz A!\n");
                system("pause");
                system("cls");

            }

            break;

        case 11:

            if (matB.r != 0 || matB.c != 0){

                matPrint(&matB);
                system("pause");
                system("cls");

            }

            else{

                printf("Primeiro defina as dimensoes da matriz B!\n");
                system("pause");
                system("cls");

            }

            break;

        case 12:

            if (matC.r != 0 || matC.c != 0){

                matPrint(&matC);
                system("pause");
                system("cls");

            }

            else{

                printf("Primeiro realize alguma operacao entre as matrizes A e B!\n");
                system("pause");
                system("cls");

            }

            break;

        case 13:

            matRead(&matA, 'a');
            break;

        case 14:

            matRead(&matB, 'b');
            break;

        case 15:

            //matWrite(matC)
            break;

        case 16:

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
