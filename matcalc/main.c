#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <matcalc.h>

#define DIM_MAX 10

int main(void){

    float matA[DIM_MAX][DIM_MAX];
    float matB[DIM_MAX][DIM_MAX];

    int i,j, l=5,c=5;

    int opcao;

    printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n\n");
    printf("(1) Definir o tamanho da matriz A\n");
    printf("(2) Definir o tamanho da matriz B\n");
    printf("(3) Preencher a matriz A com valores aleatórios\n");
    printf("(4) Preencher a matriz B com valores aleatórios\n");
    printf("(5) Atribuir valor para um elemento da matriz A\n");
    printf("(6) Atribuir valor para um elemento da matriz B\n");
    printf("(7) Calcular A+B\n");
    printf("(8) Calcular A-B\n");
    printf("(9) Calcular A*B\n");
    printf("(10) Imprimir matriz A\n");
    printf("(11) Imprimir matriz B\n");
    printf("(12) Imprimir matriz C\n");
    printf("(13) Sair\n");

    scanf("%d", &opcao);

    system("cls");

    switch (opcao) {

    case 1:

        matDim(matA);

        for(i=0 ; i < l ; i++){
            for(j=0 ; j < c ; j++){

                printf ("%0.2f ", matA[i][j]);

            }
            printf("\n");
        }

        main();

    case 2:

        matDim(matB);

        main();

    case 3:

                break;

    case 4:

        break;

    case 5:

        break;

    case 6:

        break;

    case 7:

        break;

    case 8:

        break;

    case 9:

        break;

    case 10:

        //matPrint(matA);

        break;

    case 11:

        //matPrint(matB);

        break;

    case 12:

        break;

    case 13:

        exit(1);

    default:

        printf("Opcao invalida! Escolha novamente\n");


    }

    return 0;

}
