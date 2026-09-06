// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, rem = 1, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, 3);
        temp /= 10;
    }
    if (n == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not Armstrong number\n");
    }

    return 0;
}