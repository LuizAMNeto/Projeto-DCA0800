#include <matcalc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM_MAX 20

void matDim(int *l, int *c){

    printf("Defina a quantidade de linhas: ");
    scanf("%d", l);

    printf("Defina a quantidade de colunas: ");
    scanf("%d", c);

    system("cls");

}

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

void matPrint (int l, int c, float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            printf ("%0.2f ", matriz[i][j]);

        }
        printf("\n\n");
    }
}

void matAtrib(int l, int c, float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            printf("Atribua um valor para a entrada %d x %d:", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

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
