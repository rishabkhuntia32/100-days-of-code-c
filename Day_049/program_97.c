// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char arr[100];
    printf("Enter the name\n");
    fgets(arr, 100, stdin);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        
        if (isalpha(arr[i]) && (i == 0 || arr[i - 1] == ' '))
        {
            printf("%c.", toupper(arr[i]));
        }
    }
    printf("\n");

    return 0;
}