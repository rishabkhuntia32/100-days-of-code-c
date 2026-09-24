//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    char c[15];
    int j = 0;

    printf("Enter the word\n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
            str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        else
        {
            c[j++] = str[i];
        }
    }

    c[j] = '\0';

    printf("%s\n", c);

    return 0;
}