#ifndef MATCALC_H
#define MATCALC_H
#define DIM_MAX 20

void matDim(int *, int *);

void matInit(int, int, float [][DIM_MAX]);

void matPrint (int, int, float [][DIM_MAX]);

void matAtrib(int, int, float [][DIM_MAX]);

void matSum(float [][DIM_MAX], float [][DIM_MAX], float [][DIM_MAX], int, int);

void matSub(float [][DIM_MAX], float [][DIM_MAX], float [][DIM_MAX], int, int);

void matProd(float [][DIM_MAX], float [][DIM_MAX], float [][DIM_MAX], int, int, int);

#endif // MATCALC_H
