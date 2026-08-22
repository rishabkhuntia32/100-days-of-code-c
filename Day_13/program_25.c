// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main()
{
    int n, a, b;
    printf("Enter A and B\n");
    scanf("%d %d", &a, &b);

    printf("Enter the option\n");
    printf("1.+\n2.-\n3.*\n4./\n5.%%\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:

        printf("The sum is %d", a + b);
        break;

    case 2:

        printf("The substraction is %d", a + b);
        break;
    case 3:

        printf("The product is %d", a * b);
        break;
    case 4:

        printf("The division is %d", a / b);
        break;
    case 5:

        printf("The remainder is %d", a % b);
        break;
    default:
        printf("INVALID INPUT");
    }
    return 0;
}