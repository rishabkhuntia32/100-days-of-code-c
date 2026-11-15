//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(const char *s1, const char *s2) {
    int len1 = (int)strlen(s1);
    int len2 = (int)strlen(s2);

    if (len1 != len2) {
        return 0;
    }
    if (len1 == 0) {
        return 1;
    }

    char doubled[200010];
    int i;
    for (i = 0; i < len1; i++) {
        doubled[i] = s1[i];
        doubled[len1 + i] = s1[i];
    }
    doubled[2 * len1] = '\0';

    if (strstr(doubled, s2) != 0) {
        return 1;
    }
    return 0;
}

int main() {
    char s1[100005], s2[100005];

    if (fgets(s1, sizeof(s1), stdin) == 0 || fgets(s2, sizeof(s2), stdin) == 0) {
        return 0;
    }

    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';

    if (isRotation(s1, s2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}