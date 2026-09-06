// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main()
{
    int n, temp, rem, product = 1;
    printf("Enter the numbers\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        if (rem % 2 != 0)
        {
            product *= rem;
        }
        temp /= 10;
    }
    printf("The Product is %d", product);

    return 0;
}