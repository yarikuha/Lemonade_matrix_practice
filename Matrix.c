#include<stdio.h>
#include"Matrix.h"
void MatrixTranspose(float* matrixA, float* result)
{
    result[0] = matrixA[0];
    result[1] = matrixA[3];
    result[2] = matrixA[6];         
    result[3] = matrixA[1];
    result[4] = matrixA[4];
    result[5] = matrixA[7];
    result[6] = matrixA[2];
    result[7] = matrixA[5];
    result[8] = matrixA[8];
}
