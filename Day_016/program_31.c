//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
    int n, temp, rem, rev = 0, power = 1;

    printf("Enter the number\n");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 2;       
        rev = rev + rem * power;
        power = power * 10;
        temp = temp / 2;
    }

    printf("%d\n", rev);

    return 0;
}