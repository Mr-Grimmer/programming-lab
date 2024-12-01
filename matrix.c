#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3  // Size of the matrix

// Function to multiply a matrix by a vector
void multiplyMatrices(double A[N][N], double B[N], double result[N]) {
    for (int i = 0; i < N; i++) {
        result[i] = 0;
        for (int j = 0; j < N; j++) {
            result[i] += A[i][j] * B[j];
        }
    }
}

// Function to compute matrix power
void matrixPower(double matrix[N][N], int power, double result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = (i == j) ? 1 : 0;  // Initialize as identity matrix
        }
    }
    double temp[N][N];
    for (int p = 0; p < power; p++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                temp[i][j] = 0;
                for (int k = 0; k < N; k++) {
                    temp[i][j] += result[i][k] * matrix[k][j];
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                result[i][j] = temp[i][j];
            }
        }
    }
}

int main() {
    double M[N][N], R[N], result[N];
    int p;

    // Input for the matrix M
    printf("Enter the elements of the %d x %d matrix M (row by row):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%lf", &M[i][j]);
        }
    }

    // Input for the power p
    printf("Enter the power p: ");
    scanf("%d", &p);

    // Input for the vector R
    printf("Enter the elements of the %d-dimensional vector R:\n", N);
    for (int i = 0; i < N; i++) {
        printf("R[%d]: ", i);
        scanf("%lf", &R[i]);
    }

    // Compute M^p using matrixPower function
    double Mp[N][N];
    matrixPower(M, p, Mp);

    // Compute R = M^p * R
    multiplyMatrices(Mp, R, result);

    // Print the result
    printf("Resultant vector R = M^p * R:\n");
    for (int i = 0; i < N; i++) {
        printf("%.5f ", result[i]);
    }
    printf("\n");

    return 0;
}
