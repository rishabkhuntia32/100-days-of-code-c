//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];

    if (scanf("%s", str) != 1) {
        return 0;
    }

    int n = (int)strlen(str);
    int first = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}