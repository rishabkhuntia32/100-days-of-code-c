//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main() {
    char str[100005];
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}