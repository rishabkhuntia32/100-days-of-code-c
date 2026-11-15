//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseRange(char *str, int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

void reverseEachWord(char *str) {
    int i = 0;
    int start = 0;

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseRange(str, start, i - 1);
            if (str[i] == '\0') {
                break;
            }
            start = i + 1;
        }
        i++;
    }
}

int main() {
    char str[100005];

    if (scanf(" %[^\n]", str) != 1) {
        return 0;
    }

    reverseEachWord(str);

    printf("%s\n", str);

    return 0;
}