//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100005];
    scanf("%s", str);

    reverseString(str);

    printf("%s\n", str);

    return 0;
}