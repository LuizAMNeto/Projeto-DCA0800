#include <matcalcmod.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#define DIM_MIN 1
#define DIM_MAX 20
#define DELAY 2500

/**
 * @brief matDim "Dimensiona o tamanho da matriz a partir de dois valores inteiros fornecidos pelo usuário."
 * @param r
 * @param c
 */

void matDim(matriz *m){

    int i, j;

    do {

        printf("Defina a quantidade de linhas: ");
        scanf("%d", &m->r);

        printf("Defina a quantidade de colunas: ");
        scanf("%d", &m->c);

        if ((m->r > DIM_MAX || m->c > DIM_MAX) || (m->r < DIM_MIN || m->c < DIM_MIN)){

            system("cls");
            printf("Defina o valor das linhas e colunas no intervalo [1,20]!\n");
            Sleep(DELAY);
            system("cls");

        }

    }while((m->r > DIM_MAX || m->c > DIM_MAX) || (m->r < DIM_MIN || m->c < DIM_MIN));

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

    if (m->r != 0 || m->c != 0){

        srand(time(NULL));

        int i, j;

        for(i=0 ; i < m->r ; i++){
            for(j=0 ; j < m->c ; j++){

                m->mat[i][j] = 10.00*((float)(rand())/RAND_MAX);
            }
        }
        printf("Operacao realizada! Vizualize o resultado no menu.\n");
        Sleep(DELAY);
        system("cls");
    }

    else{

        printf("Primeiro dimensione a matriz!\n");
        Sleep(DELAY);
        system("cls");
    }
}

/**
 * @brief matPrint "Exibe na tela os valores de uma matriz fornecida."
 * @param m
 */

void matPrint (matriz *m){

    if (m->r != 0 || m->c != 0){

        int i, j;

        for(i=0 ; i < m->r ; i++){
            for(j=0 ; j < m->c ; j++){

                printf ("%0.2f ", m->mat[i][j]);

            }
            printf("\n\n");
        }
        system("pause");
        system("cls");
    }

    else{
        printf("Primeiro defina a matriz!\n");
        Sleep(3000);
        system("cls");
    }
}

/**
 * @brief matAtrib "Permite que o usuário atribua valores manualmente as entradas de uma matriz fornecida."
 * @param m
 */

void matAtrib(matriz *m){

    if (m->r != 0 || m->c != 0){

        int i, j;

        for(i=0 ; i < m->r ; i++){
            for(j=0 ; j < m->c ; j++){

                printf("Atribua um valor para a entrada %d x %d:", i+1, j+1);
                scanf("%f", &m->mat[i][j]);
            }
        }
        system("cls");
    }

    else{

        printf("Primeiro dimensione a matriz!\n");
        Sleep(DELAY);
        system("cls");

    }
}

/**
 * @brief matSum "Soma valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matSum(matriz *mA, matriz *mB, matriz *mC){

    if((mA->r == 0 || mA->c == 0)||(mB->r == 0 || mB->c == 0)){
        printf("Primeiro dimensione adequadamente as matrizes A e B!\n");
        Sleep(DELAY);
        system("cls");
    }

    else if(mA->r == mB->r && mA->c == mB->c){

        int i, j;

        mC->r = mA->r;
        mC->c = mA->c;

        for(i=0 ; i < mA->r ; i++){
            for(j=0 ; j < mA->c ; j++){

                mC->mat[i][j] = mA->mat[i][j] + mB->mat[i][j];
            }
        }

        printf("Operacao realizada! Vizualize o resultado no menu.\n");
        Sleep(DELAY);
        system("cls");

    }

    else{

        printf("As matrizes nao podem ser somadas pois suas dimensoes sao diferentes!\n");
        Sleep(DELAY);
        system("cls");

    }
}

/**
 * @brief matSub "Subtrai valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matSub(matriz *mA, matriz *mB, matriz *mC){

    if((mA->r == 0 || mA->c == 0)||(mB->r == 0 || mB->c == 0)){
        printf("Primeiro dimensione adequadamente as matrizes A e B!\n");
        Sleep(DELAY);
        system("cls");
    }

    else if(mA->r == mB->r && mA->c == mB->c){

        int i, j;

        mC->r = mA->r;
        mC->c = mA->c;

        for(i=0 ; i < mA->r ; i++){
            for(j=0 ; j < mA->c ; j++){

                mC->mat[i][j] = mA->mat[i][j] - mB->mat[i][j];
            }
        }

        printf("Operacao realizada! Vizualize o resultado no menu.\n");
        Sleep(DELAY);
        system("cls");

    }

    else{

        printf("As matrizes nao podem ser subtraidas pois suas dimensoes sao diferentes!\n");
        Sleep(DELAY);
        system("cls");

    }
}

/**
 * @brief matProd "Efetua a operação de multiplicação entre duas matrizes, armazenando o produto em uma matriz resultante."
 * @param mA
 * @param mB
 * @param mC
 */

void matProd(matriz *mA, matriz *mB, matriz *mC){

    if((mA->r == 0 || mA->c == 0)||(mB->r == 0 || mB->c == 0)){
        printf("Primeiro dimensione adequadamente as matrizes A e B!\n");
        Sleep(DELAY);
        system("cls");
    }

    else if(mA->c == mB->r){

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
        Sleep(DELAY);
        system("cls");
    }

    else{
        printf("As matrizes nao podem ser multiplicadas pois o numero de colunas da primeira e diferente do numero de linhas da segunda!\n");
        Sleep(DELAY);
        system("cls");
    }
}

/**
 * @brief matRead "Le uma matriz a partir de um arquivo de texto, considerando a quantidade de linhas e colunas."
 * @param m
 * @param sel
 */

void matRead(matriz *m, char sel){

    FILE *file;
    char ver;
    int i,j;

    if (sel == 'a'){

        file = fopen("matriz_a.txt", "r");
    }

    else{

        file = fopen("matriz_b.txt", "r");
    }

    if(file == NULL){

        printf("Arquivo nao encontrado!");
        system("pause");
        return;

    }

    m->c = 0;
    m->r = 0;

    while((ver=fgetc(file))!='\n'){
        if(ver == ' '){
            m->c++;
        }
    }

    rewind(file);

    while((ver=fgetc(file))!= EOF ){
        if(ver == '\n'){
            m->r++;
        }
    }

    m->c++;
    m->r++;

    rewind(file);

    for(i=0 ; i < m->r ; i++){
        for(j=0 ; j < m->c ; j++){

            fscanf(file, "%f", &m->mat[i][j]);
        }
    }

    fclose(file);

    printf("Matriz lida com sucesso!\n");
    Sleep(DELAY);
    system("cls");
}

/**
 * @brief matWrite "Escreve uma matriz em um arquivo de texto(.txt)."
 * @param m
 */

void matWrite(matriz *m){

    if (m->r != 0 || m->c != 0){

        FILE *file;
        int i,j;

        file = fopen("matriz_c.txt", "w");

        for(i=0 ; i < m->r ; i++){
            for(j=0 ; j < m->c ; j++){

                fprintf(file, "%0.2f ", m->mat[i][j]);
            }
            fprintf(file, "\n");
        }

        fclose(file);

        printf("Arquivo criado com sucesso!\n");
        Sleep(DELAY);
        system("cls");

    }

    else{
        printf("Primeiro realize alguma operacao entre as matrizes A e B!\n");
        Sleep(DELAY);
        system("cls");
    }
}
