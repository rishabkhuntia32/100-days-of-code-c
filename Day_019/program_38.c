// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main()
{
    int n, temp, rem = 1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }
    printf("The sum is %d\n", sum);

    return 0;
}