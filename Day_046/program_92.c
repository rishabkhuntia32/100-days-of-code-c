//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

char firstRepeatingLowercase(const char *str) {
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            if (seen[idx]) {
                return str[i];
            }
            seen[idx] = 1;
        }
    }

    return '\0';
}

int main() {
    char str[100005];
    scanf("%s", str);

    char res = firstRepeatingLowercase(str);
    if (res != '\0') {
        printf("%c\n", res);
    } else {
        printf("-1\n");
    }

    return 0;
}