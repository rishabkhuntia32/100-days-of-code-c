// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter No A\n");
    scanf("%d", &a);
    printf("Enter No B\n");
    scanf("%d", &b);
    printf("The Number before swapping is A=%d & B=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The Number after swapping is A=%d & B=%d\n", a, b);

    return 0;
}