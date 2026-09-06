// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Entered Number is Positive");
    }
    else if (n < 0)
    {

        printf("Entered Number is Negative");
    }
    else
    {
        printf("Entered Number is Zero");
    }
    return 0;
}