// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

int main()
{
    char n;
    printf("Enter the character\n");
    scanf("%c", &n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    {
        printf("VOWEL\n");
    }
    else if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
    {
        printf("CONSONANT\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}