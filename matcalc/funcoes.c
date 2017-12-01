#include <matcalc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#define DIM_MIN 1
#define DIM_MAX 20
#define DELAY 2500
#define LIM 100

void menu(void){

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
    printf("\nDigite sua opcao: ");

}

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

void matInit(matriz *m){

    if (m->r != 0 || m->c != 0){

        srand(time(NULL));

        int i, j;
        float a,b;

        printf("Defina o intervalo de valores aleatorios ]a,b[ separado por virgula: ");
        scanf("%f", &a);
        getchar();
        scanf("%f", &b);
        system("cls");

        for(i=0 ; i < m->r ; i++){
            for(j=0 ; j < m->c ; j++){

                m->mat[i][j] = a+rand()*(b-a)/RAND_MAX;
            }
        }
        printf("Operacao realizada! Vizualize o resultado no menu.\n");
        Sleep(DELAY);
        system("cls");
    }

    else{

        printf("Primeiro dimensione a matriz %c!\n", m->d);
        Sleep(DELAY);
        system("cls");
    }
}

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
        printf("Primeiro defina a matriz %c!\n", m->d);
        Sleep(3000);
        system("cls");
    }
}

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

        printf("Primeiro dimensione a matriz %c!\n", m->d);
        Sleep(DELAY);
        system("cls");

    }
}

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

        printf("As matrizes %c e %c nao podem ser somadas pois suas dimensoes sao diferentes!\n", mA->d, mB->d);
        Sleep(DELAY);
        system("cls");

    }
}

void matSub(matriz *mA, matriz *mB, matriz *mC){

    if((mA->r == 0 || mA->c == 0)||(mB->r == 0 || mB->c == 0)){
        printf("Primeiro dimensione adequadamente as matrizes %c e %c!\n", mA->d, mB->d);
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

        printf("As matrizes %c e %c nao podem ser subtraidas pois suas dimensoes sao diferentes!\n", mA->d, mB->d);
        Sleep(DELAY);
        system("cls");
    }
}

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
        printf("As matrizes nao podem ser multiplicadas pois o numero de colunas de %c e diferente do numero de linhas de %c!\n", mA->d, mB->d);
        Sleep(DELAY);
        system("cls");
    }
}

void matRead(matriz *m){

    FILE *file;
    char ver;
    char caminho[LIM];
    int i,j;

    printf("Digite o caminho do arquivo: ");
    fflush(stdin);
    gets(caminho);

    file = fopen(caminho, "r");

    if(file == NULL){

        printf("Arquivo nao encontrado!\n");
        printf("Verifique se o caminho digitado esta correto -> %s\n\n", caminho);
        system("pause");
        system("cls");
        return;
    }

    m->c = 0;
    m->r = 0;

    while((ver=fgetc(file))!='\n'){

        if(ver == ' '){
            m->c++;
        }

        else if(ver == EOF){
            break;
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

    printf("Matriz %c lida com sucesso!\n", m->d);
    Sleep(DELAY);
    system("cls");
}

void matWrite(matriz *m){

    if (m->r != 0 || m->c != 0){

        FILE *file;
        int i,j;
        char name[LIM];

        printf("Digite o nome do arquivo a ser salvo: ");
        fflush(stdin);
        gets(name);

        file = fopen(name, "w");

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
