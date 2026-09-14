//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int r,c;
    printf("Enter the Row\n");
    scanf("%d",&r);
     printf("Enter the Coulumn\n");
    scanf("%d",&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("Enter the element %d of %d\n",i+1,j+1);
           scanf("%d",&a[i][j]);
        }
        
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("%d\t",a[i][j]);
           
        }

           printf("\n");
        
    }
    
    return 0;
}