#include <matcalcmod.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM_MAX 20

/**
 * @brief matDim "Dimensiona o tamanho da matriz a partir de dois valores inteiros fornecidos pelo usuário."
 * @param r
 * @param c
 */

void matDim(matriz *m){

    int i, j;

    printf("Defina a quantidade de linhas: ");
    scanf("%d", &m->r);

    printf("Defina a quantidade de colunas: ");
    scanf("%d", &m->c);

    for(i=0 ; i < m->r ; i++){
        for(j=0 ; j < m->c ; j++){

            m->mat[i][j] = 0;
        }
    }

    system("cls");

}

/**
 * @brief matInit "Atribui valores aleatórios entre 0.00 e 10.00 as entradas de qualquer matriz fonecida."
 * @param m
 */

void matInit(matriz *m){

    srand(time(NULL));

    int i, j;

    for(i=0 ; i < m->r ; i++){
        for(j=0 ; j < m->c ; j++){

            m->mat[i][j] = 10.00*((float)(rand())/RAND_MAX);
        }
    }
    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}

/**
 * @brief matPrint "Exibe na tela os valores de uma matriz fornecida."
 * @param m
 */

void matPrint (matriz *m){

    int i, j;

    for(i=0 ; i < m->r ; i++){
        for(j=0 ; j < m->c ; j++){

            printf ("%0.2f ", m->mat[i][j]);

        }
        printf("\n\n");
    }
}

/**
 * @brief matAtrib "Permite que o usuário atribua valores manualmente as entradas de uma matriz fornecida."
 * @param m
 */

void matAtrib(matriz *m){

    int i, j;

    for(i=0 ; i < m->r ; i++){
        for(j=0 ; j < m->c ; j++){

            printf("Atribua um valor para a entrada %d x %d:", i+1, j+1);
            scanf("%f", &m->mat[i][j]);
        }
    }
}

/**
 * @brief matSum "Soma valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matSum(matriz *mA, matriz *mB, matriz *mC){

    int i, j;

    mC->r = mA->r;
    mC->c = mA->c;

    for(i=0 ; i < mA->r ; i++){
        for(j=0 ; j < mA->c ; j++){

            mC->mat[i][j] = mA->mat[i][j] + mB->mat[i][j];
        }
    }

    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}

/**
 * @brief matSub "Subtrai valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matSub(matriz *mA, matriz *mB, matriz *mC){

    int i, j;

    mC->r = mA->r;
    mC->c = mA->c;

    for(i=0 ; i < mA->r ; i++){
        for(j=0 ; j < mA->c ; j++){

            mC->mat[i][j] = mA->mat[i][j] - mB->mat[i][j];
        }
    }
    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}

/**
 * @brief matProd "Efetua a operação de multiplicação entre duas matrizes, armazenando o produto em uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matProd(matriz *mA, matriz *mB, matriz *mC){

    int i, j, k;

    mC->r = mA->r;
    mC->c = mB->c;

    for(i=0 ; i < mA->r ; i++){
        for(j=0 ; j < mB->c ; j++){
            mC->mat[i][j] = 0;
            for(k=0;k<mB->r;k++){
                mC->mat[i][j] = mC->mat[i][j] + (mA->mat[i][k]*mB->mat[k][j]);

            }
        }
    }
    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}
