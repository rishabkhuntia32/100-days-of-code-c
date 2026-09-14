// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("Enter the Row\n");
    scanf("%d", &r);
    printf("Enter the Coulumn\n");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element %d of %d\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
    }
    printf("The sum is %d\n", sum);

    return 0;
}