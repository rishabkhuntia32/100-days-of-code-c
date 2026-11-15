//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int isSymmetric(int rows, int cols, int matrix[rows][cols]) {
    // A symmetric matrix must be square
    if (rows != cols) {
        return 0;
    }

    // Only check the upper triangle above the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isSymmetric(rows, cols, matrix)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}