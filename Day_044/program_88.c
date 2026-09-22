//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the word\n");
    fgets(str, 20, stdin);
    
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == 32)
        {
           str[i]='-';
        }
       
    }
    puts(str);

    return 0;
}