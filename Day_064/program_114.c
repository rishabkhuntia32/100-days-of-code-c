/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without 
repeating characters. Print the length as output.


Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int maxLen = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];

        // If the character was seen inside the current window, shrink from the left
        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }

        lastSeen[ch] = right;

        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s[100005];
    scanf("%s", s);

    printf("%d\n", lengthOfLongestSubstring(s));

    return 0;
}