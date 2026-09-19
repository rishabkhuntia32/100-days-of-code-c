//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str [100];
    printf("Enter word\n");
    scanf("%s",str);
    
    int i=0,c=0;
    while (str[i]!='\0')
    {
       c++;
       i++;
    }
    printf("The lenght os string is %d",c);
    
    return 0;
}