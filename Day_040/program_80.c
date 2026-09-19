//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int s1, s2, s3, s4;

    printf("Enter matrix row Size of A\n");
    scanf("%d", &s1);
    printf("Enter matrix column Size of A\n");
    scanf("%d", &s2);

    printf("Enter matrix row Size of B\n");
    scanf("%d", &s3);
    printf("Enter matrix column Size of B\n");
    scanf("%d", &s4);

    int a[s1][s2], b[s3][s4], c[s1][s4];
    if (s2 == s3)
    {

        for (int i = 0; i < s1; i++)
        {
            for (int j = 0; j < s2; j++)
            {
                printf("Enter Element %d x %d of A\n", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < s3; i++)
        {
            for (int j = 0; j < s4; j++)
            {
                printf("Enter Element %d x %d of B\n", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < s1; i++)
        {
            
            for (int j = 0; j < s4; j++)
            {
                 c[i][j] = 0;
                
                 for (int k = 0; k < s2; k++)
                 {
                    c[i][j]+=a[i][k]*b[k][j];
                 }
                 
            }
        

            
        }
    
    for (int i = 0; i < s1; i++)
            {
                for (int j = 0; j < s4; j++)
                {
                    printf("%d\t", c[i][j]);
                }

                printf("\n");
            }

        }

    else
    {
        printf("Multiplication not possible\n");
    }

    return 0;
}