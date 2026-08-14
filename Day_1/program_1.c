/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>

int main() {
    int a,b,sum=0;
    printf("Enter Number A\n");
    scanf("%d",&a);
     printf("Enter Number B\n");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum is %d\n",sum);

    return 0;
}