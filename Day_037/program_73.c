//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

void computeRowSums(int rows, int cols, int matrix[rows][cols], int rowSums[]) {
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
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

    int rowSums[rows];
    computeRowSums(rows, cols, matrix, rowSums);

    for (int i = 0; i < rows; i++) {
        printf("%d", rowSums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}