#include <matcalc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM_MAX 20

/**
 * @brief matDim "Dimensiona o tamanho da matriz a partir de dois valores inteiros fornecidos pelo usuário."
 * @param l
 * @param c
 */

void matDim(int *l, int *c){

    printf("Defina a quantidade de linhas: ");
    scanf("%d", l);

    printf("Defina a quantidade de colunas: ");
    scanf("%d", c);

    system("cls");

}

/**
 * @brief matInit "Atribui valores aleatórios entre 0.00 e 10.00 as entradas de qualquer matriz fonecida."
 * @param l
 * @param c
 * @param matriz
 */

void matInit(int l, int c, float matriz[][DIM_MAX]){

    srand(time(NULL));

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            matriz[i][j] = 10.00*((float)(rand())/RAND_MAX);
        }
    }
    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}

/**
 * @brief matPrint "Exibe na tela os valores de uma matriz fornecida."
 * @param l
 * @param c
 * @param matriz
 */

void matPrint (int l, int c, float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            printf ("%0.2f ", matriz[i][j]);

        }
        printf("\n\n");
    }
}

/**
 * @brief matAtrib "Permite que o usuário atribua valores manualmente as entradas de uma matriz fornecida."
 * @param l
 * @param c
 * @param matriz
 */

void matAtrib(int l, int c, float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            printf("Atribua um valor para a entrada %d x %d:", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

/**
 * @brief matSum "Soma valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 * @param l
 * @param c
 */

void matSum(float mA[][DIM_MAX], float mB[][DIM_MAX], float mC[][DIM_MAX], int l, int c){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            mC[i][j] = mA[i][j] + mB[i][j];
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
 * @param l
 * @param c
 */

void matSub(float mA[][DIM_MAX], float mB[][DIM_MAX], float mC[][DIM_MAX], int l, int c){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            mC[i][j] = mA[i][j] - mB[i][j];
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
 * @param l
 * @param c
 * @param n
 */

void matProd(float mA[][DIM_MAX], float mB[][DIM_MAX], float mC[][DIM_MAX], int l, int c, int n){

    int i, j, k;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){
            mC[i][j] = 0;
            for(k=0;k<n;k++){
                mC[i][j] = mC[i][j] + (mA[i][k]*mB[k][j]);

            }
        }
    }
    printf("Operacao realizada! Vizualize o resultado no menu.\n");
    system("pause");
    system("cls");
}
