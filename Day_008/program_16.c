// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter First Number\n");
    scanf("%d", &a);
    printf("Enter Second Number\n");
    scanf("%d", &b);
    printf("Enter Third Number\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The Largest Number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The Largest Number is %d", b);
    }
    else
    {
        printf("The Largest Number is %d", c);
    }

    return 0;
}