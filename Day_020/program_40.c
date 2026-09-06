// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

void complement(int n)
{
    if (n == 0)
        return;

    complement(n / 10);

    if (n % 10 == 0)
        printf("1");
    else
        printf("0");
}

int main()
{
    int n;

    printf("Enter binary number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("1\n");
        return 0;
    }

    complement(n);
    printf("\n");

    return 0;
}