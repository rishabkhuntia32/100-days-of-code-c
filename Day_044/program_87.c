// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the word\n");
    fgets(str, 20, stdin);
    int s = 0, d = 0, sp = 0;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == 32)
        {
            s++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            d++;
        }
        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            continue;
        }
        else
        {
            sp++;
        }
    }
    printf("Space : %d  Digit : %d  Special : %d", s, d, sp);

    return 0;
}