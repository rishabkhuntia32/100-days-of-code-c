//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
    
    int maxSum = rows + cols - 2;
    
    printf("Diagonal traversal output:\n");
    for (int s = 0; s <= maxSum; s++) {
        if (s % 2 == 0) {
            int r = (s < rows) ? s : rows - 1;
            int c = s - r;
            
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } 
        else {
            int c = (s < cols) ? s : cols - 1;
            int r = s - c;
            
            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    
    printf("\n");
    return 0;
}