//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int r1, c1;
    scanf("%d %d", &r1, &c1);

    int mat1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    int r2, c2;
    scanf("%d %d", &r2, &c2);

    int mat2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    int sum[r1][c1];
    addMatrices(r1, c1, mat1, mat2, sum);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", sum[i][j]);
            if (j < c1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}