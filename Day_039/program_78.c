//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int r,c;
    printf("Enter row and column\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
       printf("Enter the element %d of %d\n",i+1,j+1);
       scanf("%d",&a[i][j]);
      }
      
    }
    int sum=0;
     for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
       if (i==j)
       {
        sum+=a[i][j];
       }
       
      }
      
    }
       printf("The sum is %d\n",sum);


    
    return 0;
}