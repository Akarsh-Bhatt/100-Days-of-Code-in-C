//Perform diagonal traversal of a matrix.

#include <stdio.h>

#define ROW 3
#define COL 3

void printDiagonalTraversal(int mat[ROW][COL]) {
    int m = ROW;
    int n = COL;
    
    int row = 0, col = 0;
    
    // Direction flag: 1 for UP-RIGHT, 0 for DOWN-LEFT
    int up = 1; 

    // We need to visit every element exactly once
    int i = 0;
    while (i < m * n) {
        printf("%d ", mat[row][col]);
        i++;

        // Case 1: Moving UP-RIGHT
        if (up) {
            if (col == n - 1) {
                // Hit right wall: Move down, switch to down-left
                row++;
                up = 0;
            } else if (row == 0) {
                // Hit top wall: Move right, switch to down-left
                col++;
                up = 0;
            } else {
                // Standard move up-right
                row--;
                col++;
            }
        }
        // Case 2: Moving DOWN-LEFT
        else {
            if (row == m - 1) {
                // Hit bottom wall: Move right, switch to up-right
                col++;
                up = 1;
            } else if (col == 0) {
                // Hit left wall: Move down, switch to up-right
                row++;
                up = 1;
            } else {
                // Standard move down-left
                row++;
                col--;
            }
        }
    }
    printf("\n");
}

int main() {
    // Example Input
    int mat[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    for(int r=0; r<ROW; r++) {
        for(int c=0; c<COL; c++) {
            printf("%d ", mat[r][c]);
        }
        printf("\n");
    }

    printf("\nDiagonal Traversal:\n");
    printDiagonalTraversal(mat);

    return 0;
}