#include<stdio.h>
#include"Matrix.h"

void MatrixAddition(float* matrixA, float* matrixB, float* result) {
    for (int i = 0; i < 9; i++) {
        result[i] = matrixA[i] + matrixB[i];
    }
}