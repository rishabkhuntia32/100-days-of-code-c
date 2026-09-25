// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char longest[1000] = "";
    char current[1000] = "";

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    int i = 0, j = 0;
    int max_len = 0;

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
        {
            current[j++] = str[i];
        }
        else
        {
            if (j > 0)
            {
                current[j] = '\0';
                if (j > max_len)
                {
                    max_len = j;
                    strcpy(longest, current);
                }
                j = 0;
            }
        }

        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }

    printf("\nResult: %s\n", longest);

    return 0;
}