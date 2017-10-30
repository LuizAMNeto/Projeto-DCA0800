#ifndef MATCALCMOD_H
#define MATCALCMOD_H
#define DIM_MAX 20

typedef struct{

    float mat [DIM_MAX][DIM_MAX];
    int r;
    int c;

}matriz;

void matDim(matriz *);

void matInit(matriz *);

void matPrint (matriz *);

void matAtrib(matriz *);

void matSum(matriz *, matriz *, matriz *);

void matSub(matriz *, matriz *, matriz *);

void matProd(matriz *, matriz *, matriz *);

#endif // MATCALCMOD_H