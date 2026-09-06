//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, c = 0, rev = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        c++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;

        rev += remainder * (int)pow(10, c - 1);

        c--;
        temp /= 10;
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}