#include <matcalc.h>
#include <stdio.h>
#include <stdlib.h>

#define DIM_MAX 10

void matDim(float matriz[][DIM_MAX]){

    int l, c;

    printf("Defina o numero de linhas: ");
    scanf("%d", &l);

    printf("Defina o numero de colunas: ");
    scanf("%d", &c);

    system("cls");

    matInit(l, c, matriz);

}

void matInit(int l, int c, float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < l ; i++){
        for(j=0 ; j < c ; j++){

            matriz[i][j] = 0;

        }
    }
}

/*void matPrint (float matriz[][DIM_MAX]){

    int i, j;

    for(i=0 ; i < DIM_MAX ; i++){
        for(j=0 ; j < DIM_MAX ; j++){

            printf ("%0.2f ", matriz[i][j]);

        }
        printf("\n");
    }
}
*/
