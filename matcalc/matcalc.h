#ifndef MATCALC_H
#define MATCALC_H
#define DIM_MAX 20

typedef struct{

    float mat [DIM_MAX][DIM_MAX];
    int r;
    int c;
    char d;

}matriz;

/**
 * @brief matDim "Dimensiona o tamanho da matriz a partir de dois valores inteiros fornecidos pelo usuário."
 * @param r "Representa o número de linhas da matriz recebida pela função."
 * @param c "Representa o número de colunas da matriz recebida pela função."
 */

void matDim(matriz *);

/**
 * @brief matInit "Atribui valores aleatórios, de um intervalo definido pelo usuário, as entradas de qualquer matriz fonecida."
 * @param m "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matInit(matriz *);

/**
 * @brief matPrint "Exibe na tela os valores de uma matriz fornecida."
 * @param m "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matPrint (matriz *);

/**
 * @brief matAtrib "Permite que o usuário atribua valores manualmente as entradas de uma matriz fornecida."
 * @param m "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matAtrib(matriz *);

/**
 * @brief matSum "Soma valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mB "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mC "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matSum(matriz *, matriz *, matriz *);

/**
 * @brief matSub "Subtrai valores correspondentes de duas matrizes fornecidas, atribuindo os valores a uma matriz resultante."
 * @param mA "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mB "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mC "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matSub(matriz *, matriz *, matriz *);

/**
 * @brief matProd "Efetua a operação de multiplicação entre duas matrizes, armazenando o produto em uma matriz resultante."
 * @param mA "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mB "Uma váriavel do tipo 'matriz' recebida pela função."
 * @param mC "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matProd(matriz *, matriz *, matriz *);

/**
 * @brief matRead "Le uma matriz a partir de um arquivo de texto, considerando a quantidade de linhas e colunas."
 * @param m "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matRead(matriz *);

/**
 * @brief matWrite "Escreve uma matriz em um arquivo de texto(.txt)."
 * @param m "Uma váriavel do tipo 'matriz' recebida pela função."
 */

void matWrite(matriz *);

#endif // MATCALC_H
