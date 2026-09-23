// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];char c;
    printf("Enter the word\n");
    scanf("%s", str);
    printf("Enter character to be searched\n");
    scanf(" %c", &c);
    int count = 0;

    for (int i = 0; i < str[i]!='\0'; i++)
    {
        if (c == str[i])
        {
            count++;
        }
    }
    printf("The frequncy of %c is %d",c,count);

    return 0;
}