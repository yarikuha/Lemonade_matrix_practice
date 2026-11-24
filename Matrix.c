#include<stdio.h>
#include"Matrix.h"
void MatrixDet2x2(float* matrixA, float* result)
{
    *result = matrixA[0] * matrixA[3] - matrixA[1] * matrixA[2];
}