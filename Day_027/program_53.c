/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 9; i++) 
    {
        
        int row = (i <= 5) ? i : (10 - i);
        int stars = 2 * row - 1;

        for (int j = 1; j <= stars; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}