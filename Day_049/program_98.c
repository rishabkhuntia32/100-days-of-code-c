//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[100];
    printf("Enter the name\n");
    fgets(arr, 100, stdin);

    int len = strlen(arr);
    if (len > 0 && arr[len - 1] == '\n')
    {
        arr[len - 1] = '\0';
        len--;
    }

    int last_space = -1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ' ')
        {
            last_space = i;
        }
    }

    if (last_space == -1)
    {
        printf("%s\n", arr);
        return 0;
    }

    for (int i = 0; i < last_space; i++)
    {
        if (isalpha(arr[i]) && (i == 0 || arr[i - 1] == ' '))
        {
            printf("%c.", toupper(arr[i]));
        }
    }

    printf(" %s\n", &arr[last_space + 1]);

    return 0;
}