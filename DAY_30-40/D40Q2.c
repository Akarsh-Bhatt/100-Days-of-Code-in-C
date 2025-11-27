//Multiply two matrices.
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void multiplyMatrices(int first[][MAX], int second[][MAX], int result[][MAX], int r1, int c1, int r2, int c2) {
    // 1. Initialize result matrix to 0
    // This is crucial because we will be adding values to these cells.
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }

    // 2. Perform Multiplication
    // Loop through every row of the First Matrix
    for (int i = 0; i < r1; ++i) {
        // Loop through every column of the Second Matrix
        for (int j = 0; j < c2; ++j) {
            // Loop for the Dot Product sum
            // k goes from 0 to c1 (which is also equal to r2)
            for (int k = 0; k < c1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][MAX], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Validation Check
    if (c1 != r2) {
        printf("Error: Matrix multiplication not possible. \n");
        printf("Column of first matrix must equal Row of second matrix.\n");
        return 1;
    }

    // Input First Matrix
    printf("\nEnter elements for matrix 1:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    // Input Second Matrix
    printf("\nEnter elements for matrix 2:\n");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    multiplyMatrices(first, second, result, r1, c1, r2, c2);

    printf("\nResulting Matrix:\n");
    printMatrix(result, r1, c2);

    return 0;
}