// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the no X\n");
    scanf("%d", &x);

    printf("Enter the no y\n");
    scanf("%d", &y);
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("No swapped now x= %d\n", x);
    printf("No swapped now y= %d\n", y);

    return 0;
}