#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB) {
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            C[i * colunasB + j] = 0;
            for (int k = 0; k < colunasA; k++) {
                C[i * colunasB + j] += A[i * colunasA + k] * B[k * colunasB + j];
            }
        }
    }
}

int main() {
    int linhasA = 2, colunasA = 3, colunasB = 4;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][4] = {{7, 8, 9, 10}, {11, 12, 13, 14}, {15, 16, 17, 18}};
    int C[2][4];

    multiplica_matrizes((int *)A, (int *)B, (int *)C, linhasA, colunasA, colunasB);

    printf("Matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < colunasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C (resultado):\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}