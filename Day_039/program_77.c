//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }
    
    int matrix[100][100];
    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int limit = (rows < cols) ? rows : cols;
    int isDistinct = 1;
    
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }
    
    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}