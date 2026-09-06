//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

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

   if (rev==n)
   {
    printf("Palindrome Number");
   }
   else
   {
    printf("Not Palindrome Number");

   }
   

    return 0;
}